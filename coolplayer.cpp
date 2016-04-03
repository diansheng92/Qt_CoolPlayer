#include "coolplayer.h"
#include "ui_coolplayer.h"
#include <QtWidgets>
#include <QtMultimedia>
#include <QMediaPlayer>
#include <QFileDialog>
#include <QMessageBox>
CoolPlayer::CoolPlayer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CoolPlayer)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
}

CoolPlayer::~CoolPlayer()
{
    delete ui;
}

void CoolPlayer::on_PlayMusic_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,tr("Open File"),"C:/Users/sheng/Dropbox/workspace/QT/CoolPlayer/"
                                                    ,"All files (*.*);;Music File (*.mp3)");
    //QMessageBox::information(this,tr("File Name"),filename);
    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile(filename));
    player->setVolume(50);
    player->play();
}
