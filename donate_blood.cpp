#include "donate_blood.h"
#include "ui_donate_blood.h"
#include "request_blood.h"
#include "my_details.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "userdashboard.h"

donate_blood::donate_blood(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::donate_blood)
{

    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
}

donate_blood::~donate_blood()
{
    delete ui;
}

void donate_blood::on_my_details_3_clicked()
{
    request_blood rq;
    rq.setModal(true);
    hide();
    rq.exec();

}


void donate_blood::on_my_details_2_clicked()
{
    donate_blood dq;
    dq.setModal(true);
    hide();
    dq.exec();
}


void donate_blood::on_my_details_clicked()
{

    my_details m1;
    m1.setModal(true);
    hide();
    m1.exec();
}


void donate_blood::on_login_clicked()
{
    userDashboard ud;
    ud.setModal(true);
    hide();
    ud.exec();
}


void donate_blood::on_donate_clicked()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");

    if(db.open())
    {
        QDate todaysdate = QDate::currentDate();
        QDate donationDate = todaysdate.addDays(7);

        QString datetodonate = donationDate.toString();


        QString name=ui->name->text();
        QString location=ui->location->text();
        QString age=ui->age->text();
        QString blood_group=ui->blood_group->text();
        QString gender=ui->gender->text();
        QString phone_number=ui->phone_number->text();
        QString disease=ui->disease->text();
        if(name != "" && location != "" && age != "" && blood_group != "" && gender != "" && phone_number != "" ){

        QSqlQuery qry;
        qry.prepare("INSERT INTO donor_details(donor_name,location,age,blood_group,gender,phone_number,any_disease,Donation_Date) "
                    "VALUES('"+name+"', '"+location+"', '"+age+"', '"+blood_group+"', '"+gender+"', '"+phone_number+"', '"+disease+"','"+datetodonate+"')");
        qry.bindValue(":donor_name", name);
        qry.bindValue(":location", location);
        qry.bindValue(":age", age);
        qry.bindValue(":blood_group", blood_group);
        qry.bindValue(":gender", gender);
        qry.bindValue(":phone_number", phone_number);
        qry.bindValue(":any_disease", disease);
        qry.bindValue(":Donation_Date", datetodonate);


        if(qry.exec())
        {
               QMessageBox::information(this,"Information","Thanks for your help. /n Your Blood Donation Date is one week away");
               donate_blood dq;
               dq.setModal(true);
               hide();
               dq.exec();
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


void donate_blood::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void donate_blood::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void donate_blood::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void donate_blood::on_login_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

