/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *hSpacer;
    QVBoxLayout *leftVLayout;
    QPushButton *tmpExit;
    QPushButton *waterButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *hSpacer2;
    QVBoxLayout *centerVLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QPushButton *strongCoffee;
    QPushButton *normalCoffee;
    QPushButton *weakCoffee;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *hSpacer3;
    QVBoxLayout *rightVLayout;
    QPushButton *favoriteCoffee;
    QSpacerItem *hSpacer4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 272);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(480, 272));
        MainWindow->setStyleSheet(QString::fromUtf8("QMenu {\n"
"     background-color: yellow; /* sets background of the menu */\n"
"     border: 1px solid black;\n"
" }"));
        MainWindow->setDocumentMode(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(480, 272));
        centralWidget->setStyleSheet(QString::fromUtf8("QWidget { background: rgb(200,200, 200) }"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 9, 461, 284));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        hSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(hSpacer);

        leftVLayout = new QVBoxLayout();
        leftVLayout->setSpacing(6);
        leftVLayout->setObjectName(QString::fromUtf8("leftVLayout"));
        leftVLayout->setSizeConstraint(QLayout::SetFixedSize);
        tmpExit = new QPushButton(horizontalLayoutWidget);
        tmpExit->setObjectName(QString::fromUtf8("tmpExit"));
        tmpExit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    background-color: rgb(49, 49, 49);\n"
"	color: rgb(255, 255, 255);\n"
"	height: 60px;\n"
"	width: 93px;\n"
"	font-size: 11pt;\n"
"	font-weight: bold;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(115, 115, 115);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }"));

        leftVLayout->addWidget(tmpExit);

        waterButton = new QPushButton(horizontalLayoutWidget);
        waterButton->setObjectName(QString::fromUtf8("waterButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(waterButton->sizePolicy().hasHeightForWidth());
        waterButton->setSizePolicy(sizePolicy1);
        waterButton->setMinimumSize(QSize(93, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("Nimbus Sans L"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        waterButton->setFont(font);
        waterButton->setCursor(QCursor(Qt::ArrowCursor));
        waterButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    background-color: rgb(49, 49, 49);\n"
"	color: rgb(255, 255, 255);\n"
"	height: 60px;\n"
"	width: 93px;\n"
"	font-size: 11pt;\n"
"	font-weight: bold;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(115, 115, 115);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }"));

        leftVLayout->addWidget(waterButton);

        verticalSpacer = new QSpacerItem(20, 63, QSizePolicy::Minimum, QSizePolicy::Fixed);

        leftVLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(leftVLayout);

        hSpacer2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(hSpacer2);

        centerVLayout = new QVBoxLayout();
        centerVLayout->setSpacing(6);
        centerVLayout->setObjectName(QString::fromUtf8("centerVLayout"));
        centerVLayout->setSizeConstraint(QLayout::SetFixedSize);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        centerVLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        centerVLayout->addItem(verticalSpacer_2);

        strongCoffee = new QPushButton(horizontalLayoutWidget);
        strongCoffee->setObjectName(QString::fromUtf8("strongCoffee"));
        sizePolicy1.setHeightForWidth(strongCoffee->sizePolicy().hasHeightForWidth());
        strongCoffee->setSizePolicy(sizePolicy1);
        strongCoffee->setMinimumSize(QSize(0, 60));
        strongCoffee->setFont(font);
        strongCoffee->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    background-color: rgb(49, 49, 49);\n"
"	color: rgb(255, 255, 255);\n"
"	height: 60px;\n"
"	width: 93px;\n"
"	font-size: 11pt;\n"
"	font-weight: bold;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(115, 115, 115);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }"));

        centerVLayout->addWidget(strongCoffee);

        normalCoffee = new QPushButton(horizontalLayoutWidget);
        normalCoffee->setObjectName(QString::fromUtf8("normalCoffee"));
        sizePolicy1.setHeightForWidth(normalCoffee->sizePolicy().hasHeightForWidth());
        normalCoffee->setSizePolicy(sizePolicy1);
        normalCoffee->setMinimumSize(QSize(93, 60));
        normalCoffee->setFont(font);
        normalCoffee->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    background-color: rgb(49, 49, 49);\n"
"	color: rgb(255, 255, 255);\n"
"	height: 60px;\n"
"	width: 93px;\n"
"	font-size: 11pt;\n"
"	font-weight: bold;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(115, 115, 115);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }"));

        centerVLayout->addWidget(normalCoffee);

        weakCoffee = new QPushButton(horizontalLayoutWidget);
        weakCoffee->setObjectName(QString::fromUtf8("weakCoffee"));
        sizePolicy1.setHeightForWidth(weakCoffee->sizePolicy().hasHeightForWidth());
        weakCoffee->setSizePolicy(sizePolicy1);
        weakCoffee->setMinimumSize(QSize(0, 60));
        weakCoffee->setFont(font);
        weakCoffee->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    background-color: rgb(49, 49, 49);\n"
"	color: rgb(255, 255, 255);\n"
"	height: 60px;\n"
"	width: 93px;\n"
"	font-size: 11pt;\n"
"	font-weight: bold;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(115, 115, 115);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }"));

        centerVLayout->addWidget(weakCoffee);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        centerVLayout->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(centerVLayout);

        hSpacer3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(hSpacer3);

        rightVLayout = new QVBoxLayout();
        rightVLayout->setSpacing(6);
        rightVLayout->setObjectName(QString::fromUtf8("rightVLayout"));
        rightVLayout->setSizeConstraint(QLayout::SetFixedSize);
        favoriteCoffee = new QPushButton(horizontalLayoutWidget);
        favoriteCoffee->setObjectName(QString::fromUtf8("favoriteCoffee"));
        sizePolicy1.setHeightForWidth(favoriteCoffee->sizePolicy().hasHeightForWidth());
        favoriteCoffee->setSizePolicy(sizePolicy1);
        favoriteCoffee->setMinimumSize(QSize(0, 60));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        favoriteCoffee->setFont(font1);
        favoriteCoffee->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    background-color: rgb(49, 49, 49);\n"
"	color: rgb(255, 255, 255);\n"
"	height: 60px;\n"
"	width: 93px;\n"
"	font-size: 11pt;\n"
"	font-weight: bold;\n"
"	border-image: url(https://camo.githubusercontent.com/68cfb3317a69ec8385274675c55195437be5d7fb/687474703a2f2f7777772e7761727769636b73686972652d73656375726974792e636f6d2f696d616765732f6b65792e706e67);\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: rgb(115, 115, 115);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }"));

        rightVLayout->addWidget(favoriteCoffee);


        horizontalLayout->addLayout(rightVLayout);

        hSpacer4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(hSpacer4);

        MainWindow->setCentralWidget(centralWidget);
        horizontalLayoutWidget->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        tmpExit->setText(QApplication::translate("MainWindow", "exit", 0, QApplication::UnicodeUTF8));
        waterButton->setText(QApplication::translate("MainWindow", "Fyld vand", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Kaffeautomat", 0, QApplication::UnicodeUTF8));
        strongCoffee->setText(QApplication::translate("MainWindow", "Svag kaffe", 0, QApplication::UnicodeUTF8));
        normalCoffee->setText(QApplication::translate("MainWindow", "Alm. Kaffe", 0, QApplication::UnicodeUTF8));
        weakCoffee->setText(QApplication::translate("MainWindow", "St\303\246rk kaffe", 0, QApplication::UnicodeUTF8));
        favoriteCoffee->setText(QApplication::translate("MainWindow", "Status", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
