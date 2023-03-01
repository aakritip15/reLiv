#include "my_details.h"
#include "ui_my_details.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "donate_blood.h"
#include "request_blood.h"
#include "userdashboard.h"
#include "log_in.h"
#include "change_information.h"
extern int id;

my_details::my_details(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::my_details)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);

    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");

    if(db.open())
    {

        QSqlQuery qry;

        qry.prepare("select * from user_details where user_id=:id");
        qry.bindValue(":id" ,id);

        if(qry.exec())
        {
            while(qry.next())
            {
                ui->name->setText(qry.value(1).toString());
                ui->age->setText(qry.value(2).toString());
                ui->blood_group->setText(qry.value(3).toString());
                ui->gender->setText(qry.value(4).toString());
                ui->location->setText(qry.value(5).toString());
                ui->email->setText(qry.value(6).toString());
                ui->phone_number->setText(qry.value(7).toString());
                ui->password->setText(qry.value(8).toString());
            }
        }
    }
}

my_details::~my_details()
{
    delete ui;
}

void my_details::on_my_details_4_clicked()
{
    donate_blood di;
    di.setModal(true);
    hide();
    di.exec();
}


void my_details::on_my_details_3_clicked()
{
    request_blood rq;
    rq.setModal(true);
    hide();
    rq.exec();
}





void my_details::on_login_clicked()
{
    userDashboard ud;
    ud.setModal(true);
    hide();
    ud.exec();
}


void my_details::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void my_details::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void my_details::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void my_details::on_pushButton_2_clicked()
{
    this->close();
    change_information ci ;
    ci.setModal(true);
    ci.exec();
}


void my_details::on_login_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

