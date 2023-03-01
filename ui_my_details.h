/********************************************************************************
** Form generated from reading UI file 'my_details.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MY_DETAILS_H
#define UI_MY_DETAILS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_my_details
{
public:
    QPushButton *my_details_3;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_7;
    QPushButton *why;
    QPushButton *login;
    QFrame *line_2;
    QLabel *label;
    QFrame *line;
    QPushButton *about;
    QPushButton *my_details_2;
    QPushButton *home;
    QFrame *line_4;
    QLabel *label_2;
    QCalendarWidget *calendarWidget;
    QFrame *line_3;
    QPushButton *my_details_4;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_33;
    QLabel *blood_group;
    QLabel *name;
    QLabel *age;
    QLabel *gender;
    QLabel *label_14;
    QLabel *email;
    QLabel *phone_number;
    QLabel *password;
    QLabel *location_1;
    QPushButton *pushButton_2;
    QLabel *name_2;
    QLabel *age_2;
    QLabel *gender_2;
    QLabel *email_2;
    QLabel *phone_number_2;
    QLabel *location;
    QLabel *password_2;
    QPushButton *login_2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *my_details)
    {
        if (my_details->objectName().isEmpty())
            my_details->setObjectName("my_details");
        my_details->resize(1270, 700);
        my_details->setStyleSheet(QString::fromUtf8("background-color: #EFE6E7;"));
        my_details_3 = new QPushButton(my_details);
        my_details_3->setObjectName("my_details_3");
        my_details_3->setGeometry(QRect(30, 380, 81, 61));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        my_details_3->setFont(font);
        my_details_3->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_3->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"\n"
"#my_details_3::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}\n"
""));
        label_5 = new QLabel(my_details);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 140, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        label_3 = new QLabel(my_details);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 130, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_7 = new QLabel(my_details);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        why = new QPushButton(my_details);
        why->setObjectName("why");
        why->setGeometry(QRect(578, 30, 231, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        why->setFont(font1);
        why->setCursor(QCursor(Qt::PointingHandCursor));
        why->setStyleSheet(QString::fromUtf8("#why\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#why::hover\n"
"{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        login = new QPushButton(my_details);
        login->setObjectName("login");
        login->setGeometry(QRect(930, 30, 151, 41));
        login->setFont(font1);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setStyleSheet(QString::fromUtf8("#login\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"#login::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        line_2 = new QFrame(my_details);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(25, 290, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label = new QLabel(my_details);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        line = new QFrame(my_details);
        line->setObjectName("line");
        line->setGeometry(QRect(25, 210, 89, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        about = new QPushButton(my_details);
        about->setObjectName("about");
        about->setGeometry(QRect(430, 30, 145, 41));
        about->setFont(font1);
        about->setCursor(QCursor(Qt::PointingHandCursor));
        about->setStyleSheet(QString::fromUtf8("#about\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#about::hover\n"
"{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        my_details_2 = new QPushButton(my_details);
        my_details_2->setObjectName("my_details_2");
        my_details_2->setGeometry(QRect(30, 220, 81, 61));
        my_details_2->setFont(font);
        my_details_2->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_2->setStyleSheet(QString::fromUtf8("#my_details_2\n"
"\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"#my_details_2::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        home = new QPushButton(my_details);
        home->setObjectName("home");
        home->setGeometry(QRect(300, 30, 101, 41));
        home->setFont(font1);
        home->setCursor(QCursor(Qt::PointingHandCursor));
        home->setStyleSheet(QString::fromUtf8("#home\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#home::hover\n"
"{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        line_4 = new QFrame(my_details);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(25, 445, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(my_details);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(25, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        calendarWidget = new QCalendarWidget(my_details);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1010, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        line_3 = new QFrame(my_details);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(25, 370, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        my_details_4 = new QPushButton(my_details);
        my_details_4->setObjectName("my_details_4");
        my_details_4->setGeometry(QRect(30, 300, 81, 61));
        my_details_4->setFont(font);
        my_details_4->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_4->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"\n"
"\n"
"#my_details_4::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}\n"
""));
        label_6 = new QLabel(my_details);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(180, 170, 361, 471));
        label_6->setCursor(QCursor(Qt::ArrowCursor));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/background.png);\n"
"border-radius:20px;"));
        label_8 = new QLabel(my_details);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(580, 170, 361, 181));
        label_8->setCursor(QCursor(Qt::ArrowCursor));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/background.png);\n"
"border-radius:20px;"));
        label_9 = new QLabel(my_details);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(580, 390, 361, 251));
        label_9->setCursor(QCursor(Qt::ArrowCursor));
        label_9->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/background.png);\n"
"border-radius:20px;"));
        label_10 = new QLabel(my_details);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(210, 210, 301, 201));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/profile1.jfif);"));
        label_33 = new QLabel(my_details);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(685, 180, 201, 51));
        QFont font2;
        font2.setPointSize(19);
        font2.setBold(true);
        label_33->setFont(font2);
        label_33->setCursor(QCursor(Qt::PointingHandCursor));
        label_33->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/background.png);"));
        blood_group = new QLabel(my_details);
        blood_group->setObjectName("blood_group");
        blood_group->setGeometry(QRect(710, 230, 121, 91));
        QFont font3;
        font3.setPointSize(55);
        font3.setBold(true);
        blood_group->setFont(font3);
        blood_group->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/background.png);"));
        name = new QLabel(my_details);
        name->setObjectName("name");
        name->setGeometry(QRect(290, 460, 201, 31));
        QFont font4;
        font4.setPointSize(12);
        name->setFont(font4);
        name->setCursor(QCursor(Qt::ArrowCursor));
        name->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        age = new QLabel(my_details);
        age->setObjectName("age");
        age->setGeometry(QRect(290, 500, 221, 31));
        age->setFont(font4);
        age->setCursor(QCursor(Qt::ArrowCursor));
        age->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        gender = new QLabel(my_details);
        gender->setObjectName("gender");
        gender->setGeometry(QRect(290, 540, 221, 31));
        gender->setFont(font4);
        gender->setCursor(QCursor(Qt::ArrowCursor));
        gender->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        label_14 = new QLabel(my_details);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(200, 580, 301, 31));
        label_14->setFont(font4);
        label_14->setCursor(QCursor(Qt::ArrowCursor));
        label_14->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        email = new QLabel(my_details);
        email->setObjectName("email");
        email->setGeometry(QRect(780, 420, 141, 31));
        email->setFont(font4);
        email->setCursor(QCursor(Qt::ArrowCursor));
        email->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        phone_number = new QLabel(my_details);
        phone_number->setObjectName("phone_number");
        phone_number->setGeometry(QRect(780, 460, 141, 31));
        phone_number->setFont(font4);
        phone_number->setCursor(QCursor(Qt::ArrowCursor));
        phone_number->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        password = new QLabel(my_details);
        password->setObjectName("password");
        password->setGeometry(QRect(780, 540, 141, 31));
        password->setFont(font4);
        password->setCursor(QCursor(Qt::ArrowCursor));
        password->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        location_1 = new QLabel(my_details);
        location_1->setObjectName("location_1");
        location_1->setGeometry(QRect(610, 500, 301, 31));
        location_1->setFont(font4);
        location_1->setCursor(QCursor(Qt::PointingHandCursor));
        location_1->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        pushButton_2 = new QPushButton(my_details);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(610, 580, 301, 41));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("*{border-radius: 20px;\n"
"background-color: rgb(144, 10, 18);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton_2::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        name_2 = new QLabel(my_details);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(200, 460, 91, 31));
        name_2->setFont(font4);
        name_2->setCursor(QCursor(Qt::ArrowCursor));
        name_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        age_2 = new QLabel(my_details);
        age_2->setObjectName("age_2");
        age_2->setGeometry(QRect(210, 500, 71, 31));
        age_2->setFont(font4);
        age_2->setCursor(QCursor(Qt::ArrowCursor));
        age_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        gender_2 = new QLabel(my_details);
        gender_2->setObjectName("gender_2");
        gender_2->setGeometry(QRect(210, 540, 81, 31));
        gender_2->setFont(font4);
        gender_2->setCursor(QCursor(Qt::ArrowCursor));
        gender_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        email_2 = new QLabel(my_details);
        email_2->setObjectName("email_2");
        email_2->setGeometry(QRect(620, 420, 61, 31));
        email_2->setFont(font4);
        email_2->setCursor(QCursor(Qt::ArrowCursor));
        email_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        phone_number_2 = new QLabel(my_details);
        phone_number_2->setObjectName("phone_number_2");
        phone_number_2->setGeometry(QRect(610, 460, 141, 31));
        phone_number_2->setFont(font4);
        phone_number_2->setCursor(QCursor(Qt::ArrowCursor));
        phone_number_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        location = new QLabel(my_details);
        location->setObjectName("location");
        location->setGeometry(QRect(780, 500, 141, 31));
        location->setFont(font4);
        location->setCursor(QCursor(Qt::ArrowCursor));
        location->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        password_2 = new QLabel(my_details);
        password_2->setObjectName("password_2");
        password_2->setGeometry(QRect(610, 540, 101, 31));
        password_2->setFont(font4);
        password_2->setCursor(QCursor(Qt::ArrowCursor));
        password_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        login_2 = new QPushButton(my_details);
        login_2->setObjectName("login_2");
        login_2->setGeometry(QRect(1100, 30, 151, 41));
        login_2->setFont(font1);
        login_2->setCursor(QCursor(Qt::PointingHandCursor));
        login_2->setStyleSheet(QString::fromUtf8("#login_2\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#login_2::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        pushButton_4 = new QPushButton(my_details);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1010, 130, 237, 306));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);\n"
"border-radius:3px;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/donor_day.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(250, 400));
        label_2->raise();
        label->raise();
        label_3->raise();
        my_details_3->raise();
        label_5->raise();
        label_7->raise();
        why->raise();
        login->raise();
        line_2->raise();
        line->raise();
        about->raise();
        my_details_2->raise();
        home->raise();
        line_4->raise();
        calendarWidget->raise();
        line_3->raise();
        my_details_4->raise();
        label_6->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_33->raise();
        blood_group->raise();
        name->raise();
        age->raise();
        gender->raise();
        label_14->raise();
        email->raise();
        phone_number->raise();
        password->raise();
        location_1->raise();
        pushButton_2->raise();
        name_2->raise();
        age_2->raise();
        gender_2->raise();
        email_2->raise();
        phone_number_2->raise();
        location->raise();
        password_2->raise();
        login_2->raise();
        pushButton_4->raise();

        retranslateUi(my_details);

        QMetaObject::connectSlotsByName(my_details);
    } // setupUi

    void retranslateUi(QDialog *my_details)
    {
        my_details->setWindowTitle(QCoreApplication::translate("my_details", "Dialog", nullptr));
        my_details_3->setText(QCoreApplication::translate("my_details", "Request\n"
"Blood", nullptr));
        label_5->setText(QString());
        label_3->setText(QString());
        label_7->setText(QString());
        why->setText(QCoreApplication::translate("my_details", "Why become donor", nullptr));
        login->setText(QCoreApplication::translate("my_details", "Dashboard", nullptr));
        label->setText(QString());
        about->setText(QCoreApplication::translate("my_details", "About us", nullptr));
        my_details_2->setText(QCoreApplication::translate("my_details", "My\n"
"Details", nullptr));
        home->setText(QCoreApplication::translate("my_details", "Home", nullptr));
        label_2->setText(QString());
        my_details_4->setText(QCoreApplication::translate("my_details", "Donate\n"
"Blood", nullptr));
        label_6->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_33->setText(QCoreApplication::translate("my_details", "Blood Group", nullptr));
        blood_group->setText(QString());
        name->setText(QString());
        age->setText(QString());
        gender->setText(QString());
        label_14->setText(QCoreApplication::translate("my_details", "  Joined  :     October 14", nullptr));
        email->setText(QString());
        phone_number->setText(QString());
        password->setText(QString());
        location_1->setText(QCoreApplication::translate("my_details", "  Location  :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("my_details", "Change information", nullptr));
        name_2->setText(QCoreApplication::translate("my_details", "  Name: ", nullptr));
        age_2->setText(QCoreApplication::translate("my_details", "Age:", nullptr));
        gender_2->setText(QCoreApplication::translate("my_details", "Gender:", nullptr));
        email_2->setText(QCoreApplication::translate("my_details", "Email:", nullptr));
        phone_number_2->setText(QCoreApplication::translate("my_details", "  Phone number: ", nullptr));
        location->setText(QString());
        password_2->setText(QCoreApplication::translate("my_details", "  Password  : ", nullptr));
        login_2->setText(QCoreApplication::translate("my_details", "Logout", nullptr));
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class my_details: public Ui_my_details {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MY_DETAILS_H
