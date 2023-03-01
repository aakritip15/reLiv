#ifndef CAMPAIGN_H
#define CAMPAIGN_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class campaign;
}

class campaign : public QDialog
{
    Q_OBJECT

public:
    explicit campaign(QWidget *parent = nullptr);
    ~campaign();

private slots:

    void on_my_details_2_clicked();

    void on_my_details_3_clicked();

    void on_home_2_clicked();

    void on_about_2_clicked();

    void on_why_2_clicked();

    void on_login_2_clicked();



    void on_my_details_4_clicked();

    void on_login_3_clicked();

private:
    Ui::campaign *ui;
};

#endif // CAMPAIGN_H
