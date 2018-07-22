/********************************************************************************
** Form generated from reading UI file 'DisplayWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYWIDGET_H
#define UI_DISPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *graphicsView;
    QHBoxLayout *horizontalLayout;
    QLabel *label_status;
    QLabel *label_status_inhalt;
    QLabel *label_filename;
    QLineEdit *lineEdit_filename;
    QPushButton *pushButton_filename;
    QLabel *label_fps;
    QSpinBox *spinBox_fps;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_record;
    QCheckBox *checkBox_preserve;

    void setupUi(QWidget *DisplayWidget)
    {
        if (DisplayWidget->objectName().isEmpty())
            DisplayWidget->setObjectName(QStringLiteral("DisplayWidget"));
        DisplayWidget->setEnabled(true);
        DisplayWidget->resize(481, 591);
        verticalLayout = new QVBoxLayout(DisplayWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QLabel(DisplayWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setMinimumSize(QSize(0, 450));
        graphicsView->setAutoFillBackground(false);
        graphicsView->setStyleSheet(QStringLiteral("background-color:white;"));
        graphicsView->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(graphicsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 15, -1, -1);
        label_status = new QLabel(DisplayWidget);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setMargin(5);

        horizontalLayout->addWidget(label_status);

        label_status_inhalt = new QLabel(DisplayWidget);
        label_status_inhalt->setObjectName(QStringLiteral("label_status_inhalt"));
        label_status_inhalt->setMargin(5);

        horizontalLayout->addWidget(label_status_inhalt);

        label_filename = new QLabel(DisplayWidget);
        label_filename->setObjectName(QStringLiteral("label_filename"));
        label_filename->setMargin(5);

        horizontalLayout->addWidget(label_filename);

        lineEdit_filename = new QLineEdit(DisplayWidget);
        lineEdit_filename->setObjectName(QStringLiteral("lineEdit_filename"));
        lineEdit_filename->setEnabled(false);

        horizontalLayout->addWidget(lineEdit_filename);

        pushButton_filename = new QPushButton(DisplayWidget);
        pushButton_filename->setObjectName(QStringLiteral("pushButton_filename"));

        horizontalLayout->addWidget(pushButton_filename);

        label_fps = new QLabel(DisplayWidget);
        label_fps->setObjectName(QStringLiteral("label_fps"));
        label_fps->setMargin(5);

        horizontalLayout->addWidget(label_fps);

        spinBox_fps = new QSpinBox(DisplayWidget);
        spinBox_fps->setObjectName(QStringLiteral("spinBox_fps"));

        horizontalLayout->addWidget(spinBox_fps);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        checkBox_record = new QCheckBox(DisplayWidget);
        checkBox_record->setObjectName(QStringLiteral("checkBox_record"));
        checkBox_record->setEnabled(false);
        checkBox_record->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(checkBox_record);

        checkBox_preserve = new QCheckBox(DisplayWidget);
        checkBox_preserve->setObjectName(QStringLiteral("checkBox_preserve"));
        checkBox_preserve->setEnabled(true);
        checkBox_preserve->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(checkBox_preserve);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(DisplayWidget);

        QMetaObject::connectSlotsByName(DisplayWidget);
    } // setupUi

    void retranslateUi(QWidget *DisplayWidget)
    {
        DisplayWidget->setWindowTitle(QApplication::translate("DisplayWidget", "Form", nullptr));
        graphicsView->setText(QString());
        label_status->setText(QApplication::translate("DisplayWidget", "Status", nullptr));
        label_status_inhalt->setText(QApplication::translate("DisplayWidget", "Not recording..", nullptr));
        label_filename->setText(QApplication::translate("DisplayWidget", "Filename", nullptr));
        pushButton_filename->setText(QApplication::translate("DisplayWidget", "Durchsuchen", nullptr));
        label_fps->setText(QApplication::translate("DisplayWidget", "FPS", nullptr));
        checkBox_record->setText(QApplication::translate("DisplayWidget", "Record", nullptr));
        checkBox_preserve->setText(QApplication::translate("DisplayWidget", "Preserve Aspect Ratio for Display", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayWidget: public Ui_DisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYWIDGET_H
