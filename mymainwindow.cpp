#include "mymainwindow.h"
#include "ui_mymainwindow.h"

MyMainWindow::MyMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);
    connect(ui->login, &LoginPage::loginSuccess, this, &MyMainWindow::switchToPage2);
    connect(ui->actionLogout, &QAction::triggered, this, &MyMainWindow::logOut);
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}

void MyMainWindow::switchToPage2()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MyMainWindow::logOut()
{
    ui->stackedWidget->setCurrentIndex(0);
}
