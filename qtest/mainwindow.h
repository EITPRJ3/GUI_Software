#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_tmpExit_clicked();

    void on_waterButton_clicked();

    void on_strongCoffee_clicked();

    void on_normalCoffee_clicked();

    void on_weakCoffee_clicked();

    void on_favoriteCoffee_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
