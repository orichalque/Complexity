/********************************************************************************
** Form generated from reading UI file 'maxsomme.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAXSOMME_H
#define UI_MAXSOMME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaxSomme
{
public:
    QWidget *centralWidget;
    QPushButton *calculateButton;
    QProgressBar *progressBar;
    QSplitter *splitter_2;
    QLabel *label;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QSplitter *splitter;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *timeResult;
    QLabel *label_4;
    QLabel *maxSommeResult;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MaxSomme)
    {
        if (MaxSomme->objectName().isEmpty())
            MaxSomme->setObjectName(QString::fromUtf8("MaxSomme"));
        MaxSomme->resize(310, 204);
        centralWidget = new QWidget(MaxSomme);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        calculateButton = new QPushButton(centralWidget);
        calculateButton->setObjectName(QString::fromUtf8("calculateButton"));
        calculateButton->setGeometry(QRect(30, 110, 88, 27));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(150, 110, 118, 23));
        progressBar->setValue(0);
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(0, 0, 147, 100));
        splitter_2->setOrientation(Qt::Vertical);
        label = new QLabel(splitter_2);
        label->setObjectName(QString::fromUtf8("label"));
        splitter_2->addWidget(label);
        radioButton = new QRadioButton(splitter_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setAcceptDrops(false);
        splitter_2->addWidget(radioButton);
        radioButton_2 = new QRadioButton(splitter_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        splitter_2->addWidget(radioButton_2);
        radioButton_4 = new QRadioButton(splitter_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        splitter_2->addWidget(radioButton_4);
        radioButton_3 = new QRadioButton(splitter_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        splitter_2->addWidget(radioButton_3);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(150, 0, 129, 106));
        splitter->setOrientation(Qt::Vertical);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter->addWidget(label_2);
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        splitter->addWidget(lineEdit);
        label_3 = new QLabel(splitter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        splitter->addWidget(label_3);
        timeResult = new QLabel(splitter);
        timeResult->setObjectName(QString::fromUtf8("timeResult"));
        splitter->addWidget(timeResult);
        label_4 = new QLabel(splitter);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        splitter->addWidget(label_4);
        maxSommeResult = new QLabel(splitter);
        maxSommeResult->setObjectName(QString::fromUtf8("maxSommeResult"));
        splitter->addWidget(maxSommeResult);
        MaxSomme->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MaxSomme);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MaxSomme->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MaxSomme);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MaxSomme->setStatusBar(statusBar);
        menuBar = new QMenuBar(MaxSomme);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 310, 24));
        MaxSomme->setMenuBar(menuBar);

        retranslateUi(MaxSomme);

        QMetaObject::connectSlotsByName(MaxSomme);
    } // setupUi

    void retranslateUi(QMainWindow *MaxSomme)
    {
        MaxSomme->setWindowTitle(QApplication::translate("MaxSomme", "MaxSomme", 0, QApplication::UnicodeUTF8));
        calculateButton->setText(QApplication::translate("MaxSomme", "Calculate!", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MaxSomme", "Choose your algorithm", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MaxSomme", "PairAlgorithm1", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MaxSomme", "PairAlgorithm2", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("MaxSomme", "RecursiveAlgorithm", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("MaxSomme", "QuickAlgorithm", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MaxSomme", "Taille des donn\303\251es", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MaxSomme", "Temps d'ex\303\251cution", 0, QApplication::UnicodeUTF8));
        timeResult->setText(QApplication::translate("MaxSomme", "time", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MaxSomme", "MaxSomme:", 0, QApplication::UnicodeUTF8));
        maxSommeResult->setText(QApplication::translate("MaxSomme", "resultat", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MaxSomme: public Ui_MaxSomme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAXSOMME_H
