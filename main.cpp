#include "coolplayer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CoolPlayer player;
    player.show();

    return a.exec();
}
