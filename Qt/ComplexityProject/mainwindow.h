#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../../AlgorithmCompare/Algorithm.hpp"
#include "../../AlgorithmCompare/PairAlgorithm.hpp"
#include "../../AlgorithmCompare/PairAlgorithm2.hpp"
#include "../../AlgorithmCompare/RecursiveAlgorithm.hpp"
#include "../../AlgorithmCompare/QuickAlgorithm.hpp"
#include <string>
#include <chrono>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Algorithm *a;
};

#endif // MAINWINDOW_H
