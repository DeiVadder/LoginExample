#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>

namespace Ui {
class LoginPage;
}

class LoginPage : public QWidget
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

signals:
    void loginSuccess();

private slots:
    void checkLockin();

private:
    Ui::LoginPage *ui;
};

#endif // LOGINPAGE_H
