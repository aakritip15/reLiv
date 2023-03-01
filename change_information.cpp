#include "change_information.h"
#include "ui_change_information.h"
#include "my_details.h"
#include "donate_blood.h"
#include "request_blood.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "userdashboard.h"
extern int id;
#include "my_details.h"

change_information::change_information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_information)
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

            }
        }
    }
}



change_information::~change_information()
{
    delete ui;
}

void change_information::on_pushButton_2_clicked()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");

    QString location=ui->location->text();
    QString email=ui->email->text();
    QString phone_number=ui->phone_number->text();
    QString password=ui->password->text();



    if(db.open())
    {
        QSqlQuery qry1;
        qry1.prepare("UPDATE user_details SET location=  :location , email= :email ,phone_number= :phone_number, password= :password where user_id=:id");
                qry1.bindValue(":id" ,id);
                qry1.bindValue(":location", location);
                qry1.bindValue(":email", email);
                qry1.bindValue(":phone_number", phone_number);
                qry1.bindValue(":password", password);


                if(qry1.exec())
                {
                       QMessageBox::information(this,"Information","Your changes are saved");
                       my_details m1;
                       m1.setModal(true);
                       hide();
                       m1.exec();
                }
                else
                {
                      QMessageBox::information(this,"Information","Sorry");
                }
                }
            }



void change_information::on_my_details_2_clicked()
{
    my_details m1;
    m1.setModal(true);
    hide();
    m1.exec();
}


void change_information::on_my_details_4_clicked()
{
    donate_blood di;
    di.setModal(true);
    hide();
    di.exec();
}


void change_information::on_my_details_3_clicked()
{
    request_blood rq;
    rq.setModal(true);
    hide();
    rq.exec();
}


void change_information::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void change_information::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void change_information::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void change_information::on_login_clicked()
{
    userDashboard ud;
    ud.setModal(true);
    hide();
    ud.exec();
}


void change_information::on_login_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

