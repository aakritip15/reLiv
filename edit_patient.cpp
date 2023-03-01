#include "edit_patient.h"
#include "ui_edit_patient.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "admin_dashboard.h"
#include "user_details.h"
#include "patient_requests.h"
#include "edit_donor.h"
#include "donor_request.h".h"
extern int id;


edit_patient::edit_patient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_patient)
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
        qry->prepare("select * from patient_details");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
        qDebug()<<(modal->rowCount());
    }
}


edit_patient::~edit_patient()
{
    delete ui;
}


void edit_patient::on_pushButton_clicked()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");
    if(db.open())
    {
        QString userid=ui->userid->text();

        if(userid != ""){
            QSqlQuery qry;
            int count=0;
            if(qry.exec("select * from patient_details where patient_id= '"+userid+"'"))

            {
                while(qry.next())
                {

                    count++;
                }

                if(count==1)


{
      QSqlQuery qry;
      if(qry.prepare("DELETE from patient_details where patient_id= :userid " )){
      qry.bindValue(":userid", userid);


        if(qry.exec())
        {
              QMessageBox :: critical(this, tr("Deleted"), tr("Deleted"));
              patient_requests pr;
              pr.setModal(true);
              hide();
              pr.exec();

        }

     else
     {
         QMessageBox :: critical(this, tr("erorr::"), qry.lastError().text());

     }
      }

      }


        else
        {
           QMessageBox::information(this,"Information","Id incorrect");
        }


}
        }
else
{
              QMessageBox::information(this,"Error","Enter user_id ");
 }


}
}


void edit_patient::on_my_details_clicked()
{
    user_details u1;
    u1.setModal(true);
    hide();
    u1.exec();
}


void edit_patient::on_my_details_2_clicked()
{
    patient_requests r1;
    r1.setModal(true);
    hide();
    r1.exec();
}


void edit_patient::on_my_details_3_clicked()
{
    donor_request dr;
    dr.setModal(true);
    hide();
    dr.exec();
}


void edit_patient::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void edit_patient::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void edit_patient::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void edit_patient::on_login_clicked()
{
    admin_dashboard u1;
    u1.setModal(true);
    hide();
    u1.exec();
}


void edit_patient::on_login_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

