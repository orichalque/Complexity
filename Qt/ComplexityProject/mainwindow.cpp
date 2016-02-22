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
    ui -> progressBar ->setValue(0);
    ui -> ExecTime -> setText("");
    ui -> MaxValue -> setText("");
    if (ui -> PA1 -> isChecked()){
        a = new PairAlgorithm();
    }

    if (ui -> PA2 -> isChecked()){
        a = new PairAlgorithm2();
    }

    if (ui -> RA -> isChecked()){
        a = new RecursiveAlgorithm();
    }

    if (ui -> QA -> isChecked()) {
        a = new QuickAlgorithm();
    }

    int data = (ui -> dataSize -> text()).toInt();
    if (data > 0) {
        vector<int> values;
        vector<int> durations;
        for (int i = 0; i < 10; ++i) {
            a -> generate(data);
            auto begin = std::chrono::high_resolution_clock::now();
            values.push_back(a -> MaxSomme());
            auto end = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
            durations.push_back(duration.count());
            ui -> progressBar ->setValue(10*(i+1));
        }

        int xTime;
        for (auto time : durations) {
            xTime += time;
        }
        ui -> ExecTime -> setText(QString::fromStdString(std::to_string(xTime/10)) + " ms");
        int value;
        for (auto val : values) {
            value += val;
        }
        ui -> MaxValue -> setText(QString::fromStdString(std::to_string(value/10)));
    } else {
        ui -> MaxValue -> setText("Incorrect DataSize");
    }
}
