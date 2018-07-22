/********************************************************************************
** Form generated from reading UI file 'LoadDataWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADDATAWIDGET_H
#define UI_LOADDATAWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadDataWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_test;
    QLineEdit *lineEdit_training;
    QToolButton *toolButton_training;
    QLabel *label_training;
    QLineEdit *lineEdit_test;
    QToolButton *toolButton_test;
    QPushButton *pushButton_load;

    void setupUi(QWidget *LoadDataWidget)
    {
        if (LoadDataWidget->objectName().isEmpty())
            LoadDataWidget->setObjectName(QStringLiteral("LoadDataWidget"));
        LoadDataWidget->resize(400, 120);
        LoadDataWidget->setMinimumSize(QSize(400, 120));
        LoadDataWidget->setMaximumSize(QSize(400, 120));
        gridLayout = new QGridLayout(LoadDataWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_test = new QLabel(LoadDataWidget);
        label_test->setObjectName(QStringLiteral("label_test"));

        gridLayout->addWidget(label_test, 2, 0, 1, 1);

        lineEdit_training = new QLineEdit(LoadDataWidget);
        lineEdit_training->setObjectName(QStringLiteral("lineEdit_training"));
        lineEdit_training->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(lineEdit_training, 1, 1, 1, 1);

        toolButton_training = new QToolButton(LoadDataWidget);
        toolButton_training->setObjectName(QStringLiteral("toolButton_training"));

        gridLayout->addWidget(toolButton_training, 1, 3, 1, 1);

        label_training = new QLabel(LoadDataWidget);
        label_training->setObjectName(QStringLiteral("label_training"));

        gridLayout->addWidget(label_training, 1, 0, 1, 1);

        lineEdit_test = new QLineEdit(LoadDataWidget);
        lineEdit_test->setObjectName(QStringLiteral("lineEdit_test"));
        lineEdit_test->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(lineEdit_test, 2, 1, 1, 1);

        toolButton_test = new QToolButton(LoadDataWidget);
        toolButton_test->setObjectName(QStringLiteral("toolButton_test"));

        gridLayout->addWidget(toolButton_test, 2, 3, 1, 1);

        pushButton_load = new QPushButton(LoadDataWidget);
        pushButton_load->setObjectName(QStringLiteral("pushButton_load"));
        pushButton_load->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(pushButton_load, 3, 1, 1, 1);


        retranslateUi(LoadDataWidget);

        QMetaObject::connectSlotsByName(LoadDataWidget);
    } // setupUi

    void retranslateUi(QWidget *LoadDataWidget)
    {
        LoadDataWidget->setWindowTitle(QApplication::translate("LoadDataWidget", "Form", nullptr));
        label_test->setText(QApplication::translate("LoadDataWidget", "Test", nullptr));
        toolButton_training->setText(QApplication::translate("LoadDataWidget", "...", nullptr));
        label_training->setText(QApplication::translate("LoadDataWidget", "Training", nullptr));
        toolButton_test->setText(QApplication::translate("LoadDataWidget", "...", nullptr));
        pushButton_load->setText(QApplication::translate("LoadDataWidget", "load", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadDataWidget: public Ui_LoadDataWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADDATAWIDGET_H
