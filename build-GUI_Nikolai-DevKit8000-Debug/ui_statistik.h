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
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statistik
{
public:
    QPushButton *Exit;
    QLabel *PieLabel;
    QLabel *NormalLabel;
    QLabel *WeakLabel;
    QLabel *WaterLabel;
    QLabel *StrongLabel;
    QLabel *WeakColor;
    QLabel *StrongColor;
    QLabel *WaterColor;
    QLabel *NormalColor;
    QLabel *TotalAntal;
    QLabel *label;

    void setupUi(QWidget *statistik)
    {
        if (statistik->objectName().isEmpty())
            statistik->setObjectName(QString::fromUtf8("statistik"));
        statistik->resize(480, 272);
        Exit = new QPushButton(statistik);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(10, 240, 80, 23));
        PieLabel = new QLabel(statistik);
        PieLabel->setObjectName(QString::fromUtf8("PieLabel"));
        PieLabel->setGeometry(QRect(30, 50, 181, 181));
        NormalLabel = new QLabel(statistik);
        NormalLabel->setObjectName(QString::fromUtf8("NormalLabel"));
        NormalLabel->setGeometry(QRect(220, 130, 271, 16));
        WeakLabel = new QLabel(statistik);
        WeakLabel->setObjectName(QString::fromUtf8("WeakLabel"));
        WeakLabel->setGeometry(QRect(220, 100, 271, 16));
        WaterLabel = new QLabel(statistik);
        WaterLabel->setObjectName(QString::fromUtf8("WaterLabel"));
        WaterLabel->setGeometry(QRect(220, 70, 271, 16));
        StrongLabel = new QLabel(statistik);
        StrongLabel->setObjectName(QString::fromUtf8("StrongLabel"));
        StrongLabel->setGeometry(QRect(220, 160, 271, 16));
        WeakColor = new QLabel(statistik);
        WeakColor->setObjectName(QString::fromUtf8("WeakColor"));
        WeakColor->setGeometry(QRect(190, 100, 16, 16));
        StrongColor = new QLabel(statistik);
        StrongColor->setObjectName(QString::fromUtf8("StrongColor"));
        StrongColor->setGeometry(QRect(190, 160, 16, 16));
        WaterColor = new QLabel(statistik);
        WaterColor->setObjectName(QString::fromUtf8("WaterColor"));
        WaterColor->setGeometry(QRect(190, 70, 16, 16));
        NormalColor = new QLabel(statistik);
        NormalColor->setObjectName(QString::fromUtf8("NormalColor"));
        NormalColor->setGeometry(QRect(190, 130, 16, 16));
        TotalAntal = new QLabel(statistik);
        TotalAntal->setObjectName(QString::fromUtf8("TotalAntal"));
        TotalAntal->setGeometry(QRect(220, 200, 241, 16));
        label = new QLabel(statistik);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 0, 141, 16));

        retranslateUi(statistik);

        QMetaObject::connectSlotsByName(statistik);
    } // setupUi

    void retranslateUi(QWidget *statistik)
    {
        statistik->setWindowTitle(QApplication::translate("statistik", "Form", 0, QApplication::UnicodeUTF8));
        Exit->setText(QApplication::translate("statistik", "Tilbage", 0, QApplication::UnicodeUTF8));
        PieLabel->setText(QString());
        NormalLabel->setText(QApplication::translate("statistik", "TextLabel", 0, QApplication::UnicodeUTF8));
        WeakLabel->setText(QApplication::translate("statistik", "TextLabel", 0, QApplication::UnicodeUTF8));
        WaterLabel->setText(QApplication::translate("statistik", "TextLabel", 0, QApplication::UnicodeUTF8));
        StrongLabel->setText(QApplication::translate("statistik", "TextLabel", 0, QApplication::UnicodeUTF8));
        WeakColor->setText(QString());
        StrongColor->setText(QString());
        WaterColor->setText(QString());
        NormalColor->setText(QString());
        TotalAntal->setText(QApplication::translate("statistik", "TextLabel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("statistik", "Statistik vindue", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class statistik: public Ui_statistik {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIK_H
