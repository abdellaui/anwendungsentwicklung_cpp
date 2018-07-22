/********************************************************************************
** Form generated from reading UI file 'FilterWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERWIDGET_H
#define UI_FILTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilterWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView_filter;
    QHBoxLayout *horizontalLayout;
    QLabel *label_filterSize;
    QComboBox *comboBox_filterSize;

    void setupUi(QWidget *FilterWidget)
    {
        if (FilterWidget->objectName().isEmpty())
            FilterWidget->setObjectName(QStringLiteral("FilterWidget"));
        FilterWidget->resize(368, 396);
        verticalLayout = new QVBoxLayout(FilterWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView_filter = new QTableView(FilterWidget);
        tableView_filter->setObjectName(QStringLiteral("tableView_filter"));
        tableView_filter->setMinimumSize(QSize(350, 350));
        tableView_filter->setMaximumSize(QSize(16777215, 16777215));
        tableView_filter->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView_filter->horizontalHeader()->setVisible(false);
        tableView_filter->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView_filter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_filterSize = new QLabel(FilterWidget);
        label_filterSize->setObjectName(QStringLiteral("label_filterSize"));
        label_filterSize->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(label_filterSize);

        comboBox_filterSize = new QComboBox(FilterWidget);
        comboBox_filterSize->setObjectName(QStringLiteral("comboBox_filterSize"));

        horizontalLayout->addWidget(comboBox_filterSize);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FilterWidget);

        QMetaObject::connectSlotsByName(FilterWidget);
    } // setupUi

    void retranslateUi(QWidget *FilterWidget)
    {
        FilterWidget->setWindowTitle(QApplication::translate("FilterWidget", "Form", nullptr));
        label_filterSize->setText(QApplication::translate("FilterWidget", "Filter Size", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterWidget: public Ui_FilterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERWIDGET_H
