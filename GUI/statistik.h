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
private slots:
    void on_Exit_clicked();

private:
    Ui::statistik *ui;
};

#endif // STATISTIK_H
