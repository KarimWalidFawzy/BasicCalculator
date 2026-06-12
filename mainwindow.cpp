#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "calculator.h"
#include <QString>
#include <QMessageBox>
static unsigned char op_selected=0;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_4_clicked()
{
    //Division
    op_selected = DIV;
    ui->label_2->setText(QString("÷"));
}


void MainWindow::on_pushButton_3_clicked()
{
    //Multiplication
    op_selected = MUL;
    ui->label_2->setText(QString("×"));
}


void MainWindow::on_pushButton_2_clicked()
{
    //Subtraction
    op_selected = SUB;
    ui->label_2->setText(QString("-"));

}


void MainWindow::on_pushButton_5_clicked()
{
    //OK
    QString str = ui->textEdit->toPlainText();
    QString str2 = ui->textEdit_2->toPlainText();
    bool ok1,ok2;
    double x = str.toDouble(&ok1);
    double y = str2.toDouble(&ok2);
    if(ok1 && ok2)
    {
        try
        {
                double result = calculate(x, y, op_selected );
                ui->label_4->setText(QString::number(result));
            }
            catch (const std::invalid_argument& e)
        {
            // Safely catch it and show a nice UI popup instead of crashing
            QMessageBox::critical(this, "Math Error", e.what());
        }
    }
    else
    {
        this->ui->label_5->setText(QString("error!"));
    }
}


void MainWindow::on_pushButton_clicked()
{
    //Addition
    op_selected=ADD;
    ui->label_2->setText(QString("+"));
}

