#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>

namespace Ui {
class admin;
}

class admin : public QWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = 0);
    ~admin();

private slots:
    void on_Exit_clicked();

    void on_clearDatabase_clicked();

    void on_Status_clicked();

private:
    Ui::admin *ui;
};

#endif // ADMIN_H
