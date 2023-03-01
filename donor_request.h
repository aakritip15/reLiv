#ifndef DONOR_REQUEST_H
#define DONOR_REQUEST_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class donor_request;
}

class donor_request : public QDialog
{
    Q_OBJECT

public:
    explicit donor_request(QWidget *parent = nullptr);
    ~donor_request();

private slots:


    void on_about_clicked();

    void on_why_clicked();

    void on_login_clicked();

    void on_my_details_clicked();

    void on_my_details_3_clicked();

    void on_home_clicked();

    void on_pushButton_clicked();

    void on_search_textChanged(const QString &arg1);

    void on_login_2_clicked();

private:
    Ui::donor_request *ui;
};

#endif // DONOR_REQUEST_H
