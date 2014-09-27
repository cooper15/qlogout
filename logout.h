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

    void on_apagarBtn_clicked();

private:
    Ui::Logout *ui;
};

#endif // LOGOUT_H
