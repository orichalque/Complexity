#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui -> ExecTime -> setText("");
    ui -> MaxValue -> setText("");
    if (ui -> PA1 -> isChecked()){
        a = new PairAlgorithm();
        int data = (ui -> dataSize -> text()).toInt();
        if (data > 0) {
            a -> generate(data);
            auto begin = std::chrono::high_resolution_clock::now();
            int value = a -> MaxSomme();
            auto end = std::chrono::high_resolution_clock::now();
            int time = std::chrono::duration_cast<std::chrono::milliseconds>(end-begin).count();
            ui -> ExecTime -> setText(QString::fromStdString(std::to_string(time)) + " ms");
            ui -> MaxValue -> setText(QString::fromStdString(std::to_string(value)));
        } else {
            ui -> MaxValue -> setText("Incorrect DataSize");
        }
    }

    if (ui -> PA2 -> isChecked()){
        a = new PairAlgorithm2();
        int data = (ui -> dataSize -> text()).toInt();
        if (data > 0) {
            a -> generate(data);
            auto begin = std::chrono::high_resolution_clock::now();
            int value = a -> MaxSomme();
            auto end = std::chrono::high_resolution_clock::now();
            int time = std::chrono::duration_cast<std::chrono::milliseconds>(end-begin).count();
            ui -> ExecTime -> setText(QString::fromStdString(std::to_string(time)) + " ms");
            ui -> MaxValue -> setText(QString::fromStdString(std::to_string(value)));
        } else {
            ui -> MaxValue -> setText("Incorrect DataSize");
        }
    }

    if (ui -> RA -> isChecked()){
        a = new RecursiveAlgorithm();
        int data = (ui -> dataSize -> text()).toInt();
        if (data > 0) {
            a -> generate(data);
            auto begin = std::chrono::high_resolution_clock::now();
            int value = a -> MaxSomme();
            auto end = std::chrono::high_resolution_clock::now();
            int time = std::chrono::duration_cast<std::chrono::milliseconds>(end-begin).count();
            ui -> ExecTime -> setText(QString::fromStdString(std::to_string(time)) + " ms");
            ui -> MaxValue -> setText(QString::fromStdString(std::to_string(value)));
        } else {
            ui -> MaxValue -> setText("Incorrect DataSize");
        }
    }

    if (ui -> QA -> isChecked()) {
        a = new QuickAlgorithm();
        int data = (ui -> dataSize -> text()).toInt();
        if (data > 0) {
            a -> generate(data);
            auto begin = std::chrono::high_resolution_clock::now();
            int value = a -> MaxSomme();
            auto end = std::chrono::high_resolution_clock::now();
            int time = std::chrono::duration_cast<std::chrono::milliseconds>(end-begin).count();
            ui -> ExecTime -> setText(QString::fromStdString(std::to_string(time)) + " ms");
            ui -> MaxValue -> setText(QString::fromStdString(std::to_string(value)));
        } else {
            ui -> MaxValue -> setText("Incorrect DataSize");
        }
    }
}
