#include "reboot.h"
#include<stdlib.h>
Reboot::Reboot()
{
}

void Reboot::reiniciarSistema()
{
    system("dbus-send --system --print-reply --dest=org.freedesktop.login1 \
           /org/freedesktop/login1 org.freedesktop.login1.Manager.Reboot \
           boolean:true");
}
