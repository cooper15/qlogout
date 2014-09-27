#include "logout.h"
#include "ui_logout.h"
#include<QTimer>
#include"iostream"
#include<QTime>
using::std::cout;
using::std::endl;

int contador = 60;
QTimer *timer;

Logout::Logout(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Logout)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(countdown()));
    timer->start(1000);
}

Logout::~Logout()
{
    delete ui;
}

void Logout::countdown()
{
    contador--;
    QString valorActual = QString::number(contador);
    ui->conteoLbl->setText(valorActual + "s");
    if(contador == 0)
        timer->stop();
}
