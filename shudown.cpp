#include "shudown.h"

Shudown::Shudown()
{

}

void Shudown::apagarSistema()
{
    system("dbus-send --system --print-reply --dest=org.freedesktop.login1 \
           /org/freedesktop/login1 org.freedesktop.login1.Manager.PowerOff \
          boolean:true");
}
