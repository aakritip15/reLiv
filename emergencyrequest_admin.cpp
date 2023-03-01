#include "emergencyrequest_admin.h"
#include "ui_emergencyrequest_admin.h"
#include <user_details.h>
#include <donor_request.h>
#include <patient_requests.h>
#include <mainwindow.h>
#include <about.h>
#include <why_become_donor.h>
#include <userdashboard.h>
#include <admin_dashboard.h>)

emergencyRequest_admin::emergencyRequest_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::emergencyRequest_admin)
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
        qry->prepare("select * from patient_details where status='emergency'");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }

    QIcon search (":/Images/search.jpg");

    ui->search->addAction(search,QLineEdit::LeadingPosition);
}

emergencyRequest_admin::~emergencyRequest_admin()
{
    delete ui;
}

void emergencyRequest_admin::on_search_textChanged(const QString &arg1)
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");
    if(db.open())
    {
        QString search=ui->search->text();
        QSqlQueryModel *modal =new QSqlQueryModel();

        QSqlQuery * qry=new QSqlQuery();
        qry->prepare("select * from patient_details where status='emergency' and contact_person_name like '"+search+"%"+"'");
        qry->bindValue(":search", search);
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }
}


void emergencyRequest_admin::on_my_details_clicked()
{
    user_details u1;
    u1.setModal(true);
    hide();
    u1.exec();
}


void emergencyRequest_admin::on_my_details_2_clicked()
{
    donor_request d1;
    d1.setModal(true);
    hide();
    d1.exec();
}


void emergencyRequest_admin::on_my_details_3_clicked()
{
    patient_requests r1;
    r1.setModal(true);
    hide();
    r1.exec();
}


void emergencyRequest_admin::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void emergencyRequest_admin::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void emergencyRequest_admin::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void emergencyRequest_admin::on_login_clicked()
{
    admin_dashboard ud;
    ud.setModal(true);
    hide();
    ud.exec();
}


void emergencyRequest_admin::on_login_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

