/********************************************************************************
** Form generated from reading UI file 'TrainWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINWIDGET_H
#define UI_TRAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrainWidget
{
public:
    QFormLayout *formLayout;
    QLabel *label_c;
    QDoubleSpinBox *doubleSpinBox_c;
    QLabel *label_gamma;
    QDoubleSpinBox *doubleSpinBox_gamma;
    QPushButton *pushButton_train;

    void setupUi(QWidget *TrainWidget)
    {
        if (TrainWidget->objectName().isEmpty())
            TrainWidget->setObjectName(QStringLiteral("TrainWidget"));
        TrainWidget->resize(250, 120);
        TrainWidget->setMinimumSize(QSize(250, 120));
        TrainWidget->setMaximumSize(QSize(250, 120));
        formLayout = new QFormLayout(TrainWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_c = new QLabel(TrainWidget);
        label_c->setObjectName(QStringLiteral("label_c"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_c);

        doubleSpinBox_c = new QDoubleSpinBox(TrainWidget);
        doubleSpinBox_c->setObjectName(QStringLiteral("doubleSpinBox_c"));
        doubleSpinBox_c->setMinimumSize(QSize(120, 25));
        doubleSpinBox_c->setDecimals(5);
        doubleSpinBox_c->setMinimum(0.1);
        doubleSpinBox_c->setMaximum(9999.99);

        formLayout->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_c);

        label_gamma = new QLabel(TrainWidget);
        label_gamma->setObjectName(QStringLiteral("label_gamma"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_gamma);

        doubleSpinBox_gamma = new QDoubleSpinBox(TrainWidget);
        doubleSpinBox_gamma->setObjectName(QStringLiteral("doubleSpinBox_gamma"));
        doubleSpinBox_gamma->setMinimumSize(QSize(120, 25));
        doubleSpinBox_gamma->setDecimals(5);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_gamma);

        pushButton_train = new QPushButton(TrainWidget);
        pushButton_train->setObjectName(QStringLiteral("pushButton_train"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_train);


        retranslateUi(TrainWidget);

        QMetaObject::connectSlotsByName(TrainWidget);
    } // setupUi

    void retranslateUi(QWidget *TrainWidget)
    {
        TrainWidget->setWindowTitle(QApplication::translate("TrainWidget", "Form", nullptr));
        label_c->setText(QApplication::translate("TrainWidget", "C:", nullptr));
        label_gamma->setText(QApplication::translate("TrainWidget", "Gamma", nullptr));
        pushButton_train->setText(QApplication::translate("TrainWidget", "train", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrainWidget: public Ui_TrainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINWIDGET_H
