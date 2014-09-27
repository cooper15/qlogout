#include "shudown.h"

Shudown::Shudown()
{

}

void Shudown::apagarSistema()
{
    system("dbus-send --system --print-reply --dest=org.freedesktop.Hal \
           /org/freedesktop/Hal/devices/computer \
           org.freedesktop.Hal.Device.SystemPowerManagement.Shutdown");
}
