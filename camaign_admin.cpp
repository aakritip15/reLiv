#include "camaign_admin.h"
#include "ui_camaign_admin.h"
#include <user_details.h>
#include <donor_request.h>
#include <patient_requests.h>
#include <mainwindow.h>
#include <about.h>
#include <why_become_donor.h>
#include <admin_dashboard.h>

camaign_admin::camaign_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::camaign_admin)
{
    ui->setupUi(this);
}

camaign_admin::~camaign_admin()
{
    delete ui;
}

void camaign_admin::on_my_details_clicked()
{
    user_details u1;
    u1.setModal(true);
    hide();
    u1.exec();
}


void camaign_admin::on_my_details_2_clicked()
{
    donor_request d1;
    d1.setModal(true);
    hide();
    d1.exec();
}


void camaign_admin::on_my_details_3_clicked()
{
    patient_requests r1;
    r1.setModal(true);
    hide();
    r1.exec();
}


void camaign_admin::on_login_clicked()
{
    admin_dashboard ud;
    ud.setModal(true);
    hide();
    ud.exec();
}


void camaign_admin::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void camaign_admin::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void camaign_admin::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void camaign_admin::on_Post_clicked()
{


    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");

    QSqlQuery q1;
    q1.prepare("select * from camapaign where status='upcoming'");

   if(q1.exec())
   {
       QSqlQuery q2;
        q2.prepare("update camapaign set status='completed'");
   }


    if(db.open())
    {
        QString date=ui->date->text();
        QString time=ui->time->text();
        QString location=ui->location->text();
        QString motive=ui->motive->text();
        QString status="upcoming";

        if(date != ""  && time != "" && location != "" && motive != ""){

            QSqlQuery qry;
            qry.prepare("INSERT INTO camapaign(date,time,location,motive,status) "
                        "VALUES('"+date+"', '"+time+"', '"+location+"', '"+motive+"','"+status+"')");
            qry.bindValue(":date", date);
            qry.bindValue(":time", time);
            qry.bindValue(":location", location);
            qry.bindValue(":motive", motive);
            qry.bindValue(":status",status);


        if(qry.exec())
        {
               QMessageBox::information(this,"Information","Campaign updated");
        }
        }
        else
        {
               QMessageBox::information(this, "Error", "Fill in all the input fields .");
        }
    }
    else
    {
        QMessageBox::information(this,"Error"," Database not connected");
    }

}


void camaign_admin::on_login_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

