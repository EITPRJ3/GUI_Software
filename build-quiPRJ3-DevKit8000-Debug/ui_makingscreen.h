/********************************************************************************
** Form generated from reading UI file 'makingscreen.ui'
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

class Ui_makingScreen
{
public:
    QLabel *screen;
    QLabel *makingText;

    void setupUi(QWidget *makingScreen)
    {
        if (makingScreen->objectName().isEmpty())
            makingScreen->setObjectName(QString::fromUtf8("makingScreen"));
        makingScreen->resize(480, 272);
        screen = new QLabel(makingScreen);
        screen->setObjectName(QString::fromUtf8("screen"));
        screen->setGeometry(QRect(-10, 10, 481, 261));
        makingText = new QLabel(makingScreen);
        makingText->setObjectName(QString::fromUtf8("makingText"));
        makingText->setGeometry(QRect(170, 230, 241, 20));

        retranslateUi(makingScreen);

        QMetaObject::connectSlotsByName(makingScreen);
    } // setupUi

    void retranslateUi(QWidget *makingScreen)
    {
        makingScreen->setWindowTitle(QApplication::translate("makingScreen", "Form", 0, QApplication::UnicodeUTF8));
        screen->setText(QString());
        makingText->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class makingScreen: public Ui_makingScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKINGSCREEN_H
