#ifndef MAXSOMME_H
#define MAXSOMME_H

#include <QMainWindow>

namespace Ui {
class MaxSomme;
}

class MaxSomme : public QMainWindow
{
    Q_OBJECT

public:
    explicit MaxSomme(QWidget *parent = 0);
    ~MaxSomme();

private slots:
    void on_calculateButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_3_clicked();

private:
    Ui::MaxSomme *ui;
};

#endif // MAXSOMME_H
