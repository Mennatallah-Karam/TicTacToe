#ifndef EASYHARD_H
#define EASYHARD_H

#include <QDialog>
#include "easy_ai.h"
#include "ui_easy_ai.h"
#include <QElapsedTimer>

namespace Ui {
class easyhard;
}

class easyhard : public QDialog
{
    Q_OBJECT
     friend class TestGameClasses;

public:
    explicit easyhard(QWidget *parent = nullptr);
    ~easyhard();

private slots:
    void on_easy_button_clicked();

    void on_hadr_button_clicked();

private:
    Ui::easyhard *ui;
    QElapsedTimer clickTimer;
};

#endif // EASYHARD_H
