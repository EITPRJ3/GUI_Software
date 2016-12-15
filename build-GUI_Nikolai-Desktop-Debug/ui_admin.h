/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QPushButton *clearDatabase;
    QPushButton *Status;
    QPushButton *Exit;

    void setupUi(QWidget *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(480, 272);
        clearDatabase = new QPushButton(admin);
        clearDatabase->setObjectName(QString::fromUtf8("clearDatabase"));
        clearDatabase->setGeometry(QRect(210, 80, 91, 23));
        Status = new QPushButton(admin);
        Status->setObjectName(QString::fromUtf8("Status"));
        Status->setGeometry(QRect(210, 130, 80, 23));
        Exit = new QPushButton(admin);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(30, 230, 80, 23));

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QWidget *admin)
    {
        admin->setWindowTitle(QApplication::translate("admin", "Form", 0, QApplication::UnicodeUTF8));
        clearDatabase->setText(QApplication::translate("admin", "Clear database", 0, QApplication::UnicodeUTF8));
        Status->setText(QApplication::translate("admin", "Status", 0, QApplication::UnicodeUTF8));
        Exit->setText(QApplication::translate("admin", "Tilbage", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
