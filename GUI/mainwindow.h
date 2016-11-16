#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "spi_worker.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void commHelper(int cmd);
private slots:
    void on_tmpExit_clicked();
    void on_statistik_clicked();
    void on_normalCoffee_clicked();
    void on_waterButton_clicked();
    void on_weakCoffee_clicked();
    void on_strongCoffee_clicked();
    void on_favoriteCoffee_clicked();
    void on_admin_Button_clicked();
    int mostPopularCoffee();
signals:
    void choice(int choice);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
