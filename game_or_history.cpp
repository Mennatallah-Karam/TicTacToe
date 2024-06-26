#include "game_or_history.h"
#include "ui_game_or_history.h"
#include "game_history.h"
#include "ai_or_2.h"
#include "ui_ai_or_2.h"
#include "replaygame.h"
#include "ui_replaygame.h"
#include <QStringListModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

#include "GameManager.h"

game_or_history::game_or_history(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::game_or_history)
{
    ui->setupUi(this);
}

game_or_history::~game_or_history()
{
    delete ui;
}

void game_or_history::on_play_new_game_clicked()
{
    AI_or_2 ai_or_2;
    ai_or_2.setModal(true);
    ai_or_2.exec();

}


void game_or_history::on_view_game_history_clicked()
{
    QStringListModel* model = new QStringListModel(this);
    model->setStringList(gameManager.totalhistory);
    qDebug() <<"here"<<gameManager.totalhistory;
    ui->listView->setModel(model);

    qint64 elapsed = clickTimer.nsecsElapsed();
    qDebug() << "Elapsed time for view game history button click:" << elapsed << "nanoseconds";
}





void game_or_history::on_replay_button_clicked()
{
    ReplayGame replaygame;

    replaygame.setDatabase(db);
    replaygame.setModal(true);
    replaygame.exec();
    qint64 elapsed = clickTimer.nsecsElapsed();
    qDebug() << "Elapsed time for Replay button click:" << elapsed << "nanoseconds";
}

