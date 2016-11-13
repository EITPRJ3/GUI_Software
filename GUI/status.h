#ifndef STATUS_H
#define STATUS_H

#include <QWidget>

namespace Ui {
class status;
}

class status : public QWidget
{
    Q_OBJECT

public:
    explicit status(QWidget *parent = 0);
    ~status();
    void doStatusScreen(int conStatus);
private slots:


    void on_Exit_clicked();

private:
    Ui::status *ui;
};

#endif // STATUS_H
