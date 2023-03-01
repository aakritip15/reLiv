#include "edit_donor.h"
#include "ui_edit_donor.h"
#include "mainwindow.h"
#include "about.h"
#include "why_become_donor.h"
#include "admin_dashboard.h"
#include "user_details.h"
#include "patient_requests.h"
#include "edit_donor.h"
#include "donor_request.h"


edit_donor::edit_donor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_donor)
{
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
}


edit_donor::~edit_donor()
{
    delete ui;
}


void edit_donor::on_pushButton_clicked()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");
    if(db.open())
    {
        QString userid=ui->userid->text();

        if(userid != ""){
            QSqlQuery qry;
            int count=0;
            if(qry.exec("select * from donor_details where donor_id= '"+userid+"'"))
//            qry.bindValue(":userid", userid);
            {
                while(qry.next())
                {

                    count++;
                }

                if(count==1)


{
      QSqlQuery qry1;
      if(qry1.prepare("DELETE from donor_details where donor_id= :userid " ))
      qry1.bindValue(":userid", userid);{



        if(qry1.exec())
        {
              QMessageBox :: critical(this, tr("Deleted"), tr("Deleted"));
              donor_request dr;
              dr.setModal(true);
              hide();
              dr.exec();

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


void edit_donor::on_my_details_3_clicked()
{
    patient_requests pr;
    pr.setModal(true);
    hide();
    pr.exec();
}


void edit_donor::on_my_details_clicked()
{
    user_details u1;
    u1.setModal(true);
    hide();
    u1.exec();
}


void edit_donor::on_my_details_2_clicked()
{
    donor_request d1;
    d1.setModal(true);
    hide();
    d1.exec();
}


void edit_donor::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void edit_donor::on_about_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void edit_donor::on_why_clicked()
{
    why_become_donor wh;
    wh.setModal(true);
    hide();
    wh.exec();
}


void edit_donor::on_login_clicked()
{
    admin_dashboard u1;
    u1.setModal(true);
    hide();
    u1.exec();
}


void edit_donor::on_login_2_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

