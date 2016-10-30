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
    QVBoxLayout *leftVLayout;
    QSpacerItem *OverExit;
    QPushButton *tmpExit;
    QSpacerItem *MellemExitFyldVand;
    QPushButton *waterButton;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *OverAdmin;
    QPushButton *admin_Button;
    QSpacerItem *UnderAdmin;
    QVBoxLayout *centerVLayout;
    QLabel *label;
    QSpacerItem *OverSvag;
    QPushButton *weakCoffee;
    QSpacerItem *mellemSvagAlm;
    QPushButton *normalCoffee;
    QSpacerItem *MellemAlmStraek;
    QPushButton *strongCoffee;
    QSpacerItem *UnderStaerk;
    QVBoxLayout *rightVLayout;
    QSpacerItem *OverStatus;
    QPushButton *favoriteCoffee;
    QVBoxLayout *verticalLayout;
    QSpacerItem *OverStats;
    QPushButton *statistik;
    QSpacerItem *UnderStats;

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
        horizontalLayoutWidget->setGeometry(QRect(9, 9, 461, 282));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        leftVLayout = new QVBoxLayout();
        leftVLayout->setSpacing(6);
        leftVLayout->setObjectName(QString::fromUtf8("leftVLayout"));
        leftVLayout->setSizeConstraint(QLayout::SetFixedSize);
        OverExit = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        leftVLayout->addItem(OverExit);

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
""));

        leftVLayout->addWidget(tmpExit);

        MellemExitFyldVand = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        leftVLayout->addItem(MellemExitFyldVand);

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

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        OverAdmin = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(OverAdmin);

        admin_Button = new QPushButton(horizontalLayoutWidget);
        admin_Button->setObjectName(QString::fromUtf8("admin_Button"));

        verticalLayout_2->addWidget(admin_Button);

        UnderAdmin = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(UnderAdmin);


        leftVLayout->addLayout(verticalLayout_2);


        horizontalLayout->addLayout(leftVLayout);

        centerVLayout = new QVBoxLayout();
        centerVLayout->setSpacing(6);
        centerVLayout->setObjectName(QString::fromUtf8("centerVLayout"));
        centerVLayout->setSizeConstraint(QLayout::SetFixedSize);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        centerVLayout->addWidget(label);

        OverSvag = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        centerVLayout->addItem(OverSvag);

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

        mellemSvagAlm = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        centerVLayout->addItem(mellemSvagAlm);

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

        MellemAlmStraek = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        centerVLayout->addItem(MellemAlmStraek);

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

        UnderStaerk = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        centerVLayout->addItem(UnderStaerk);


        horizontalLayout->addLayout(centerVLayout);

        rightVLayout = new QVBoxLayout();
        rightVLayout->setSpacing(6);
        rightVLayout->setObjectName(QString::fromUtf8("rightVLayout"));
        rightVLayout->setSizeConstraint(QLayout::SetFixedSize);
        OverStatus = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        rightVLayout->addItem(OverStatus);

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

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        OverStats = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(OverStats);

        statistik = new QPushButton(horizontalLayoutWidget);
        statistik->setObjectName(QString::fromUtf8("statistik"));
        statistik->setStyleSheet(QString::fromUtf8("QButtin{\n"
"border-image:url(:/test/Key.png);\n"
"}"));

        verticalLayout->addWidget(statistik);

        UnderStats = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(UnderStats);


        rightVLayout->addLayout(verticalLayout);


        horizontalLayout->addLayout(rightVLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        tmpExit->setText(QApplication::translate("MainWindow", "exit", 0, QApplication::UnicodeUTF8));
        waterButton->setText(QApplication::translate("MainWindow", "Fyld vand", 0, QApplication::UnicodeUTF8));
        admin_Button->setText(QApplication::translate("MainWindow", "Admin", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "           Kaffeautomat", 0, QApplication::UnicodeUTF8));
        weakCoffee->setText(QApplication::translate("MainWindow", "Svag kaffe", 0, QApplication::UnicodeUTF8));
        normalCoffee->setText(QApplication::translate("MainWindow", "Alm. Kaffe", 0, QApplication::UnicodeUTF8));
        strongCoffee->setText(QApplication::translate("MainWindow", "St\303\246rk kaffe", 0, QApplication::UnicodeUTF8));
        favoriteCoffee->setText(QApplication::translate("MainWindow", "Status", 0, QApplication::UnicodeUTF8));
        statistik->setText(QApplication::translate("MainWindow", "Statistik", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
