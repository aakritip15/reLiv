#include "campaign.h"
#include "ui_campaign.h"
#include "donate_blood.h"
#include "request_blood.h"
#include "my_details.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "user_details.h"
#include "userdashboard.h"

campaign::campaign(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::campaign)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);


    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");

    if(db.open())
    {

        QSqlQuery qry;

        qry.prepare("select * from camapaign where status='upcoming'");

        if(qry.exec())
        {
            while(qry.next())
            {
                ui->motive->setText(qry.value(4).toString());
                ui->date->setText(qry.value(1).toString());
                ui->time->setText(qry.value(2).toString());
                ui->location->setText(qry.value(3).toString());

            }
        }

    }
}

campaign::~campaign()
{
    delete ui;
}



void campaign::on_my_details_2_clicked()
{

    my_details m1;
    m1.setModal(true);
    hide();
    m1.exec();
}


void campaign::on_my_details_3_clicked()
{
    request_blood rq;
    rq.setModal(true);
    hide();
    rq.exec();

}


void campaign::on_home_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void campaign::on_about_2_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void campaign::on_why_2_clicked()
{

    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void campaign::on_login_2_clicked()
{
    userDashboard ud;
    ud.setModal(true);
    hide();
    ud.exec();
}


void campaign::on_my_details_4_clicked()
{
    donate_blood di;
    di.setModal(true);
    hide();
    di.exec();
}


void campaign::on_login_3_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

