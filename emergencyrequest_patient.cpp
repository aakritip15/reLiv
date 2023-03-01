#include "emergencyrequest_patient.h"
#include "ui_emergencyrequest_patient.h"
#include "donate_blood.h"
#include "request_blood.h"
#include "my_details.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "user_details.h"
#include "userdashboard.h"

emergencyRequest_patient::emergencyRequest_patient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::emergencyRequest_patient)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");
    if(db.open())
    {
        QSqlQueryModel *modal =new QSqlQueryModel();

        QSqlQuery * qry=new QSqlQuery();
        qry->prepare("select contact_person_name,phone_number , required_units,blood_group from patient_details where status='emergency'");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }

    QIcon search (":/Images/search.jpg");

    ui->search->addAction(search,QLineEdit::LeadingPosition);
}

emergencyRequest_patient::~emergencyRequest_patient()
{
    delete ui;
}

void emergencyRequest_patient::on_search_textChanged(const QString &arg1)
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");
    if(db.open())
    {
        QString search=ui->search->text();
        QSqlQueryModel *modal =new QSqlQueryModel();

        QSqlQuery * qry=new QSqlQuery();
        qry->prepare("select contact_person_name,phone_number , required_units,blood_group from patient_details where status='emergency' and  contact_person_name like '"+search+"%"+"'");
        qry->bindValue(":search", search);
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }
}


void emergencyRequest_patient::on_my_details_clicked()
{
    my_details m1;
    m1.setModal(true);
    hide();
    m1.exec();
}


void emergencyRequest_patient::on_my_details_2_clicked()
{
    donate_blood di;
    di.setModal(true);
    hide();
    di.exec();
}


void emergencyRequest_patient::on_my_details_3_clicked()
{
    request_blood rq;
    rq.setModal(true);
    hide();
    rq.exec();
}


void emergencyRequest_patient::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void emergencyRequest_patient::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void emergencyRequest_patient::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void emergencyRequest_patient::on_login_clicked()
{
    userDashboard ud;
    ud.setModal(true);
    hide();
    ud.exec();
}


void emergencyRequest_patient::on_login_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void emergencyRequest_patient::on_pushButton_clicked()
{
    donate_blood di;
    di.setModal(true);
    hide();
    di.exec();
}

