/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QWidget *widgetInterface;
    QGridLayout *gridLayout_2;
    QHBoxLayout *durationControlHorizontalLayout;
    QSlider *durationSlider;
    QLabel *durationLabel;
    QHBoxLayout *songControlHorizontalLayout;
    QLabel *songTitleLabel;
    QToolButton *shuffleButton;
    QToolButton *previousSongButton;
    QToolButton *stopButton;
    QToolButton *pauseButton;
    QToolButton *playButton;
    QToolButton *nextSongButton;
    QHBoxLayout *windowPLaylistControlHorizontalLayout;
    QHBoxLayout *playlistControlHorizontalLayout;
    QToolButton *addSongButton;
    QToolButton *removeSongButton;
    QSpacerItem *leftHorizontalSpacer;
    QLabel *windowTitleLabel;
    QSpacerItem *rightHorizontalSpacer;
    QHBoxLayout *windowControlHorizontalLayout;
    QToolButton *minimizeWindowButton;
    QToolButton *maximizeWindowButton;
    QToolButton *closeWindowButton;
    QTableView *playlistTableView;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(500, 250);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widgetInterface = new QWidget(Widget);
        widgetInterface->setObjectName(QString::fromUtf8("widgetInterface"));
        gridLayout_2 = new QGridLayout(widgetInterface);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        durationControlHorizontalLayout = new QHBoxLayout();
        durationControlHorizontalLayout->setObjectName(QString::fromUtf8("durationControlHorizontalLayout"));
        durationSlider = new QSlider(widgetInterface);
        durationSlider->setObjectName(QString::fromUtf8("durationSlider"));
        durationSlider->setOrientation(Qt::Horizontal);

        durationControlHorizontalLayout->addWidget(durationSlider);

        durationLabel = new QLabel(widgetInterface);
        durationLabel->setObjectName(QString::fromUtf8("durationLabel"));
        durationLabel->setMinimumSize(QSize(32, 0));

        durationControlHorizontalLayout->addWidget(durationLabel);


        gridLayout_2->addLayout(durationControlHorizontalLayout, 3, 0, 1, 1);

        songControlHorizontalLayout = new QHBoxLayout();
        songControlHorizontalLayout->setObjectName(QString::fromUtf8("songControlHorizontalLayout"));
        songTitleLabel = new QLabel(widgetInterface);
        songTitleLabel->setObjectName(QString::fromUtf8("songTitleLabel"));

        songControlHorizontalLayout->addWidget(songTitleLabel);

        shuffleButton = new QToolButton(widgetInterface);
        shuffleButton->setObjectName(QString::fromUtf8("shuffleButton"));

        songControlHorizontalLayout->addWidget(shuffleButton);

        previousSongButton = new QToolButton(widgetInterface);
        previousSongButton->setObjectName(QString::fromUtf8("previousSongButton"));

        songControlHorizontalLayout->addWidget(previousSongButton);

        stopButton = new QToolButton(widgetInterface);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        songControlHorizontalLayout->addWidget(stopButton);

        pauseButton = new QToolButton(widgetInterface);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));

        songControlHorizontalLayout->addWidget(pauseButton);

        playButton = new QToolButton(widgetInterface);
        playButton->setObjectName(QString::fromUtf8("playButton"));

        songControlHorizontalLayout->addWidget(playButton);

        nextSongButton = new QToolButton(widgetInterface);
        nextSongButton->setObjectName(QString::fromUtf8("nextSongButton"));

        songControlHorizontalLayout->addWidget(nextSongButton);


        gridLayout_2->addLayout(songControlHorizontalLayout, 2, 0, 1, 1);

        windowPLaylistControlHorizontalLayout = new QHBoxLayout();
        windowPLaylistControlHorizontalLayout->setObjectName(QString::fromUtf8("windowPLaylistControlHorizontalLayout"));
        playlistControlHorizontalLayout = new QHBoxLayout();
        playlistControlHorizontalLayout->setObjectName(QString::fromUtf8("playlistControlHorizontalLayout"));
        addSongButton = new QToolButton(widgetInterface);
        addSongButton->setObjectName(QString::fromUtf8("addSongButton"));

        playlistControlHorizontalLayout->addWidget(addSongButton);

        removeSongButton = new QToolButton(widgetInterface);
        removeSongButton->setObjectName(QString::fromUtf8("removeSongButton"));

        playlistControlHorizontalLayout->addWidget(removeSongButton);


        windowPLaylistControlHorizontalLayout->addLayout(playlistControlHorizontalLayout);

        leftHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        windowPLaylistControlHorizontalLayout->addItem(leftHorizontalSpacer);

        windowTitleLabel = new QLabel(widgetInterface);
        windowTitleLabel->setObjectName(QString::fromUtf8("windowTitleLabel"));

        windowPLaylistControlHorizontalLayout->addWidget(windowTitleLabel);

        rightHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        windowPLaylistControlHorizontalLayout->addItem(rightHorizontalSpacer);

        windowControlHorizontalLayout = new QHBoxLayout();
        windowControlHorizontalLayout->setObjectName(QString::fromUtf8("windowControlHorizontalLayout"));
        minimizeWindowButton = new QToolButton(widgetInterface);
        minimizeWindowButton->setObjectName(QString::fromUtf8("minimizeWindowButton"));

        windowControlHorizontalLayout->addWidget(minimizeWindowButton);

        maximizeWindowButton = new QToolButton(widgetInterface);
        maximizeWindowButton->setObjectName(QString::fromUtf8("maximizeWindowButton"));

        windowControlHorizontalLayout->addWidget(maximizeWindowButton);

        closeWindowButton = new QToolButton(widgetInterface);
        closeWindowButton->setObjectName(QString::fromUtf8("closeWindowButton"));

        windowControlHorizontalLayout->addWidget(closeWindowButton);


        windowPLaylistControlHorizontalLayout->addLayout(windowControlHorizontalLayout);


        gridLayout_2->addLayout(windowPLaylistControlHorizontalLayout, 1, 0, 1, 1);

        playlistTableView = new QTableView(widgetInterface);
        playlistTableView->setObjectName(QString::fromUtf8("playlistTableView"));

        gridLayout_2->addWidget(playlistTableView, 4, 0, 1, 1);


        gridLayout->addWidget(widgetInterface, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "B-Player", nullptr));
        durationLabel->setText(QString());
        songTitleLabel->setText(QString());
        shuffleButton->setText(QString());
        previousSongButton->setText(QString());
        stopButton->setText(QString());
        pauseButton->setText(QString());
        playButton->setText(QString());
        nextSongButton->setText(QString());
        addSongButton->setText(QString());
        removeSongButton->setText(QString());
        windowTitleLabel->setText(QCoreApplication::translate("Widget", "Player", nullptr));
        minimizeWindowButton->setText(QString());
        maximizeWindowButton->setText(QString());
        closeWindowButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
