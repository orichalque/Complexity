/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QRadioButton *QA;
    QLabel *label;
    QRadioButton *RA;
    QRadioButton *PA1;
    QLineEdit *ExecTime;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *dataSize;
    QRadioButton *PA2;
    QLineEdit *MaxValue;
    QLabel *label_3;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        QA = new QRadioButton(centralWidget);
        QA->setObjectName(QString::fromUtf8("QA"));

        gridLayout->addWidget(QA, 4, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        RA = new QRadioButton(centralWidget);
        RA->setObjectName(QString::fromUtf8("RA"));
        RA->setEnabled(true);
        RA->setChecked(false);

        gridLayout->addWidget(RA, 3, 0, 1, 1);

        PA1 = new QRadioButton(centralWidget);
        PA1->setObjectName(QString::fromUtf8("PA1"));
        PA1->setChecked(true);

        gridLayout->addWidget(PA1, 1, 0, 1, 1);

        ExecTime = new QLineEdit(centralWidget);
        ExecTime->setObjectName(QString::fromUtf8("ExecTime"));

        gridLayout->addWidget(ExecTime, 3, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        dataSize = new QLineEdit(centralWidget);
        dataSize->setObjectName(QString::fromUtf8("dataSize"));

        gridLayout->addWidget(dataSize, 8, 0, 1, 1);

        PA2 = new QRadioButton(centralWidget);
        PA2->setObjectName(QString::fromUtf8("PA2"));

        gridLayout->addWidget(PA2, 2, 0, 1, 1);

        MaxValue = new QLineEdit(centralWidget);
        MaxValue->setObjectName(QString::fromUtf8("MaxValue"));

        gridLayout->addWidget(MaxValue, 1, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 8, 1, 1, 1);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 7, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 24));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ComplexityComparator", 0, QApplication::UnicodeUTF8));
        QA->setText(QApplication::translate("MainWindow", "QuickAlgorithm", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Choix de l'algorithme", 0, QApplication::UnicodeUTF8));
        RA->setText(QApplication::translate("MainWindow", "RecursiveAlgorithm", 0, QApplication::UnicodeUTF8));
        PA1->setText(QApplication::translate("MainWindow", "PairAlgorithm1", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Temps d'\303\251xecution", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Taille des donn\303\251es", 0, QApplication::UnicodeUTF8));
        PA2->setText(QApplication::translate("MainWindow", "PairAlgorithm2", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Valeur maximum", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Ex\303\251cuter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
