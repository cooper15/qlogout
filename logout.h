#ifndef LOGOUT_H
#define LOGOUT_H

#include <QMainWindow>
#include<QTimer>
#include"iostream"
#include<QTime>
#include<shudown.h>
#include<reboot.h>
#include<suspend.h>

namespace Ui {
class Logout;
}

class Logout : public QMainWindow
{
    Q_OBJECT

public:
    explicit Logout(QWidget *parent = 0);
    ~Logout();

private slots:
    void countdown();

    void on_apagarBtn_clicked();

    void on_reiniciarBtn_clicked();

    void on_suspenderBtn_clicked();

    void on_cancelarBtn_clicked();

private:
    Ui::Logout *ui;
};

#endif // LOGOUT_H
