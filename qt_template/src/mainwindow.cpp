#include "./ui_mainwindow.h"
#include "mainwindow.h"
#include <string>

using namespace std;

int a1, a2, a3, a4, a5;
int A1, A2, A3, A4, A5;

int popnum = 0;
int popnum2 = 0;
int top, top1, top2, top3, top4, top5 = 0;

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  QIcon icon(":/image/images/icon.png");
  setWindowIcon(icon);
}

MainWindow::~MainWindow()
{
  delete ui;
}


void MainWindow::on_popbutton_clicked()
{
    switch (popnum) {
        case 0:
            ui->push1->clear();
            ui->pop1->setText(QString::number(a1));
            popnum ++;
            break;
        case 1:
            ui->push2->clear();
            ui->pop2->setText(QString::number(a2));
            popnum ++;
            break;
        case 2:
            ui->push3->clear();
            ui->pop3->setText(QString::number(a3));
            popnum ++;
            break;
        case 3:
            ui->push4->clear();
            ui->pop4->setText(QString::number(a4));
            popnum ++;
            break;
        case 4:
            ui->push5->clear();
            ui->pop5->setText(QString::number(a5));
            popnum ++;
            break;
        default:
            a1 = A1;
            a2 = A2;
            a3 = A3;
            a4 = A4;
            a5 = A5;
            top = 0;

            popnum = popnum2 = 0;

            ui->push1->setText(QString::number(a1));
            ui->push2->setText(QString::number(a2));
            ui->push3->setText(QString::number(a3));
            ui->push4->setText(QString::number(a4));
            ui->push5->setText(QString::number(a5));


            ui->pop1->clear();
            ui->pop2->clear();
            ui->pop3->clear();
            ui->pop4->clear();
            ui->pop5->clear();
            break;

    }

}



void MainWindow::on_popbutton_2_clicked()
{
    switch (popnum2) {
        case 0:
            ui->push5->clear();
            ui->pop1->setText(QString::number(a5));
            popnum2 ++;
            break;
        case 1:
            ui->push4->clear();
            ui->pop2->setText(QString::number(a4));
            popnum2 ++;
            break;
        case 2:
            ui->push3->clear();
            ui->pop3->setText(QString::number(a3));
            popnum2 ++;
            break;
        case 3:
            ui->push2->clear();
            ui->pop4->setText(QString::number(a2));
            popnum2 ++;
            break;
        case 4:
            ui->push1->clear();
            ui->pop5->setText(QString::number(a1));
            popnum2 ++;
            break;
        default:
            a1 = A1;
            a2 = A2;
            a3 = A3;
            a4 = A4;
            a5 = A5;
            top = 0;

            popnum = popnum2 = 0;

            ui->push1->setText(QString::number(a1));
            ui->push2->setText(QString::number(a2));
            ui->push3->setText(QString::number(a3));
            ui->push4->setText(QString::number(a4));
            ui->push5->setText(QString::number(a5));


            ui->pop1->clear();
            ui->pop2->clear();
            ui->pop3->clear();
            ui->pop4->clear();
            ui->pop5->clear();
            break;
        }

}


void MainWindow::on_lineEdit_returnPressed()
{
    string str;
    switch (top) {

        case 0:
            str = ui->lineEdit->text().toStdString();
            a1 = stoi(str);
            A1 = a1;
            ui->push1->setText(QString::number(a1));
            ui->lineEdit->clear();
            top ++;
            break;
        case 1:
            str = ui->lineEdit->text().toStdString();
            a2 = stoi(str);
            A2 = a2;
            ui->push2->setText(QString::number(a2));
            ui->lineEdit->clear();
            top ++;
            break;
        case 2:
            str = ui->lineEdit->text().toStdString();
            a3 = stoi(str);
            A3 = a3;
            ui->push3->setText(QString::number(a3));
            ui->lineEdit->clear();
            top ++;
            break;
        case 3:
            str = ui->lineEdit->text().toStdString();
            a4 = stoi(str);
            A4 = a4;
            ui->push4->setText(QString::number(a4));
            ui->lineEdit->clear();
            top ++;
            break;
        case 4:
            str = ui->lineEdit->text().toStdString();
            a5 = stoi(str);
            A5 = a5;
            ui->push5->setText(QString::number(a5));
            ui->lineEdit->clear();
            top ++;
            break;
        default:
            break;
        }
}


void MainWindow::on_pushButton_clicked()
{
    a1 = a2 = a3 = a4 = a5 = 0;

    popnum = popnum2 = top = 0;

    ui->push1->clear();

    ui->push2->clear();

    ui->push3->clear();

    ui->push4->clear();

    ui->push5->clear();

    ui->pop1->clear();

    ui->pop2->clear();

    ui->pop3->clear();

    ui->pop4->clear();

    ui->pop5->clear();

}

