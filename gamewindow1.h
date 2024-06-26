#ifndef GAMEWINDOW1_H
#define GAMEWINDOW1_H

#include <QDialog>
#include <QPushButton>
#include <QMessageBox>
#include <QSoundEffect>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QElapsedTimer>

extern QVector<QString> moves;
QT_BEGIN_NAMESPACE
namespace Ui { class gameWindow1; }
QT_END_NAMESPACE

class gameWindow1 : public QDialog
{
    Q_OBJECT
     friend class Cases;

public:
    explicit gameWindow1(QWidget *parent = nullptr);
    ~gameWindow1();

private slots:
    void on_pushButton1_clicked();
    void on_pushButton2_clicked();
    void on_pushButton3_clicked();
    void on_pushButton4_clicked();
    void on_pushButton5_clicked();
    void on_pushButton6_clicked();
    void on_pushButton7_clicked();
    void on_pushButton8_clicked();
    void on_pushButton9_clicked();

private:
    Ui::gameWindow1 *ui;
    QSqlDatabase db;
    QString currentPlayer;
    char board[3][3]; // Game board

    void resetGame();
    void makeMove(QPushButton *button, int row, int col);
    bool checkWin(char player);
    bool checkTie();
    void logGameResult(QStringList result);
    void saveMove(int row, int col, char player);
    QSoundEffect backgroundMusic;
    QSoundEffect loseSound;
    QSoundEffect winSound;
    QSoundEffect drawSound;
    QElapsedTimer clickTimer;

};

#endif // GAMEWINDOW1_H
