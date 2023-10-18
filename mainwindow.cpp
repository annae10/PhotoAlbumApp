#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_pushButton_Login_clicked()
{
    QString UserName = ui->lineEdit_User_Name->text();
    QString Password = ui->lineEdit_Password->text();
    if(UserName == "username" && Password == "password")
    {
        this->hide();
        MainPage *mainpage = new MainPage();
        mainpage->show();
    }
    else
    {
        QMessageBox::information(this,"", "Please enter valid username and password");
    }
}

