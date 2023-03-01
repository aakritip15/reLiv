#include "user_details.h"
#include "ui_user_details.h"
#include "about.h"
#include "why_become_donor.h"
#include "mainwindow.h"
#include "admin_dashboard.h"
#include "donor_request.h"
#include "patient_requests.h"

user_details::user_details(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user_details)
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
        qry->prepare("select * from user_details");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }
    QIcon search (":/Images/search.jpg");

    ui->search->addAction(search,QLineEdit::LeadingPosition);
}

user_details::~user_details()
{
    delete ui;
}




void user_details::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void user_details::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void user_details::on_login_clicked()
{
    admin_dashboard ad;
    ad.setModal(true);
    hide();
    ad.exec();
}


void user_details::on_my_details_2_clicked()
{
    donor_request dr;
    dr.setModal(true);
    hide();
    dr.exec();

}


void user_details::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void user_details::on_search_textChanged(const QString &arg1)
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");
    if(db.open())
    {
        QString search=ui->search->text();
        QSqlQueryModel *modal =new QSqlQueryModel();

        QSqlQuery * qry=new QSqlQuery();
        qry->prepare("select * from user_details where name like '"+search+"%"+"'");
        qry->bindValue(":search", search);
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }
}


void user_details::on_my_details_3_clicked()
{
    patient_requests pr;
    pr.setModal(true);
    hide();
    pr.exec();
}


void user_details::on_login_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

