#include "shutdown.h"

Shutdown::Shutdown()
{

}

void Shutdown::apagarSistema()
{
    system("dbus-send --system --print-reply --dest=org.freedesktop.login1 \
           /org/freedesktop/login1 org.freedesktop.login1.Manager.PowerOff \
          boolean:true");
}
