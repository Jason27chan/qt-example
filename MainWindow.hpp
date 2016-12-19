// MainWindow.hpp

// put "#pragma once" at the top of the header files to protect against
// being included multiple times

#pragma once

#include <QtWidgets>

class MainWindow : public QMainWindow {
public: 
    // override
    MainWindow(QWidget * parent = 0, Qt::WindowFlags flags = 0);

};
