#ifndef MAKINGSCREEN_H
#define MAKINGSCREEN_H

#include <QWidget>
#include "QMovie"
namespace Ui {
class makingScreen;
}

class makingScreen : public QWidget
{
    Q_OBJECT
public:
    explicit makingScreen(QWidget *parent = 0);
    ~makingScreen();
    void init(int value);
    void NormalCoffeeScreen();
    void waterScreen();
    void failedScreen();
    void weakScreen();
    void strongScreen();
    void favoriteScreen();
private:
    Ui::makingScreen *ui;
    QMovie* coffeeMovie;
};

#endif // MAKINGSCREEN_H
