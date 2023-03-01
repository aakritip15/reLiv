/********************************************************************************
** Form generated from reading UI file 'change_information.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_INFORMATION_H
#define UI_CHANGE_INFORMATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_change_information
{
public:
    QFrame *line_3;
    QLabel *gender_2;
    QLabel *gender;
    QLabel *password_2;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QLabel *name;
    QLabel *age_2;
    QLabel *label_8;
    QLabel *label;
    QPushButton *home;
    QFrame *line_4;
    QLabel *label_14;
    QCalendarWidget *calendarWidget;
    QLabel *email_2;
    QLabel *label_9;
    QPushButton *why;
    QPushButton *my_details_3;
    QFrame *line_2;
    QLabel *label_3;
    QLabel *phone_number_2;
    QFrame *line;
    QLabel *age;
    QLabel *label_5;
    QPushButton *about;
    QLabel *label_7;
    QLabel *label_33;
    QLabel *blood_group;
    QLabel *name_2;
    QPushButton *my_details_2;
    QPushButton *my_details_4;
    QLabel *location_1;
    QLabel *label_2;
    QLabel *label_10;
    QPushButton *login;
    QLineEdit *email;
    QLineEdit *phone_number;
    QLineEdit *location;
    QLineEdit *password;
    QPushButton *login_2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *change_information)
    {
        if (change_information->objectName().isEmpty())
            change_information->setObjectName("change_information");
        change_information->resize(1270, 700);
        change_information->setStyleSheet(QString::fromUtf8("background-color: #EFE6E7;\n"
""));
        line_3 = new QFrame(change_information);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(25, 370, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        gender_2 = new QLabel(change_information);
        gender_2->setObjectName("gender_2");
        gender_2->setGeometry(QRect(210, 540, 81, 31));
        QFont font;
        font.setPointSize(12);
        gender_2->setFont(font);
        gender_2->setCursor(QCursor(Qt::PointingHandCursor));
        gender_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        gender = new QLabel(change_information);
        gender->setObjectName("gender");
        gender->setGeometry(QRect(290, 540, 221, 31));
        gender->setFont(font);
        gender->setCursor(QCursor(Qt::PointingHandCursor));
        gender->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        password_2 = new QLabel(change_information);
        password_2->setObjectName("password_2");
        password_2->setGeometry(QRect(610, 540, 101, 31));
        password_2->setFont(font);
        password_2->setCursor(QCursor(Qt::PointingHandCursor));
        password_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        pushButton_2 = new QPushButton(change_information);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(610, 580, 301, 41));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        pushButton_2->setFont(font1);
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
        label_6 = new QLabel(change_information);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(180, 170, 361, 471));
        label_6->setCursor(QCursor(Qt::PointingHandCursor));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/background.png);\n"
"border-radius:20px;"));
        name = new QLabel(change_information);
        name->setObjectName("name");
        name->setGeometry(QRect(290, 460, 201, 31));
        name->setFont(font);
        name->setCursor(QCursor(Qt::PointingHandCursor));
        name->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        age_2 = new QLabel(change_information);
        age_2->setObjectName("age_2");
        age_2->setGeometry(QRect(210, 500, 61, 31));
        age_2->setFont(font);
        age_2->setCursor(QCursor(Qt::PointingHandCursor));
        age_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        label_8 = new QLabel(change_information);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(580, 170, 361, 181));
        label_8->setCursor(QCursor(Qt::PointingHandCursor));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/background.png);\n"
"border-radius:20px;"));
        label = new QLabel(change_information);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        home = new QPushButton(change_information);
        home->setObjectName("home");
        home->setGeometry(QRect(300, 30, 101, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        home->setFont(font2);
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
        line_4 = new QFrame(change_information);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(25, 445, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_14 = new QLabel(change_information);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(200, 580, 301, 31));
        label_14->setFont(font);
        label_14->setCursor(QCursor(Qt::PointingHandCursor));
        label_14->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        calendarWidget = new QCalendarWidget(change_information);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1010, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        email_2 = new QLabel(change_information);
        email_2->setObjectName("email_2");
        email_2->setGeometry(QRect(620, 420, 61, 31));
        email_2->setFont(font);
        email_2->setCursor(QCursor(Qt::PointingHandCursor));
        email_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        label_9 = new QLabel(change_information);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(580, 390, 361, 251));
        label_9->setCursor(QCursor(Qt::PointingHandCursor));
        label_9->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/background.png);\n"
"border-radius:20px;"));
        why = new QPushButton(change_information);
        why->setObjectName("why");
        why->setGeometry(QRect(570, 30, 231, 41));
        why->setFont(font2);
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
        my_details_3 = new QPushButton(change_information);
        my_details_3->setObjectName("my_details_3");
        my_details_3->setGeometry(QRect(30, 380, 81, 61));
        my_details_3->setFont(font1);
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
        line_2 = new QFrame(change_information);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(25, 290, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(change_information);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 130, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        phone_number_2 = new QLabel(change_information);
        phone_number_2->setObjectName("phone_number_2");
        phone_number_2->setGeometry(QRect(610, 460, 151, 31));
        phone_number_2->setFont(font);
        phone_number_2->setCursor(QCursor(Qt::PointingHandCursor));
        phone_number_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        line = new QFrame(change_information);
        line->setObjectName("line");
        line->setGeometry(QRect(25, 210, 89, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        age = new QLabel(change_information);
        age->setObjectName("age");
        age->setGeometry(QRect(290, 500, 221, 31));
        age->setFont(font);
        age->setCursor(QCursor(Qt::PointingHandCursor));
        age->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        label_5 = new QLabel(change_information);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 140, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        about = new QPushButton(change_information);
        about->setObjectName("about");
        about->setGeometry(QRect(430, 30, 151, 41));
        about->setFont(font2);
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
        label_7 = new QLabel(change_information);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        label_33 = new QLabel(change_information);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(685, 180, 201, 51));
        QFont font3;
        font3.setPointSize(19);
        font3.setBold(true);
        label_33->setFont(font3);
        label_33->setCursor(QCursor(Qt::PointingHandCursor));
        label_33->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/background.png);"));
        blood_group = new QLabel(change_information);
        blood_group->setObjectName("blood_group");
        blood_group->setGeometry(QRect(710, 230, 121, 91));
        QFont font4;
        font4.setPointSize(55);
        font4.setBold(true);
        blood_group->setFont(font4);
        blood_group->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/background.png);"));
        name_2 = new QLabel(change_information);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(200, 460, 91, 31));
        name_2->setFont(font);
        name_2->setCursor(QCursor(Qt::PointingHandCursor));
        name_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        my_details_2 = new QPushButton(change_information);
        my_details_2->setObjectName("my_details_2");
        my_details_2->setGeometry(QRect(30, 220, 81, 61));
        my_details_2->setFont(font1);
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
        my_details_4 = new QPushButton(change_information);
        my_details_4->setObjectName("my_details_4");
        my_details_4->setGeometry(QRect(30, 300, 81, 61));
        my_details_4->setFont(font1);
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
        location_1 = new QLabel(change_information);
        location_1->setObjectName("location_1");
        location_1->setGeometry(QRect(610, 500, 111, 31));
        location_1->setFont(font);
        location_1->setCursor(QCursor(Qt::PointingHandCursor));
        location_1->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgba(0,0,0,0);\n"
"padding-bottom:7px;"));
        label_2 = new QLabel(change_information);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(25, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_10 = new QLabel(change_information);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(210, 210, 301, 201));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/profile1.jfif);"));
        login = new QPushButton(change_information);
        login->setObjectName("login");
        login->setGeometry(QRect(930, 30, 151, 41));
        login->setFont(font2);
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
        email = new QLineEdit(change_information);
        email->setObjectName("email");
        email->setGeometry(QRect(680, 416, 221, 31));
        QFont font5;
        font5.setPointSize(10);
        email->setFont(font5);
        email->setCursor(QCursor(Qt::IBeamCursor));
        email->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"	border-image: url(:/Images/background.png);\n"
"}"));
        phone_number = new QLineEdit(change_information);
        phone_number->setObjectName("phone_number");
        phone_number->setGeometry(QRect(730, 459, 211, 31));
        phone_number->setFont(font5);
        phone_number->setCursor(QCursor(Qt::IBeamCursor));
        phone_number->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"	border-image: url(:/Images/background.png);\n"
"}"));
        location = new QLineEdit(change_information);
        location->setObjectName("location");
        location->setGeometry(QRect(710, 499, 221, 31));
        location->setFont(font5);
        location->setCursor(QCursor(Qt::IBeamCursor));
        location->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"	border-image: url(:/Images/background.png);\n"
"}"));
        password = new QLineEdit(change_information);
        password->setObjectName("password");
        password->setGeometry(QRect(715, 539, 221, 31));
        password->setFont(font5);
        password->setCursor(QCursor(Qt::IBeamCursor));
        password->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"	border-image: url(:/Images/background.png);\n"
"}"));
        login_2 = new QPushButton(change_information);
        login_2->setObjectName("login_2");
        login_2->setGeometry(QRect(1100, 30, 151, 41));
        login_2->setFont(font2);
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
        pushButton_4 = new QPushButton(change_information);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1010, 130, 237, 306));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);\n"
"border-radius:3px;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/donor_day.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(250, 400));
        label_3->raise();
        label_6->raise();
        label_2->raise();
        label_8->raise();
        label_9->raise();
        line_3->raise();
        gender_2->raise();
        gender->raise();
        password_2->raise();
        name->raise();
        age_2->raise();
        label->raise();
        home->raise();
        line_4->raise();
        label_14->raise();
        calendarWidget->raise();
        email_2->raise();
        why->raise();
        my_details_3->raise();
        line_2->raise();
        phone_number_2->raise();
        line->raise();
        age->raise();
        label_5->raise();
        about->raise();
        label_7->raise();
        label_33->raise();
        blood_group->raise();
        name_2->raise();
        my_details_2->raise();
        my_details_4->raise();
        location_1->raise();
        label_10->raise();
        login->raise();
        pushButton_2->raise();
        email->raise();
        phone_number->raise();
        location->raise();
        password->raise();
        login_2->raise();
        pushButton_4->raise();

        retranslateUi(change_information);

        QMetaObject::connectSlotsByName(change_information);
    } // setupUi

    void retranslateUi(QDialog *change_information)
    {
        change_information->setWindowTitle(QCoreApplication::translate("change_information", "Dialog", nullptr));
        gender_2->setText(QCoreApplication::translate("change_information", "Gender:", nullptr));
        gender->setText(QString());
        password_2->setText(QCoreApplication::translate("change_information", "  Password  : ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("change_information", "Save Changes", nullptr));
        label_6->setText(QString());
        name->setText(QString());
        age_2->setText(QCoreApplication::translate("change_information", "Age :", nullptr));
        label_8->setText(QString());
        label->setText(QString());
        home->setText(QCoreApplication::translate("change_information", "Home", nullptr));
        label_14->setText(QCoreApplication::translate("change_information", "  Joined  :     October 14", nullptr));
        email_2->setText(QCoreApplication::translate("change_information", "Email:", nullptr));
        label_9->setText(QString());
        why->setText(QCoreApplication::translate("change_information", "Why become donor", nullptr));
        my_details_3->setText(QCoreApplication::translate("change_information", "Request\n"
"Blood", nullptr));
        label_3->setText(QString());
        phone_number_2->setText(QCoreApplication::translate("change_information", "  Phone number  : ", nullptr));
        age->setText(QString());
        label_5->setText(QString());
        about->setText(QCoreApplication::translate("change_information", "About us", nullptr));
        label_7->setText(QString());
        label_33->setText(QCoreApplication::translate("change_information", "Blood Group", nullptr));
        blood_group->setText(QString());
        name_2->setText(QCoreApplication::translate("change_information", "  Name  : ", nullptr));
        my_details_2->setText(QCoreApplication::translate("change_information", "My\n"
"Details", nullptr));
        my_details_4->setText(QCoreApplication::translate("change_information", "Donate\n"
"Blood", nullptr));
        location_1->setText(QCoreApplication::translate("change_information", "  Location  :", nullptr));
        label_2->setText(QString());
        label_10->setText(QString());
        login->setText(QCoreApplication::translate("change_information", "Dashboard", nullptr));
        email->setText(QString());
        email->setPlaceholderText(QCoreApplication::translate("change_information", "  Enter email", nullptr));
        phone_number->setText(QString());
        phone_number->setPlaceholderText(QCoreApplication::translate("change_information", "  Enter phone number", nullptr));
        location->setText(QString());
        location->setPlaceholderText(QCoreApplication::translate("change_information", "  Enter location", nullptr));
        password->setText(QString());
        password->setPlaceholderText(QCoreApplication::translate("change_information", "  Enter password", nullptr));
        login_2->setText(QCoreApplication::translate("change_information", "Logout", nullptr));
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class change_information: public Ui_change_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_INFORMATION_H
