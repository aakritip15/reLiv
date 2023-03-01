#include "request_blood.h"
#include "ui_request_blood.h"
#include "donate_blood.h"
#include "my_details.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "userdashboard.h"

request_blood::request_blood(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::request_blood)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    QDate d = QDate::currentDate();

    ui->dateEdit->setDate(d);
}

request_blood::~request_blood()
{
    delete ui;
}

void request_blood::on_my_details_2_clicked()
{
    donate_blood dq;
    dq.setModal(true);
    hide();
    dq.exec();
}


void request_blood::on_my_details_3_clicked()
{
    request_blood rq;
    rq.setModal(true);
    hide();
    rq.exec();
}


void request_blood::on_my_details_clicked()
{

    my_details m1;
    m1.setModal(true);
    hide();
    m1.exec();
}


void request_blood::on_login_clicked()
{
    userDashboard ud;
    ud.setModal(true);
    hide();
    ud.exec();
}


void request_blood::on_register_2_clicked()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");

    if(db.open())
    {

        QString contact_person_name=ui->contact_person->text();
        QString patient_name=ui->patient_name->text();
        QString age=ui->age->text();
        QString blood_group=ui->blood_group->text();
        QString gender=ui->gender->text();
        QString phone_number=ui->phone_number->text();
        QString required_units=ui->required_unit->text();
        QString detail=ui->detail->text();
        QDate date = ui->dateEdit->date();
        QString RequiredDate = date.toString();



        if(contact_person_name != "" && patient_name != "" && age != "" && blood_group != "" && gender != "" && phone_number != "" && required_units != "" && detail != ""){

        QSqlQuery qry;
        qry.prepare("INSERT INTO patient_details(contact_person_name,patient_name,age,blood_group,gender,phone_number,required_units,detail_about_case,Required_Date) "
                    "VALUES('"+contact_person_name+"', '"+patient_name+"', '"+age+"', '"+blood_group+"', '"+gender+"', '"+phone_number+"', '"+required_units+"', '"+detail+"','"+RequiredDate+"')");
        qry.bindValue(":contact_person_name", contact_person_name);
        qry.bindValue(":patient_name", patient_name);
        qry.bindValue(":age", age);
        qry.bindValue(":blood_group", blood_group);
        qry.bindValue(":gender", gender);
        qry.bindValue(":phone_number", phone_number);
        qry.bindValue(":required_units", required_units);
        qry.bindValue(":detail_about_case", detail);
        qry.bindValue(":Required_Date",RequiredDate);

        if(qry.exec())
        {
               QMessageBox::information(this,"Information","You will be notified soon about blood");
               request_blood rq;
               rq.setModal(true);
               hide();
               rq.exec();
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


void request_blood::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void request_blood::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void request_blood::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void request_blood::on_register_3_clicked()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");

    if(db.open())
    {
        QString contact_person_name=ui->contact_person->text();
        QString patient_name=ui->patient_name->text();
        QString age=ui->age->text();
        QString blood_group=ui->blood_group->text();
        QString gender=ui->gender->text();
        QString phone_number=ui->phone_number->text();
        QString required_units=ui->required_unit->text();
        QString detail=ui->detail->text();
        QString status="emergency";

        if(contact_person_name != "" && patient_name != "" && age != "" && blood_group != "" && gender != "" && phone_number != "" && required_units != "" && detail != ""){

        QSqlQuery qry;
        qry.prepare("INSERT INTO patient_details(contact_person_name,patient_name,age,blood_group,gender,phone_number,required_units,detail_about_case,status) "
                    "VALUES('"+contact_person_name+"', '"+patient_name+"', '"+age+"', '"+blood_group+"', '"+gender+"', '"+phone_number+"', '"+required_units+"', '"+detail+"', '"+status+"')");
        qry.bindValue(":contact_person_name", contact_person_name);
        qry.bindValue(":patient_name", patient_name);
        qry.bindValue(":age", age);
        qry.bindValue(":blood_group", blood_group);
        qry.bindValue(":gender", gender);
        qry.bindValue(":phone_number", phone_number);
        qry.bindValue(":required_units", required_units);
        qry.bindValue(":detail_about_case", detail);
        qry.bindValue(":status", status);

        if(qry.exec())
        {
               QMessageBox::information(this,"Information","You will soon be notified  about blood");
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


void request_blood::on_login_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

