/********************************************************************************
** Form generated from reading UI file 'makingScreen.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKINGSCREEN_H
#define UI_MAKINGSCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoffeeScreen
{
public:
    QLabel *coffeeLabel;
    QLabel *label;

    void setupUi(QWidget *CoffeeScreen)
    {
        if (CoffeeScreen->objectName().isEmpty())
            CoffeeScreen->setObjectName(QString::fromUtf8("CoffeeScreen"));
        CoffeeScreen->resize(480, 272);
        coffeeLabel = new QLabel(CoffeeScreen);
        coffeeLabel->setObjectName(QString::fromUtf8("coffeeLabel"));
        coffeeLabel->setGeometry(QRect(-10, 0, 481, 261));
        label = new QLabel(CoffeeScreen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 230, 121, 16));

        retranslateUi(CoffeeScreen);

        QMetaObject::connectSlotsByName(CoffeeScreen);
    } // setupUi

    void retranslateUi(QWidget *CoffeeScreen)
    {
        CoffeeScreen->setWindowTitle(QApplication::translate("CoffeeScreen", "Form", 0, QApplication::UnicodeUTF8));
        coffeeLabel->setText(QString());
        label->setText(QApplication::translate("CoffeeScreen", "Din kaffe brygges", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CoffeeScreen: public Ui_CoffeeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKINGSCREEN_H
