#include "admin_dashboard.h"
#include "ui_admin_dashboard.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "user_details.h"
#include "donor_request.h"
#include "patient_requests.h"
#include "camaign_admin.h"
#include "emergencyrequest_admin.h"

admin_dashboard::admin_dashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin_dashboard)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
}

admin_dashboard::~admin_dashboard()
{
    delete ui;
}

void admin_dashboard::on_my_details_clicked()
{
    user_details u1;
    u1.setModal(true);
    hide();
    u1.exec();

}


void admin_dashboard::on_my_details_2_clicked()
{
    donor_request d1;
    d1.setModal(true);
    hide();
    d1.exec();
}


void admin_dashboard::on_my_details_3_clicked()
{
    patient_requests r1;
    r1.setModal(true);
    hide();
    r1.exec();
}


void admin_dashboard::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void admin_dashboard::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void admin_dashboard::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}





void admin_dashboard::on_pushButton_clicked()
{
    emergencyRequest_admin a;
    a.setModal(true);
    hide();
    a.exec();
}


void admin_dashboard::on_login_clicked()
{
    user_details u1;
    u1.setModal(true);
    hide();
    u1.exec();
}


void admin_dashboard::on_pushButton_3_clicked()
{
    camaign_admin ca;
    ca.setModal(true);
    hide();
    ca.exec();
}


void admin_dashboard::on_login_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void admin_dashboard::on_pushButton_2_clicked()
{
    donor_request d1;
    d1.setModal(true);
    hide();
    d1.exec();
}

