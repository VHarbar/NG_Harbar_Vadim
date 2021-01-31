#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->TheEditor,&QTextEdit::textChanged, this,&MainWindow::TheCounter);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Edits_result()
{

}

void MainWindow::TheCounter()
{
    QString str = ui->TheEditor->toPlainText();
        int amount = 0;
        for( int i = 0;  str.length() >= i; i++){
        {
        if(((str[i] >= 'a' &&str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && !((str[i+1] >= 'a' && str[i+1] <= 'z') || (str[i+1] >= 'A' && str[i+1] <= 'Z')))
                            amount++;
                        if((str[i] >= 'a' &&str[i] <= 'z') && (str[i+1] >= 'A' &&str[i+1] <= 'Z'))
                            amount++;

        }
        }
        ui->lcdNumber->display(amount);

}

