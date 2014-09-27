#ifndef LOGOUT_H
#define LOGOUT_H

#include <QMainWindow>

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

private:
    Ui::Logout *ui;
};

#endif // LOGOUT_H
