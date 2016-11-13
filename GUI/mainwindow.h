#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <statistik.h>
#include <spi_worker.h>
#include <QThread>

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
    void getContainerStatus();
private slots:

    void on_tmpExit_clicked();

    void on_statistik_clicked();

    void on_normalCoffee_clicked();

    void on_waterButton_clicked();

    void on_weakCoffee_clicked();

    void on_strongCoffee_clicked();

    void setSucces(bool status);
    void on_favoriteCoffee_clicked();
    void setConStatus(int conStatus);


    void on_admin_Button_clicked();

signals:
    void sendChoice(int choice);
    void startStatus();
private:
    Ui::MainWindow *ui;
    bool status_;
    int conStatus_;

};

#endif // MAINWINDOW_H
