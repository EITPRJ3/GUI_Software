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
    controller = new SpiController();

    connect(controller, SIGNAL(done()), this, SLOT(deleteLater()), Qt::QueuedConnection);
    qDebug() << "Making screen oprettet " <<endl;
    this->show();

}

makingScreen::~makingScreen()
{
    qDebug() << "making screen nedlægges" <<endl;
    delete coffeeMovie;
    delete ui;
    delete controller;
}

void makingScreen::init(int value)
{
    if(value < 6)
        controller->start(value);

    this->show();

    switch(value)
    {
     case HOTWATER:
        waterScreen();
        break;
     case WEAKCOFFEE:
        weakScreen();
        break;
     case NORMALCOFFEE:
        NormalCoffeeScreen();
        break;
     case STRONGCOFFEE:
        strongScreen();
        break;
     case FAILEDSCREEN:
        failedScreen();
        break;
    default:
        break;
    }
}

void makingScreen::NormalCoffeeScreen()
{
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
    QTimer::singleShot(3000,this,SLOT(deleteLater()));
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
    ui->makingText->setText("Din stærk kaffe brygges");
}

/*void makingScreen::favoriteScreen()
{
    coffeeMovie = new QMovie(":/test/HappyCoffee.gif");
    ui->screen->setMovie(coffeeMovie);
    coffeeMovie->setScaledSize(QSize(250,250));

    coffeeMovie->start();
    ui->makingText->setText("Den mest popular kaffe brygges");
}*/
