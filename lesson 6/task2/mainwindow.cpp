#include "mainwindow.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->TheEditor,&QTextEdit::textChanged, this,&MainWindow::Edits_result);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Edits_result()
{
    QString str = ui->TheEditor->toPlainText();
    int amount = 0;
    for( int i = 0;  str.length() >= i; i++){
    {
        if((str[i] >= 'A' && str[i] <= 'Z') && !(str[i+1] >= 'A' && str[i+1] <= 'Z'))
        {
            amount++;
        }

        if((str[i] >= 'a' && str[i] <= 'z') && !(str[i+1] >= 'a' && str[i+1] <= 'z'))
        {
            amount++;
        }

        if((str[i] >= 'A' && str[i] <= 'Z') && (str[i+1] >= 'a' && str[i+1] <= 'z'))
        {
            amount--;
        }
    }
    ui->lcdNumber->display(amount);

}
}

void MainWindow::TheCounter()
{

}

