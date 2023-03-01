#ifndef USER_DETAILS_H
#define USER_DETAILS_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class user_details;
}

class user_details : public QDialog
{
    Q_OBJECT

public:
    explicit user_details(QWidget *parent = nullptr);
    ~user_details();

private slots:

    void on_about_clicked();

    void on_why_clicked();

    void on_login_clicked();

    void on_my_details_2_clicked();

    void on_home_clicked();

    void on_search_textChanged(const QString &arg1);

    void on_my_details_3_clicked();

    void on_login_2_clicked();

private:
    Ui::user_details *ui;
};

#endif // USER_DETAILS_H
