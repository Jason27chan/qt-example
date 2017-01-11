
// This allows you to use the MainWindow header file
#include "MainWindow.hpp"

    
MainWindow::MainWindow(QWidget * parent, Qt::WindowFlags flags) : QMainWindow
    (parent, flags) {
    _ui.setupUi(this);
    this->style()->unpolish(this);
    QObject::connect(_ui.pushButton, &QPushButton::clicked, this, &MainWindow::buttonClicked);
}

void MainWindow::buttonClicked() {
    QString text = _ui.lineEdit->text(); 
    QLabel label = _ui.label;
    _ui.lineEdit->setText("");
    this->style()->unpolish(this);
    label.setText(text);
    _ui.listWidget->addItem(text);   
}
