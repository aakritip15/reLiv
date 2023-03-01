/********************************************************************************
** Form generated from reading UI file 'camaign_admin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMAIGN_ADMIN_H
#define UI_CAMAIGN_ADMIN_H

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

class Ui_camaign_admin
{
public:
    QPushButton *home;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_7;
    QCalendarWidget *calendarWidget;
    QPushButton *login;
    QPushButton *about;
    QPushButton *my_details_2;
    QPushButton *why;
    QPushButton *my_details_3;
    QFrame *line_4;
    QPushButton *my_details;
    QLabel *label_3;
    QLabel *label_5;
    QFrame *line;
    QLabel *label_8;
    QLabel *label_21;
    QFrame *line_5;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_44;
    QLabel *label_12;
    QLineEdit *date;
    QLineEdit *time;
    QLineEdit *location;
    QPushButton *Post;
    QLabel *label_13;
    QLineEdit *motive;
    QLabel *label_6;
    QPushButton *login_2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *camaign_admin)
    {
        if (camaign_admin->objectName().isEmpty())
            camaign_admin->setObjectName("camaign_admin");
        camaign_admin->resize(1270, 700);
        camaign_admin->setStyleSheet(QString::fromUtf8("background-color:#EFE6E7;\n"
""));
        home = new QPushButton(camaign_admin);
        home->setObjectName("home");
        home->setGeometry(QRect(290, 30, 101, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        home->setFont(font);
        home->setCursor(QCursor(Qt::PointingHandCursor));
        home->setStyleSheet(QString::fromUtf8("#home\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"\n"
"#home::hover{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        line_2 = new QFrame(camaign_admin);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(20, 290, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(camaign_admin);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(20, 370, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(camaign_admin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label = new QLabel(camaign_admin);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_7 = new QLabel(camaign_admin);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        calendarWidget = new QCalendarWidget(camaign_admin);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1010, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        login = new QPushButton(camaign_admin);
        login->setObjectName("login");
        login->setGeometry(QRect(930, 30, 151, 41));
        login->setFont(font);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setStyleSheet(QString::fromUtf8("#login\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"border-radius:20px;\n"
"	color: rgb(255, 255, 255)\n"
"}\n"
"\n"
"#login::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        about = new QPushButton(camaign_admin);
        about->setObjectName("about");
        about->setGeometry(QRect(420, 30, 111, 41));
        about->setFont(font);
        about->setStyleSheet(QString::fromUtf8("#about\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"\n"
"#about::hover{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        my_details_2 = new QPushButton(camaign_admin);
        my_details_2->setObjectName("my_details_2");
        my_details_2->setGeometry(QRect(25, 300, 81, 61));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        my_details_2->setFont(font1);
        my_details_2->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_2->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"\n"
"#my_details_2::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}\n"
""));
        why = new QPushButton(camaign_admin);
        why->setObjectName("why");
        why->setGeometry(QRect(550, 30, 231, 41));
        why->setFont(font);
        why->setCursor(QCursor(Qt::PointingHandCursor));
        why->setStyleSheet(QString::fromUtf8("#why\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#why::hover{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        my_details_3 = new QPushButton(camaign_admin);
        my_details_3->setObjectName("my_details_3");
        my_details_3->setGeometry(QRect(25, 380, 81, 61));
        my_details_3->setFont(font1);
        my_details_3->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_3->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"\n"
"#my_details_3::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}\n"
""));
        line_4 = new QFrame(camaign_admin);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(20, 445, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        my_details = new QPushButton(camaign_admin);
        my_details->setObjectName("my_details");
        my_details->setGeometry(QRect(25, 220, 81, 61));
        my_details->setFont(font1);
        my_details->setCursor(QCursor(Qt::PointingHandCursor));
        my_details->setStyleSheet(QString::fromUtf8("#my_details\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"\n"
"#my_details::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        label_3 = new QLabel(camaign_admin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(138, 125, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_5 = new QLabel(camaign_admin);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(35, 140, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        line = new QFrame(camaign_admin);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 210, 89, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(camaign_admin);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(170, 230, 521, 141));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(false);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_21 = new QLabel(camaign_admin);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(170, 450, 481, 175));
        label_21->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        line_5 = new QFrame(camaign_admin);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(138, 160, 845, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_18 = new QLabel(camaign_admin);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(160, 133, 211, 20));
        label_18->setFont(font2);
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_19 = new QLabel(camaign_admin);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(170, 170, 301, 31));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        label_19->setFont(font3);
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(144, 10, 18);"));
        label_20 = new QLabel(camaign_admin);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(170, 385, 301, 31));
        label_20->setFont(font3);
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(144, 10, 18);"));
        label_9 = new QLabel(camaign_admin);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(190, 540, 63, 20));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        label_9->setFont(font4);
        label_10 = new QLabel(camaign_admin);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(190, 580, 111, 20));
        label_10->setFont(font4);
        label_44 = new QLabel(camaign_admin);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(190, 460, 181, 20));
        label_44->setFont(font4);
        label_44->setStyleSheet(QString::fromUtf8("color: rgb(144, 10, 18);"));
        label_12 = new QLabel(camaign_admin);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(190, 500, 63, 20));
        label_12->setFont(font4);
        date = new QLineEdit(camaign_admin);
        date->setObjectName("date");
        date->setGeometry(QRect(270, 500, 151, 20));
        QFont font5;
        font5.setPointSize(10);
        date->setFont(font5);
        date->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        time = new QLineEdit(camaign_admin);
        time->setObjectName("time");
        time->setGeometry(QRect(270, 540, 113, 20));
        time->setFont(font5);
        time->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        location = new QLineEdit(camaign_admin);
        location->setObjectName("location");
        location->setGeometry(QRect(270, 580, 241, 20));
        location->setFont(font5);
        location->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        Post = new QPushButton(camaign_admin);
        Post->setObjectName("Post");
        Post->setGeometry(QRect(530, 570, 91, 41));
        QFont font6;
        font6.setPointSize(9);
        font6.setBold(true);
        Post->setFont(font6);
        Post->setCursor(QCursor(Qt::PointingHandCursor));
        Post->setStyleSheet(QString::fromUtf8("*{background-color: rgb(144, 10, 18);\n"
"	color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"#Post:hover{\n"
"background-color: rgb(255, 255, 255);\n"
"	color: rgb(144, 10, 18);}"));
        label_13 = new QLabel(camaign_admin);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(410, 500, 63, 20));
        label_13->setFont(font4);
        motive = new QLineEdit(camaign_admin);
        motive->setObjectName("motive");
        motive->setGeometry(QRect(410, 530, 211, 20));
        motive->setFont(font5);
        motive->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_6 = new QLabel(camaign_admin);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(690, 180, 271, 441));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/campaign.png);"));
        login_2 = new QPushButton(camaign_admin);
        login_2->setObjectName("login_2");
        login_2->setGeometry(QRect(1100, 30, 151, 41));
        login_2->setFont(font);
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
        pushButton_4 = new QPushButton(camaign_admin);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1010, 129, 237, 306));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);\n"
"border-radius:3px;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/donor_day.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(250, 400));
        label->raise();
        label_2->raise();
        label_3->raise();
        home->raise();
        line_2->raise();
        line_3->raise();
        label_7->raise();
        calendarWidget->raise();
        login->raise();
        about->raise();
        my_details_2->raise();
        why->raise();
        my_details_3->raise();
        line_4->raise();
        my_details->raise();
        label_5->raise();
        line->raise();
        label_8->raise();
        label_21->raise();
        line_5->raise();
        label_18->raise();
        label_19->raise();
        label_20->raise();
        label_9->raise();
        label_10->raise();
        label_44->raise();
        label_12->raise();
        date->raise();
        time->raise();
        location->raise();
        Post->raise();
        label_13->raise();
        motive->raise();
        label_6->raise();
        login_2->raise();
        pushButton_4->raise();

        retranslateUi(camaign_admin);

        QMetaObject::connectSlotsByName(camaign_admin);
    } // setupUi

    void retranslateUi(QDialog *camaign_admin)
    {
        camaign_admin->setWindowTitle(QCoreApplication::translate("camaign_admin", "Dialog", nullptr));
        home->setText(QCoreApplication::translate("camaign_admin", "Home", nullptr));
        label_2->setText(QString());
        label->setText(QString());
        label_7->setText(QString());
        login->setText(QCoreApplication::translate("camaign_admin", "Dashboard", nullptr));
        about->setText(QCoreApplication::translate("camaign_admin", "About us", nullptr));
        my_details_2->setText(QCoreApplication::translate("camaign_admin", "Donor\n"
"Requests", nullptr));
        why->setText(QCoreApplication::translate("camaign_admin", "Why become donor", nullptr));
        my_details_3->setText(QCoreApplication::translate("camaign_admin", "Blood\n"
"Requests", nullptr));
        my_details->setText(QCoreApplication::translate("camaign_admin", "User\n"
"Details", nullptr));
        label_3->setText(QString());
        label_5->setText(QString());
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("camaign_admin", "We need to make sure there is the right blood available for patients throughout the year. To do this we run local and national campaigns to encourage: people to sign up as blood donors and start saving lives existing do nors to continue donating to help us keep blood stocks healthy\n"
"", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("camaign_admin", "We need to make sure there is the right blood available for\n"
"patients throughout the year.To do this we run local \n"
"and national campaigns to encourage:\n"
"-people to sign up as blood donors and start saving lives\n"
"-existing donors to continue donating to help us keep\n"
"blood stocks healthy\n"
"", nullptr));
        label_21->setText(QString());
        label_18->setText(QCoreApplication::translate("camaign_admin", "Campaign", nullptr));
        label_19->setText(QCoreApplication::translate("camaign_admin", "Why  Do We Campaign ?", nullptr));
        label_20->setText(QCoreApplication::translate("camaign_admin", "Upcoming Campaign", nullptr));
        label_9->setText(QCoreApplication::translate("camaign_admin", "Time:", nullptr));
        label_10->setText(QCoreApplication::translate("camaign_admin", "Location:", nullptr));
        label_44->setText(QCoreApplication::translate("camaign_admin", "Post about campaign", nullptr));
        label_12->setText(QCoreApplication::translate("camaign_admin", "Date:", nullptr));
        date->setText(QString());
        date->setPlaceholderText(QCoreApplication::translate("camaign_admin", "Enter date", nullptr));
        time->setText(QString());
        time->setPlaceholderText(QCoreApplication::translate("camaign_admin", "Enter time", nullptr));
        location->setText(QString());
        location->setPlaceholderText(QCoreApplication::translate("camaign_admin", "Enter location", nullptr));
        Post->setText(QCoreApplication::translate("camaign_admin", "Post", nullptr));
        label_13->setText(QCoreApplication::translate("camaign_admin", "Motive:", nullptr));
        motive->setText(QString());
        motive->setPlaceholderText(QCoreApplication::translate("camaign_admin", "Enter motive", nullptr));
        label_6->setText(QString());
        login_2->setText(QCoreApplication::translate("camaign_admin", "Logout", nullptr));
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class camaign_admin: public Ui_camaign_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMAIGN_ADMIN_H
