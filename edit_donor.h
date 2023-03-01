#ifndef EDIT_DONOR_H
#define EDIT_DONOR_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class edit_donor;
}

class edit_donor : public QDialog
{
    Q_OBJECT

public:
    explicit edit_donor(QWidget *parent = nullptr);
    ~edit_donor();

private slots:
    void on_pushButton_clicked();

    void on_my_details_3_clicked();

    void on_my_details_clicked();

    void on_my_details_2_clicked();

    void on_home_clicked();

    void on_about_clicked();

    void on_why_clicked();

    void on_login_clicked();

    void on_login_2_clicked();

private:
    Ui::edit_donor *ui;
};

#endif // EDIT_DONOR_H
