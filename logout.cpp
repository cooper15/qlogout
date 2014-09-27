#include "logout.h"
#include "ui_logout.h"

using::std::cout;
using::std::endl;

int contador = 60; // Al declarar el contador una sola vez se logra el decremento de más adelante.
QTimer *timer;

void timerStop();

Logout::Logout(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Logout)
{
    ui->setupUi(this);
    setWindowFlags(Qt::WindowStaysOnTopHint);
    // colocar el timer en esta parte vendría siendo similar al evento abrir ventana en Java,
    // esto sucede porque el constructor es invocada cuando se instancia un objeto de la clase,
    // es decir, en el momento en que aparece la ventana.
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(countdown())); // llama a la función cada 1000 ms, es decir 1 seg.
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
    {
        timerStop();
        Shudown *apagar = new Shudown();
        apagar->apagarSistema();
    }


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

void Logout::on_cancelarBtn_clicked()
{
    timerStop();
    this->close();
}
