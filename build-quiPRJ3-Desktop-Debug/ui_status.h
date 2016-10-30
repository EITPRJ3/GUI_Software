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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_status
{
public:

    void setupUi(QWidget *status)
    {
        if (status->objectName().isEmpty())
            status->setObjectName(QString::fromUtf8("status"));
        status->resize(480, 272);

        retranslateUi(status);

        QMetaObject::connectSlotsByName(status);
    } // setupUi

    void retranslateUi(QWidget *status)
    {
        status->setWindowTitle(QApplication::translate("status", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class status: public Ui_status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUS_H
