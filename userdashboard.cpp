#include "userdashboard.h"
#include "ui_userdashboard.h"
#include "donate_blood.h"
#include "request_blood.h"
#include "my_details.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "emergencyrequest_patient.h"
#include "campaign.h"


userDashboard::userDashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userDashboard)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
}

userDashboard::~userDashboard()
{
    delete ui;
}

void userDashboard::on_my_details_2_clicked()
{
    donate_blood di;
    di.setModal(true);
    hide();
    di.exec();
}


void userDashboard::on_my_details_3_clicked()
{
    request_blood rq;
    rq.setModal(true);
    hide();
    rq.exec();
}


void userDashboard::on_my_details_clicked()
{
    my_details m1;
    m1.setModal(true);
    hide();
    m1.exec();
}


void userDashboard::on_login_clicked()
{
    userDashboard ud;
    ud.setModal(true);
    hide();
    ud.exec();
}


void userDashboard::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void userDashboard::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void userDashboard::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void userDashboard::on_pushButton_2_clicked()
{
     emergencyRequest_patient er;
    er.setModal(true);
    hide();
    er.exec();
}


void userDashboard::on_pushButton_clicked()
{
    campaign ca;
    ca.setModal(true);
    hide();
    ca.exec();
}


void userDashboard::on_login_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

