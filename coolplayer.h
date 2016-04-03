#ifndef COOLPLAYER_H
#define COOLPLAYER_H

#include <QMainWindow>
#include <QMediaPlayer>
namespace Ui {
class CoolPlayer;
}

class CoolPlayer : public QMainWindow
{
    Q_OBJECT

public:
    explicit CoolPlayer(QWidget *parent = 0);
    ~CoolPlayer();

private slots:
    void on_PlayMusic_clicked();

private:
    Ui::CoolPlayer *ui;
    QMediaPlayer *player;
};

#endif // COOLPLAYER_H
