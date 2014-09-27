#include "logout.h"
#include "ui_logout.h"

using::std::cout;
using::std::endl;

int contador = 60;
QTimer *timer;

void timerStop();

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
       timerStop();

}
void timerStop()
{
    timer->stop();
}

void Logout::on_apagarBtn_clicked()
{
    timerStop();
    Shudown *apagar = new Shudown();
    apagar->apagarSistema();
}

void Logout::on_reiniciarBtn_clicked()
{
    timerStop();
    Reboot *reiniciar = new Reboot();
    reiniciar->reiniciarSistema();
}

void Logout::on_suspenderBtn_clicked()
{
    timerStop();
    Suspend *suspender = new Suspend();
    suspender->suspenderSistema();
}
