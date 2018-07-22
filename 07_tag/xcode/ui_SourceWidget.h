/********************************************************************************
** Form generated from reading UI file 'SourceWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOURCEWIDGET_H
#define UI_SOURCEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SourceWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_chooseMovie;
    QLabel *label_fps;
    QSpinBox *spinBox_fps;
    QProgressBar *progressBar;

    void setupUi(QWidget *SourceWidget)
    {
        if (SourceWidget->objectName().isEmpty())
            SourceWidget->setObjectName(QStringLiteral("SourceWidget"));
        SourceWidget->resize(597, 41);
        horizontalLayout = new QHBoxLayout(SourceWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_chooseMovie = new QPushButton(SourceWidget);
        pushButton_chooseMovie->setObjectName(QStringLiteral("pushButton_chooseMovie"));

        horizontalLayout->addWidget(pushButton_chooseMovie);

        label_fps = new QLabel(SourceWidget);
        label_fps->setObjectName(QStringLiteral("label_fps"));

        horizontalLayout->addWidget(label_fps);

        spinBox_fps = new QSpinBox(SourceWidget);
        spinBox_fps->setObjectName(QStringLiteral("spinBox_fps"));

        horizontalLayout->addWidget(spinBox_fps);

        progressBar = new QProgressBar(SourceWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(100);
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);


        retranslateUi(SourceWidget);

        QMetaObject::connectSlotsByName(SourceWidget);
    } // setupUi

    void retranslateUi(QWidget *SourceWidget)
    {
        SourceWidget->setWindowTitle(QApplication::translate("SourceWidget", "Form", nullptr));
        pushButton_chooseMovie->setText(QApplication::translate("SourceWidget", "Choose Movie", nullptr));
        label_fps->setText(QApplication::translate("SourceWidget", "FPS:", nullptr));
        progressBar->setFormat(QApplication::translate("SourceWidget", "%v|%m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SourceWidget: public Ui_SourceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOURCEWIDGET_H
