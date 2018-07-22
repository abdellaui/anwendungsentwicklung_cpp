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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit_status;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_output;
    QLabel *label_imageShow;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_classiefiedProcess;
    QHBoxLayout *horizontalLayout_execute;
    QPushButton *pushButton_loadData;
    QPushButton *pushButton_train;
    QPushButton *pushButton_test;
    QPushButton *pushButton_testOnImage;
    QHBoxLayout *horizontalLayout_classifier;
    QPushButton *pushButton_loadClassifier;
    QPushButton *pushButton_saveClassifier;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(860, 786);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, -1, 9, -1);
        textEdit_status = new QTextEdit(centralwidget);
        textEdit_status->setObjectName(QStringLiteral("textEdit_status"));
        textEdit_status->setMinimumSize(QSize(350, 0));
        textEdit_status->setMaximumSize(QSize(400, 16777215));
        textEdit_status->setReadOnly(true);
        textEdit_status->setTextInteractionFlags(Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(textEdit_status);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_output = new QVBoxLayout();
        verticalLayout_output->setObjectName(QStringLiteral("verticalLayout_output"));
        label_imageShow = new QLabel(centralwidget);
        label_imageShow->setObjectName(QStringLiteral("label_imageShow"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_imageShow->sizePolicy().hasHeightForWidth());
        label_imageShow->setSizePolicy(sizePolicy);
        label_imageShow->setMinimumSize(QSize(450, 450));
        label_imageShow->setSizeIncrement(QSize(1, 1));
        label_imageShow->setStyleSheet(QStringLiteral(""));
        label_imageShow->setAlignment(Qt::AlignCenter);

        verticalLayout_output->addWidget(label_imageShow);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_output->addItem(verticalSpacer_2);

        label_classiefiedProcess = new QLabel(centralwidget);
        label_classiefiedProcess->setObjectName(QStringLiteral("label_classiefiedProcess"));
        label_classiefiedProcess->setMaximumSize(QSize(16777215, 30));

        verticalLayout_output->addWidget(label_classiefiedProcess);

        horizontalLayout_execute = new QHBoxLayout();
        horizontalLayout_execute->setObjectName(QStringLiteral("horizontalLayout_execute"));
        pushButton_loadData = new QPushButton(centralwidget);
        pushButton_loadData->setObjectName(QStringLiteral("pushButton_loadData"));
        pushButton_loadData->setMinimumSize(QSize(0, 50));

        horizontalLayout_execute->addWidget(pushButton_loadData);

        pushButton_train = new QPushButton(centralwidget);
        pushButton_train->setObjectName(QStringLiteral("pushButton_train"));
        pushButton_train->setEnabled(false);
        pushButton_train->setMinimumSize(QSize(0, 50));

        horizontalLayout_execute->addWidget(pushButton_train);

        pushButton_test = new QPushButton(centralwidget);
        pushButton_test->setObjectName(QStringLiteral("pushButton_test"));
        pushButton_test->setEnabled(false);
        pushButton_test->setMinimumSize(QSize(0, 50));

        horizontalLayout_execute->addWidget(pushButton_test);

        pushButton_testOnImage = new QPushButton(centralwidget);
        pushButton_testOnImage->setObjectName(QStringLiteral("pushButton_testOnImage"));
        pushButton_testOnImage->setEnabled(false);
        pushButton_testOnImage->setMinimumSize(QSize(0, 50));

        horizontalLayout_execute->addWidget(pushButton_testOnImage);


        verticalLayout_output->addLayout(horizontalLayout_execute);

        horizontalLayout_classifier = new QHBoxLayout();
        horizontalLayout_classifier->setObjectName(QStringLiteral("horizontalLayout_classifier"));
        horizontalLayout_classifier->setContentsMargins(-1, 20, -1, -1);
        pushButton_loadClassifier = new QPushButton(centralwidget);
        pushButton_loadClassifier->setObjectName(QStringLiteral("pushButton_loadClassifier"));

        horizontalLayout_classifier->addWidget(pushButton_loadClassifier);

        pushButton_saveClassifier = new QPushButton(centralwidget);
        pushButton_saveClassifier->setObjectName(QStringLiteral("pushButton_saveClassifier"));
        pushButton_saveClassifier->setEnabled(false);

        horizontalLayout_classifier->addWidget(pushButton_saveClassifier);


        verticalLayout_output->addLayout(horizontalLayout_classifier);


        horizontalLayout->addLayout(verticalLayout_output);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 860, 22));
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
        textEdit_status->setPlaceholderText(QApplication::translate("MainWindow", "waiting...", nullptr));
        label_imageShow->setText(QString());
        label_classiefiedProcess->setText(QApplication::translate("MainWindow", "waiting...", nullptr));
        pushButton_loadData->setText(QApplication::translate("MainWindow", "Load Data", nullptr));
        pushButton_train->setText(QApplication::translate("MainWindow", "Train", nullptr));
        pushButton_test->setText(QApplication::translate("MainWindow", "Test", nullptr));
        pushButton_testOnImage->setText(QApplication::translate("MainWindow", "Test on Image", nullptr));
        pushButton_loadClassifier->setText(QApplication::translate("MainWindow", "Load Classifier", nullptr));
        pushButton_saveClassifier->setText(QApplication::translate("MainWindow", "Save Classifier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
