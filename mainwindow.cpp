#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setScaledContents(true);
    resize(500, 700);  // Устанавливаем начальные размеры окна 500x700

    setMinimumSize(200, 200);  // Минимальный размер
    setMaximumSize(800, 800);  // Максимальный размер

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event) {

    // Обновляем размер QLabel в соответствии с размерами окна
    ui->label->setGeometry(0, 0, this->width(), this->height());

    QWidget::resizeEvent(event); // Важно вызывать базовую реализацию!
}
