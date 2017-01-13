// main.cpp

// the ios header contains cout among other things
#include <iostream>

// This allows you to use the QApplication class. 
#include <QtWidgets>

#include "MainWindow.hpp"

// this declaration lets us leave off the "std::" when using things in 
// the standard libraries
// Without it, we'd have to type "std::cout", now we can just type "cout"
using namespace std;

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    
    
    QFile file(":/QTDark.stylesheet");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        app.setStyleSheet(file.readAll());
        file.close();
    }
    app.setStyleSheet(file.readAll());
    file.close();
    
    
    cout << "Hello World" << endl;
    
    // return 0 to indicate success
    // return 0;

    MainWindow win;
    win.show();
    
    return app.exec();

}

