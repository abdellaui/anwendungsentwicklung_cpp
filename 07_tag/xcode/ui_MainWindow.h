/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "DisplayWidget.h"
#include "FilterWidget.h"
#include "SourceWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    SourceWidget *widget_sourceWidget;
    QHBoxLayout *horizontalLayout_2;
    FilterWidget *widget_filterWidget;
    DisplayWidget *widget_displayWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 567);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setMinimumSize(QSize(1000, 0));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_sourceWidget = new SourceWidget(centralwidget);
        widget_sourceWidget->setObjectName(QStringLiteral("widget_sourceWidget"));
        widget_sourceWidget->setMinimumSize(QSize(0, 50));
        widget_sourceWidget->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(widget_sourceWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget_filterWidget = new FilterWidget(centralwidget);
        widget_filterWidget->setObjectName(QStringLiteral("widget_filterWidget"));
        widget_filterWidget->setMinimumSize(QSize(400, 450));
        widget_filterWidget->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_2->addWidget(widget_filterWidget, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        widget_displayWidget = new DisplayWidget(centralwidget);
        widget_displayWidget->setObjectName(QStringLiteral("widget_displayWidget"));
        widget_displayWidget->setMinimumSize(QSize(500, 0));

        horizontalLayout_2->addWidget(widget_displayWidget);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
