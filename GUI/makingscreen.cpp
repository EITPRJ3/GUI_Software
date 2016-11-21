#include "makingscreen.h"
#include "ui_makingscreen.h"
#include <QTimer>
#include <QSize>
#include "qdebug.h"

makingScreen::makingScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::makingScreen)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:white;");
    setWindowFlags(Qt::FramelessWindowHint);

    qDebug() << "Making screen oprettet " <<endl;
    this->show();

}

makingScreen::~makingScreen()
{
    qDebug() << "making screen nedlægges" <<endl;
    delete coffeeMovie;
    delete ui;
}

void makingScreen::init(int value)
{

    this->show();

    switch(value)
    {
     case 0:
        waterScreen();
        break;
     case 1:
        weakScreen();
        break;
     case 2:
        NormalCoffeeScreen();
        break;
     case 3:
        strongScreen();
        break;
     case 4:
        favoriteScreen();
        break;
     case 5:
        failedScreen();
        break;
    default:
        break;
    }
}

void makingScreen::NormalCoffeeScreen()
{
    qDebug() << "Normalscreen her" << endl;
    coffeeMovie = new QMovie(":/test/coffee.gif");
    ui->screen->setMovie(coffeeMovie);
    coffeeMovie->start();
    ui->makingText->setText("Din kaffe brygges");
}

void makingScreen::waterScreen()
{
    coffeeMovie = new QMovie(":/test/tea.gif");
    ui->screen->setMovie(coffeeMovie);
    coffeeMovie->setScaledSize(QSize(475,300));
    ui->makingText->hide();
    coffeeMovie->start();
}

void makingScreen::failedScreen()
{
    coffeeMovie = new QMovie(":/test/sadCoffee.gif");
    ui->screen->setMovie(coffeeMovie);
    coffeeMovie->setScaledSize(QSize(475,330));
    coffeeMovie->start();
    ui->makingText->setText("Din kaffe fejlede - Kontakt service manden");
}

void makingScreen::weakScreen()
{
    coffeeMovie = new QMovie(":/test/CoffeeTime.gif");
    ui->screen->setMovie(coffeeMovie);
    coffeeMovie->setScaledSize(QSize(300,300));
    coffeeMovie->start();
    ui->makingText->hide();
}

void makingScreen::strongScreen()
{
    coffeeMovie = new QMovie(":/test/strongCoffee.gif");
    ui->screen->setMovie(coffeeMovie);
    coffeeMovie->setScaledSize(QSize(475,400));
    coffeeMovie->start();
    ui->makingText->setText("Din STRONGE kaffe brygges");
}

void makingScreen::favoriteScreen()
{
    coffeeMovie = new QMovie(":/test/HappyCoffee.gif");
    ui->screen->setMovie(coffeeMovie);
    coffeeMovie->setScaledSize(QSize(250,250));

    coffeeMovie->start();
    ui->makingText->setText("Den mest popular kaffe brygges");
    QTimer::singleShot(3000,this,SLOT(deleteLater()));
}
