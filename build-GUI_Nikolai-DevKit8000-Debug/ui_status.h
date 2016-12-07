/********************************************************************************
** Form generated from reading UI file 'status.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUS_H
#define UI_STATUS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_status
{
public:
    QLabel *water_cointainer;
    QLabel *coffee_container;
    QPushButton *Exit;

    void setupUi(QWidget *status)
    {
        if (status->objectName().isEmpty())
            status->setObjectName(QString::fromUtf8("status"));
        status->resize(480, 272);
        status->setAutoFillBackground(false);
        water_cointainer = new QLabel(status);
        water_cointainer->setObjectName(QString::fromUtf8("water_cointainer"));
        water_cointainer->setGeometry(QRect(50, 4, 231, 271));
        coffee_container = new QLabel(status);
        coffee_container->setObjectName(QString::fromUtf8("coffee_container"));
        coffee_container->setGeometry(QRect(260, 20, 261, 271));
        Exit = new QPushButton(status);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(20, 240, 80, 23));

        retranslateUi(status);

        QMetaObject::connectSlotsByName(status);
    } // setupUi

    void retranslateUi(QWidget *status)
    {
        status->setWindowTitle(QApplication::translate("status", "Form", 0, QApplication::UnicodeUTF8));
        water_cointainer->setText(QString());
        coffee_container->setText(QString());
        Exit->setText(QApplication::translate("status", "Tilbage", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class status: public Ui_status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUS_H
