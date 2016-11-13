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
    void coffeeScreen();
    void waterScreen();
    void failedScreen();
    void strongScreen();
private:
    Ui::makingScreen *ui;
    QMovie* coffeeMovie;
};

#endif // MAKINGSCREEN_H
