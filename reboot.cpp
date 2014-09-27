#include "reboot.h"
#include<stdlib.h>
Reboot::Reboot()
{
}

void Reboot::reiniciarSistema()
{
    system("dbus-send --system --print-reply --dest=org.freedesktop.Hal \
           /org/freedesktop/Hal/devices/computer \
           org.freedesktop.Hal.Device.SystemPowerManagement.Reboot");
}
