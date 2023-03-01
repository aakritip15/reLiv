#include "create_account.h"
#include "ui_create_account.h"
#include "mainwindow.h"

create_account::create_account(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::create_account)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
    setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
}

create_account::~create_account()
{
    delete ui;
}

void create_account::on_register_2_clicked()
{


    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/user/OneDrive/Documents/Final/Databases/final.db");

    if(db.open())
    {
        QString name=ui->name->text();
        QString age=ui->age->text();
        QString blood_group=ui->blood_group->text();
        QString gender=ui->gender->text();
        QString location=ui->location->text();
        QString email=ui->email->text();
        QString phone_number=ui->phone_number->text();
        QString password=ui->password->text();
        QString disease=ui->disease->text();
        if(name != "" && age != "" && blood_group != "" && gender != "" && location != "" && email != "" && phone_number != "" && password != ""){

        int em=0,ph_no=0,p=0;
        QRegularExpression re("(\\w+)(\\w*)@(\\w+)(\\.(\\w+))+");
        if(re.match(email).hasMatch()) em = 1;
        if(phone_number.length()>=10)  ph_no=1;
        if(password.length()>=8)   p=1;

        if(p){
            if(em){
            if(ph_no){


        QSqlQuery qry,check;
        int user_id=0;
        if(check.exec("select * from user_details where email='"+email+"' "))
        {
            while(check.next())
            {
                 user_id++;
            }
        }
        if(user_id==1)
        {
              QMessageBox::information(this,"Error","Your account is already registered with this email.");
        }
        else
        {
        qry.prepare("INSERT INTO user_details(name,age,blood_group,gender,location,email,phone_number,password,disease) "
                    "VALUES('"+name+"', '"+age+"', '"+blood_group+"', '"+gender+"', '"+location+"', '"+email+"', '"+phone_number+"', '"+password+"', '"+disease+"')");
        qry.bindValue(":name", name);
        qry.bindValue(":age", age);
        qry.bindValue(":blood_group", blood_group);
        qry.bindValue(":gender", gender);
        qry.bindValue(":location", location);
        qry.bindValue(":email", email);
        qry.bindValue(":phone_number", phone_number);
        qry.bindValue(":password", password);
        qry.bindValue(":disease", disease);

        if(qry.exec())
        {
               QMessageBox::information(this,"Information","Your account is created");
        }
        }
      }
            else
            {
                ui->phone_number->setStyleSheet("border: 1px solid rgb(144, 10, 18) ");
                QMessageBox::information(this, "Error", "Please Enter valid Phone number.");
            }
        }
        else
        {
                 ui->email->setStyleSheet("border: 1px solid rgb(144, 10, 18) ");
                QMessageBox::critical(this, "Error", "Please Enter valid Email.");

        }
    }
        else
        {
            ui->password->setStyleSheet("border: 1px solid rgb(144, 10, 18)");
            QMessageBox::critical(this, "Error", "Password must be at least 8 character long.");
        }
    }

        else {
            QMessageBox::critical(this, "Error", "Fill in all the input fields to create account.");
        }
        }
    }




void create_account::on_back_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

