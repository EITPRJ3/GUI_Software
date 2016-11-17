#ifndef STATISTIK_H
#define STATISTIK_H
#include <QWidget>

namespace Ui {
class statistik;
}

class statistik : public QWidget
{
    Q_OBJECT
public:
    explicit statistik(QWidget *parent = 0);
    ~statistik();
    void makePie();
    void setLabels();
    float countProcent(int *dataArray,int index);
    int getTotal()const{return total_;}
private slots:
    void on_Exit_clicked();

private:
    Ui::statistik *ui;
    int dataArray[5];
    int total_;
};

#endif // STATISTIK_H
