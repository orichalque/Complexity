#include "maxsomme.h"
#include "ui_maxsomme.h"

MaxSomme::MaxSomme(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MaxSomme)
{
    ui->setupUi(this);
    //algo = NULL;
}

MaxSomme::~MaxSomme()
{
    delete ui;
}

void MaxSomme::on_calculateButton_clicked()
{
    //if (algo == NULL){
        ui -> maxSommeResult -> setText("Choisissez un algorithme");
    //}
}

void MaxSomme::on_radioButton_clicked()
{
    ui -> maxSommeResult -> setText("CHoix effectué 1 ");
}

void MaxSomme::on_radioButton_2_clicked()
{
    ui -> maxSommeResult -> setText("CHoix effectué 1 ");
}

void MaxSomme::on_radioButton_4_clicked()
{
    ui -> maxSommeResult -> setText("CHoix effectué 1 ");
}

void MaxSomme::on_radioButton_3_clicked()
{
    ui -> maxSommeResult -> setText("CHoix effectué 1 ");
}
