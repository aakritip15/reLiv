#ifndef USERDASHBOARD_H
#define USERDASHBOARD_H

#include <QDialog>

namespace Ui {
class userDashboard;
}

class userDashboard : public QDialog
{
    Q_OBJECT

public:
    explicit userDashboard(QWidget *parent = nullptr);
    ~userDashboard();

private slots:
    void on_my_details_2_clicked();

    void on_my_details_3_clicked();

    void on_my_details_clicked();

    void on_login_clicked();

    void on_about_clicked();

    void on_why_clicked();

    void on_home_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_login_2_clicked();

private:
    Ui::userDashboard *ui;
};

#endif // USERDASHBOARD_H
