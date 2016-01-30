#-------------------------------------------------
#
# Project created by QtCreator 2016-01-27T20:20:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ComplexityProject
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    ../../AlgorithmCompare/Algorithm.cpp \
    ../../AlgorithmCompare/PairAlgorithm.cpp \
    ../../AlgorithmCompare/PairAlgorithm2.cpp \
    ../../AlgorithmCompare/QuickAlgorithm.cpp \
    ../../AlgorithmCompare/RecursiveAlgorithm.cpp

HEADERS  += mainwindow.h \
    ../../AlgorithmCompare/Algorithm.hpp \
    ../../AlgorithmCompare/PairAlgorithm.hpp \
    ../../AlgorithmCompare/QuickAlgorithm.hpp \
    ../../AlgorithmCompare/RecursiveAlgorithm.hpp \
    ../../AlgorithmCompare/PairAlgorithm2.hpp

FORMS    += mainwindow.ui
