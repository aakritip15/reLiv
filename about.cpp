#include "about.h"
#include "ui_about.h"
#include "mainwindow.h"
#include "why_become_donor.h"
#include "log_in.h"
#include "create_account.h"

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);


    ui->setupUi(this);
}

about::~about()
{
    delete ui;
}

void about::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void about::on_about_2_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void about::on_login_clicked()
{
    log_in l1;
    l1.setModal(true);
    hide();
    l1.exec();
}


void about::on_register_2_clicked()
{
    create_account ca;
    ca.setModal(true);
    hide();
    ca.exec();
}


void about::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}

