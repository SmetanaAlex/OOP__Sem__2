#pragma once
#include "../libraries_and_namespaces.h"
#include "thread_number.h"
#include <iostream>

using namespace sorts;
namespace parsorts
{
    /**
    *   \brief Distributes elements in the array relative to the selected partition
    *
    *   As partition will be selected high item.
    *   \param arr - array of numbers
    *   \param low - index of begin item
    *   \param high - index of end item
    */
    template<typename T>
    std::size_t partition(std::vector<T>& arr, long low, long high);
    /**
    *   \brief Sorts part of array
    *
    *   \param arr - array of numbers
    *   \param low - index of begin item
    *   \param high - index of end item
    *   \param th_number - class for saving number of open threads
    */
    template<typename T>
    void quick_sorting(std::vector<T>& arr, long low, long high, thnum::ThdNumber& th_number);
    /**
    *   \brief Sorts array
    * 
    *   Parallel version of algorithm.
    * 
    *   Lomuto partition scheme, rightmost pivot.
    *   See [Quick sort.](https://en.wikipedia.org/wiki/Quick_sort "Information about this algorithm in Wikipedia")
    */
    template<typename T>
    void quick_sort(std::vector<T>& arr);
}
namespace parsorts
{
    template<typename T>
    std::size_t partition(std::vector<T>& arr, long low, long high)
    {
        T pivot = arr[high];
        long i = low - 1;
        for (long j = low; j < high; j++)
        {
            if (arr[j] <= pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return std::size_t(i + 1);
    }
    template<typename T>
    void quick_sorting(std::vector<T>& arr, long low, long high, thnum::ThdNumber& th_number)
    {
        if (low < high)
        {
            std::size_t index = partition(arr, low, high);
            std::thread th;
            if (index - low > high - index)
            {
                if (th_number.increase())
                    th = std::thread([=, &arr, &th_number]()
                        {quick_sorting(arr, low, index - 1, th_number); });
                else quick_sorting(arr, low, index - 1, th_number);
                quick_sorting(arr, index + 1, high, th_number);
            }
            else
            {
                if (th_number.increase())
                    th = std::thread([=, &arr, &th_number]()
                        {quick_sorting(arr, index + 1, high, th_number); });
                else quick_sorting(arr, index + 1, high, th_number); 
                quick_sorting(arr, low, index - 1, th_number);
            }
            if (th.joinable())
            {
                th.join();
                th_number.decrease();
            }
        }
    }
    template<typename T>
    void quick_sort(std::vector<T>& arr)
    {
        if(arr.size() < 2) return;
        thnum::ThdNumber th_number;
        quick_sorting(arr, 0, arr.size() - 1, th_number);
    }
}
