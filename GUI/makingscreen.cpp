#include "makingscreen.h"
#include "ui_makingscreen.h"
#include "QMovie"
#include <QTimer>
#include <iostream>
#include <QSize>

makingScreen::makingScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::makingScreen)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:white;");
    setWindowFlags(Qt::FramelessWindowHint);


}

makingScreen::~makingScreen()
{
    delete ui;
}

void makingScreen::init(int value)
{

    this->show();

    switch(value)
    {
     case 1:
        coffeeScreen();
        break;
     case 2:
        waterScreen();
        break;

     case 3:
        failedScreen();
        break;

     case 4:
        strongScreen();
        break;
    }
}

void makingScreen::coffeeScreen()
{
    QMovie* coffeeMovie = new QMovie(":/test/coffee.gif");
    ui->screen->setMovie(coffeeMovie);
    coffeeMovie->start();
    ui->makingText->setText("Din kaffe brygges");
    QTimer::singleShot(3000,this,SLOT(close()));
}

void makingScreen::waterScreen()
{
    QMovie* coffeeMovie = new QMovie(":/test/tea.gif");
    ui->screen->setMovie(coffeeMovie);
    coffeeMovie->setScaledSize(QSize(475,300));
    ui->makingText->hide();
    coffeeMovie->start();
    QTimer::singleShot(3000,this,SLOT(close()));
}

void makingScreen::failedScreen()
{
    QMovie* coffeeMovie = new QMovie(":/test/sadCoffee.gif");
    ui->screen->setMovie(coffeeMovie);
    coffeeMovie->setScaledSize(QSize(475,330));
    coffeeMovie->start();
    ui->makingText->setText("Din kaffe fejlede - Kontakt pedellen");
    QTimer::singleShot(3000,this,SLOT(close()));
}

void makingScreen::strongScreen()
{
    QMovie* coffeeMovie = new QMovie(":/test/strongCoffee.gif");
    ui->screen->setMovie(coffeeMovie);
    coffeeMovie->setScaledSize(QSize(475,400));
    coffeeMovie->start();
    ui->makingText->setText("Din kaffe brygges");
    QTimer::singleShot(3000,this,SLOT(close()));
}
