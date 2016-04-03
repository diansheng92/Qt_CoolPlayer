#include "coolplayer.h"
#include "ui_coolplayer.h"
#include <QtWidgets>
#include <QtMultimedia>
#include <QMediaPlayer>
#include <QFileDialog>
#include <QMediaPlaylist>
#include <QListWidgetItem>
#include <QFileInfo>
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


void CoolPlayer::on_OpenFile_clicked()
{
    //open the file in folder browser.
    QFileInfo filename = QFileDialog::getOpenFileName(this,tr("Open File"),"C:/Users/sheng/Dropbox/workspace/QT/CoolPlayer/"
                                                    ,"All files (*.*);;Music File (*.mp3)");
    QString name = filename.fileName();
    ui->PlayList->addItem(name);
    player->setMedia(QUrl::fromLocalFile(filename.absoluteFilePath()));
    player->setVolume(50);
    player->play();
}

void CoolPlayer::on_PauseMusic_clicked()
{
    player->QMediaPlayer::pause();
}

void CoolPlayer::on_PlayMusic_clicked()
{
    player->QMediaPlayer::play();
}
