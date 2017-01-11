// MainWindow.hpp

// put "#pragma once" at the top of the header files to protect against
// being included multiple times

#pragma once
#include <iostream>

#include <QtWidgets>

#include "./MainWindow/build/ui_mainwindow.h"
using namespace std;

class MainWindow : public QMainWindow {
public: 
    // override
    MainWindow(QWidget * parent = 0, Qt::WindowFlags flags = 0);
    Ui_MainWindow _ui;
    void buttonClicked();
};


