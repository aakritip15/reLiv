#ifndef REQUEST_BLOOD_H
#define REQUEST_BLOOD_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class request_blood;
}

class request_blood : public QDialog
{
    Q_OBJECT

public:
    explicit request_blood(QWidget *parent = nullptr);
    ~request_blood();

private slots:
    void on_my_details_2_clicked();

    void on_my_details_3_clicked();

    void on_my_details_clicked();

    void on_login_clicked();

    void on_register_2_clicked();

    void on_about_clicked();

    void on_why_clicked();

    void on_home_clicked();

    void on_register_3_clicked();

    void on_login_2_clicked();

private:
    Ui::request_blood *ui;
};

#endif // REQUEST_BLOOD_H
