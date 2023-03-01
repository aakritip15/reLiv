#ifndef PATIENT_REQUESTS_H
#define PATIENT_REQUESTS_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class patient_requests;
}

class patient_requests : public QDialog
{
    Q_OBJECT

public:
    explicit patient_requests(QWidget *parent = nullptr);
    ~patient_requests();

private slots:
    void on_about_clicked();

    void on_why_clicked();

    void on_login_clicked();

    void on_my_details_2_clicked();

    void on_my_details_clicked();

    void on_home_clicked();

    void on_pushButton_clicked();

    void on_search_textChanged(const QString &arg1);

    void on_login_2_clicked();

private:
    Ui::patient_requests *ui;
};

#endif // PATIENT_REQUESTS_H
