#include "ai_or_2.h"
#include "ui_ai_or_2.h"
#include "gamewindow1.h"
#include "ui_gamewindow1.h"
#include "gameai.h"
#include "ui_gameai.h"
#include "easyhard.h"
#include "ui_easyhard.h"
#include <QDebug>

AI_or_2::AI_or_2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AI_or_2)
{
    ui->setupUi(this);
}

AI_or_2::~AI_or_2()
{
    delete ui;
}

void AI_or_2::on_AI_clicked()
{
    clickTimer.start(); // Start the timer

    easyhard easyhard;
    easyhard.setModal(true);
    easyhard.exec();

    qint64 elapsed = clickTimer.nsecsElapsed();
    qDebug() << "Elapsed time for AI button click:" << elapsed << "nanoseconds";
}

void AI_or_2::on_two_players_clicked()
{
    clickTimer.start(); // Start the timer

    gameWindow1 gameWindow1;
    gameWindow1.setModal(true);
    gameWindow1.exec();

    qint64 elapsed = clickTimer.nsecsElapsed();
    qDebug() << "Elapsed time for two players button click:" << elapsed << "nanoseconds";
}
