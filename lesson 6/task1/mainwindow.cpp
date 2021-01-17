#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->B1, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::process_result);
    connect(ui->B2, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::process_result);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::B1()
{

}

void MainWindow::B2()
{

}

void MainWindow::process_result()
{
    ui->Box3->setValue(ui->B1->value()+ui->B2->value());
}

