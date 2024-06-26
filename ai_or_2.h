#ifndef AI_OR_2_H
#define AI_OR_2_H

#include <QDialog>
#include <QElapsedTimer>

namespace Ui {
class AI_or_2;
}

class AI_or_2 : public QDialog
{
    Q_OBJECT
     friend class Test2;
public:
    explicit AI_or_2(QWidget *parent = nullptr);
    ~AI_or_2();

private slots:
    void on_AI_clicked();

    void on_two_players_clicked();

private:
    Ui::AI_or_2 *ui;
    QElapsedTimer clickTimer;
};

#endif // AI_OR_2_H
