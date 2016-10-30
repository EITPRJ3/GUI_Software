/********************************************************************************
** Form generated from reading UI file 'statistik.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIK_H
#define UI_STATISTIK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statistik
{
public:
    QPushButton *Exit;

    void setupUi(QWidget *statistik)
    {
        if (statistik->objectName().isEmpty())
            statistik->setObjectName(QString::fromUtf8("statistik"));
        statistik->resize(480, 272);
        Exit = new QPushButton(statistik);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(190, 120, 80, 23));

        retranslateUi(statistik);

        QMetaObject::connectSlotsByName(statistik);
    } // setupUi

    void retranslateUi(QWidget *statistik)
    {
        statistik->setWindowTitle(QApplication::translate("statistik", "Form", 0, QApplication::UnicodeUTF8));
        Exit->setText(QApplication::translate("statistik", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class statistik: public Ui_statistik {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIK_H
