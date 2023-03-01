#ifndef CAMAIGN_ADMIN_H
#define CAMAIGN_ADMIN_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class camaign_admin;
}

class camaign_admin : public QDialog
{
    Q_OBJECT

public:
    explicit camaign_admin(QWidget *parent = nullptr);
    ~camaign_admin();

private slots:
    void on_my_details_clicked();

    void on_my_details_2_clicked();

    void on_my_details_3_clicked();

    void on_login_clicked();

    void on_home_clicked();

    void on_about_clicked();

    void on_why_clicked();

    void on_Post_clicked();

    void on_login_2_clicked();

private:
    Ui::camaign_admin *ui;
};

#endif // CAMAIGN_ADMIN_H
