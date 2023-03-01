#ifndef EDIT_PATIENT_H
#define EDIT_PATIENT_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class edit_patient;
}

class edit_patient : public QDialog
{
    Q_OBJECT

public:
    explicit edit_patient(QWidget *parent = nullptr);
    ~edit_patient();

private slots:
    void on_pushButton_clicked();

    void on_my_details_clicked();

    void on_my_details_2_clicked();

    void on_my_details_3_clicked();

    void on_home_clicked();

    void on_about_clicked();

    void on_why_clicked();

    void on_login_clicked();

    void on_login_2_clicked();

private:
    Ui::edit_patient *ui;
};

#endif // EDIT_PATIENT_H
