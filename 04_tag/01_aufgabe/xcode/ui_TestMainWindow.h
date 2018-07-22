/********************************************************************************
** Form generated from reading UI file 'TestMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTMAINWINDOW_H
#define UI_TESTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "Adresseingabe.h"

QT_BEGIN_NAMESPACE

class Ui_TestMainWindow
{
public:
    QAction *actionOeffnen;
    QAction *actionSpeichern;
    QAction *actionHinzufuegen;
    QAction *actionLoeschen;
    QAction *actionBeenden;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    Adresseingabe *widgetAdresseingabe;
    QMenuBar *menubar;
    QMenu *menuDatei;
    QMenu *menuAdresse;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TestMainWindow)
    {
        if (TestMainWindow->objectName().isEmpty())
            TestMainWindow->setObjectName(QStringLiteral("TestMainWindow"));
        TestMainWindow->resize(1144, 500);
        TestMainWindow->setMinimumSize(QSize(0, 500));
        actionOeffnen = new QAction(TestMainWindow);
        actionOeffnen->setObjectName(QStringLiteral("actionOeffnen"));
        actionSpeichern = new QAction(TestMainWindow);
        actionSpeichern->setObjectName(QStringLiteral("actionSpeichern"));
        actionHinzufuegen = new QAction(TestMainWindow);
        actionHinzufuegen->setObjectName(QStringLiteral("actionHinzufuegen"));
        actionLoeschen = new QAction(TestMainWindow);
        actionLoeschen->setObjectName(QStringLiteral("actionLoeschen"));
        actionBeenden = new QAction(TestMainWindow);
        actionBeenden->setObjectName(QStringLiteral("actionBeenden"));
        centralwidget = new QWidget(TestMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMinimumSize(QSize(900, 0));

        horizontalLayout_2->addWidget(tableView);

        widgetAdresseingabe = new Adresseingabe(centralwidget);
        widgetAdresseingabe->setObjectName(QStringLiteral("widgetAdresseingabe"));
        widgetAdresseingabe->setMinimumSize(QSize(220, 0));
        widgetAdresseingabe->setMaximumSize(QSize(220, 16777215));

        horizontalLayout_2->addWidget(widgetAdresseingabe);

        TestMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TestMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1144, 21));
        menuDatei = new QMenu(menubar);
        menuDatei->setObjectName(QStringLiteral("menuDatei"));
        menuAdresse = new QMenu(menubar);
        menuAdresse->setObjectName(QStringLiteral("menuAdresse"));
        TestMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TestMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TestMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuDatei->menuAction());
        menubar->addAction(menuAdresse->menuAction());
        menuDatei->addAction(actionOeffnen);
        menuDatei->addAction(actionSpeichern);
        menuDatei->addSeparator();
        menuDatei->addAction(actionBeenden);
        menuAdresse->addAction(actionHinzufuegen);
        menuAdresse->addAction(actionLoeschen);

        retranslateUi(TestMainWindow);
        QObject::connect(actionBeenden, SIGNAL(triggered()), TestMainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(TestMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TestMainWindow)
    {
        TestMainWindow->setWindowTitle(QApplication::translate("TestMainWindow", "MainWindow", nullptr));
        actionOeffnen->setText(QApplication::translate("TestMainWindow", "\303\226ffnen", nullptr));
        actionSpeichern->setText(QApplication::translate("TestMainWindow", "Speichern", nullptr));
        actionHinzufuegen->setText(QApplication::translate("TestMainWindow", "Hinzuf\303\274gen", nullptr));
        actionLoeschen->setText(QApplication::translate("TestMainWindow", "L\303\266schen", nullptr));
        actionBeenden->setText(QApplication::translate("TestMainWindow", "Beenden", nullptr));
        menuDatei->setTitle(QApplication::translate("TestMainWindow", "Datei", nullptr));
        menuAdresse->setTitle(QApplication::translate("TestMainWindow", "Adresse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestMainWindow: public Ui_TestMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTMAINWINDOW_H
