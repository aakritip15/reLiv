#ifndef DONATE_BLOOD_H
#define DONATE_BLOOD_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class donate_blood;
}

class donate_blood : public QDialog
{
    Q_OBJECT

public:
    explicit donate_blood(QWidget *parent = nullptr);
    ~donate_blood();

private slots:
    void on_my_details_3_clicked();

    void on_my_details_2_clicked();

    void on_my_details_clicked();

    void on_login_clicked();

    void on_donate_clicked();

    void on_about_clicked();

    void on_why_clicked();

    void on_home_clicked();

    void on_login_2_clicked();

private:
    Ui::donate_blood *ui;
};

#endif // DONATE_BLOOD_H
