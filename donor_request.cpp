#include "donor_request.h"
#include "ui_donor_request.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "admin_dashboard.h"
#include "user_details.h"
#include "patient_requests.h"
#include "edit_donor.h"

donor_request::donor_request(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::donor_request)
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
        qry->prepare("select * from donor_details");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }
    QIcon search (":/Images/search.jpg");

    ui->search->addAction(search,QLineEdit::LeadingPosition);
}

donor_request::~donor_request()
{
    delete ui;
}



void donor_request::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void donor_request::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void donor_request::on_login_clicked()
{
    admin_dashboard ad;
    ad.setModal(true);
    hide();
    ad.exec();
}


void donor_request::on_my_details_clicked()
{
    user_details ud;
    ud.setModal(true);
    hide();
    ud.exec();
}


void donor_request::on_my_details_3_clicked()
{
    patient_requests pr;
    pr.setModal(true);
    hide();
    pr.exec();
}


void donor_request::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void donor_request::on_pushButton_clicked()
{
    edit_donor ed;
    ed.setModal(true);
    hide();
    ed.exec();
}


void donor_request::on_search_textChanged(const QString &arg1)
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");
    if(db.open())
    {
        QString search=ui->search->text();
        QSqlQueryModel *modal =new QSqlQueryModel();

        QSqlQuery * qry=new QSqlQuery();
        qry->prepare("select * from donor_details where donor_name like '"+search+"%"+"'");
        qry->bindValue(":search", search);
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }
}


void donor_request::on_login_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

