#include "loginpage.h"
#include "ui_loginpage.h"

LoginPage::LoginPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &LoginPage::checkLockin);
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::checkLockin()
{
    if(ui->lineEdit->text() == "test" && ui->lineEdit_2->text() == "test123")
        emit loginSuccess();
}
