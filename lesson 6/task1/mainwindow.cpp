#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->spinBox,QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::process_result);
    connect(ui->spinBox_2,QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::process_result);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::process_result()
{
    ui->spinBox_3->setValue(ui->spinBox->value()+ui->spinBox_2->value());
}

