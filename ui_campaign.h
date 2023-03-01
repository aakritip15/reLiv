/********************************************************************************
** Form generated from reading UI file 'campaign.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMPAIGN_H
#define UI_CAMPAIGN_H

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

class Ui_campaign
{
public:
    QLabel *label_7;
    QPushButton *why;
    QPushButton *home;
    QLabel *label_3;
    QPushButton *about;
    QPushButton *login;
    QLabel *label;
    QFrame *line_5;
    QCalendarWidget *calendarWidget;
    QLabel *label_11;
    QPushButton *why_2;
    QPushButton *home_2;
    QPushButton *about_2;
    QPushButton *login_2;
    QFrame *line_3;
    QPushButton *my_details_4;
    QPushButton *my_details_2;
    QFrame *line_4;
    QPushButton *my_details_3;
    QLabel *label_5;
    QFrame *line;
    QLabel *label_2;
    QFrame *line_2;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_35;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_13;
    QLineEdit *time;
    QLineEdit *date;
    QLabel *label_21;
    QLabel *label_12;
    QLabel *label_6;
    QPushButton *login_3;
    QPushButton *pushButton_4;
    QLineEdit *location;
    QLineEdit *motive;

    void setupUi(QDialog *campaign)
    {
        if (campaign->objectName().isEmpty())
            campaign->setObjectName("campaign");
        campaign->resize(1270, 700);
        campaign->setStyleSheet(QString::fromUtf8("background-color:#EFE6E7;"));
        label_7 = new QLabel(campaign);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        why = new QPushButton(campaign);
        why->setObjectName("why");
        why->setGeometry(QRect(580, 30, 231, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        why->setFont(font);
        why->setCursor(QCursor(Qt::PointingHandCursor));
        why->setStyleSheet(QString::fromUtf8("#why\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#why::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        home = new QPushButton(campaign);
        home->setObjectName("home");
        home->setGeometry(QRect(310, 30, 111, 41));
        home->setFont(font);
        home->setCursor(QCursor(Qt::PointingHandCursor));
        home->setStyleSheet(QString::fromUtf8("#home\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#home::hover{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        label_3 = new QLabel(campaign);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 130, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        about = new QPushButton(campaign);
        about->setObjectName("about");
        about->setGeometry(QRect(440, 30, 111, 41));
        about->setFont(font);
        about->setCursor(QCursor(Qt::PointingHandCursor));
        about->setStyleSheet(QString::fromUtf8("#about\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#about::hover{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        login = new QPushButton(campaign);
        login->setObjectName("login");
        login->setGeometry(QRect(1080, 30, 151, 41));
        login->setFont(font);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setStyleSheet(QString::fromUtf8("#login\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"	color: rgb(255, 255, 255);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"#login::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label = new QLabel(campaign);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        line_5 = new QFrame(campaign);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(140, 160, 845, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        calendarWidget = new QCalendarWidget(campaign);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1007, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_11 = new QLabel(campaign);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(30, 0, 81, 91));
        label_11->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        why_2 = new QPushButton(campaign);
        why_2->setObjectName("why_2");
        why_2->setGeometry(QRect(560, 30, 231, 41));
        why_2->setFont(font);
        why_2->setCursor(QCursor(Qt::PointingHandCursor));
        why_2->setStyleSheet(QString::fromUtf8("#why_2\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#why_2::hover\n"
"{\n"
"border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        home_2 = new QPushButton(campaign);
        home_2->setObjectName("home_2");
        home_2->setGeometry(QRect(300, 30, 121, 41));
        home_2->setFont(font);
        home_2->setCursor(QCursor(Qt::PointingHandCursor));
        home_2->setStyleSheet(QString::fromUtf8("#home_2\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"#home_2:hover\n"
"{\n"
"border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        about_2 = new QPushButton(campaign);
        about_2->setObjectName("about_2");
        about_2->setGeometry(QRect(430, 30, 141, 41));
        about_2->setFont(font);
        about_2->setCursor(QCursor(Qt::PointingHandCursor));
        about_2->setStyleSheet(QString::fromUtf8("#about_2\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#about_2::hover\n"
"{\n"
"border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        login_2 = new QPushButton(campaign);
        login_2->setObjectName("login_2");
        login_2->setGeometry(QRect(930, 30, 151, 41));
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
        line_3 = new QFrame(campaign);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(25, 370, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        my_details_4 = new QPushButton(campaign);
        my_details_4->setObjectName("my_details_4");
        my_details_4->setGeometry(QRect(30, 300, 81, 61));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
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
        my_details_2 = new QPushButton(campaign);
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
        line_4 = new QFrame(campaign);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(25, 445, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        my_details_3 = new QPushButton(campaign);
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
        label_5 = new QLabel(campaign);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 140, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        line = new QFrame(campaign);
        line->setObjectName("line");
        line->setGeometry(QRect(25, 210, 89, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(campaign);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(25, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        line_2 = new QFrame(campaign);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(25, 290, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_19 = new QLabel(campaign);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(170, 180, 301, 31));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        label_19->setFont(font2);
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(144, 10, 18);"));
        label_18 = new QLabel(campaign);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(170, 133, 211, 20));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        label_18->setFont(font3);
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_35 = new QLabel(campaign);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(170, 420, 301, 31));
        label_35->setFont(font2);
        label_35->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(144, 10, 18);"));
        label_8 = new QLabel(campaign);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(170, 240, 521, 161));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_10 = new QLabel(campaign);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(190, 590, 111, 20));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        label_10->setFont(font4);
        label_9 = new QLabel(campaign);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(190, 550, 63, 20));
        label_9->setFont(font4);
        label_13 = new QLabel(campaign);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(410, 510, 63, 20));
        label_13->setFont(font4);
        time = new QLineEdit(campaign);
        time->setObjectName("time");
        time->setGeometry(QRect(270, 550, 113, 20));
        QFont font5;
        font5.setPointSize(10);
        time->setFont(font5);
        time->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        date = new QLineEdit(campaign);
        date->setObjectName("date");
        date->setGeometry(QRect(270, 510, 121, 20));
        date->setFont(font5);
        date->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_21 = new QLabel(campaign);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(170, 480, 451, 151));
        label_21->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_12 = new QLabel(campaign);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(190, 510, 63, 20));
        label_12->setFont(font4);
        label_6 = new QLabel(campaign);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(680, 180, 271, 451));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/campaign.png);"));
        login_3 = new QPushButton(campaign);
        login_3->setObjectName("login_3");
        login_3->setGeometry(QRect(1100, 30, 151, 41));
        login_3->setFont(font);
        login_3->setCursor(QCursor(Qt::PointingHandCursor));
        login_3->setStyleSheet(QString::fromUtf8("#login_3\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#login_3::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        pushButton_4 = new QPushButton(campaign);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1010, 130, 237, 306));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);\n"
"border-radius:3px;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/donor_day.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(250, 400));
        location = new QLineEdit(campaign);
        location->setObjectName("location");
        location->setGeometry(QRect(270, 590, 231, 20));
        location->setFont(font5);
        location->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        motive = new QLineEdit(campaign);
        motive->setObjectName("motive");
        motive->setGeometry(QRect(410, 540, 113, 20));
        motive->setFont(font5);
        motive->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_3->raise();
        label_21->raise();
        label_2->raise();
        label_7->raise();
        why->raise();
        home->raise();
        about->raise();
        login->raise();
        label->raise();
        line_5->raise();
        calendarWidget->raise();
        label_11->raise();
        why_2->raise();
        home_2->raise();
        about_2->raise();
        login_2->raise();
        line_3->raise();
        my_details_4->raise();
        my_details_2->raise();
        line_4->raise();
        my_details_3->raise();
        label_5->raise();
        line->raise();
        line_2->raise();
        label_19->raise();
        label_18->raise();
        label_35->raise();
        label_8->raise();
        label_10->raise();
        label_9->raise();
        label_13->raise();
        time->raise();
        date->raise();
        label_12->raise();
        label_6->raise();
        login_3->raise();
        pushButton_4->raise();
        location->raise();
        motive->raise();

        retranslateUi(campaign);

        QMetaObject::connectSlotsByName(campaign);
    } // setupUi

    void retranslateUi(QDialog *campaign)
    {
        campaign->setWindowTitle(QCoreApplication::translate("campaign", "Dialog", nullptr));
        label_7->setText(QString());
        why->setText(QCoreApplication::translate("campaign", "Why become donor", nullptr));
        home->setText(QCoreApplication::translate("campaign", "Home", nullptr));
        label_3->setText(QString());
        about->setText(QCoreApplication::translate("campaign", "About us", nullptr));
        login->setText(QCoreApplication::translate("campaign", "Profile", nullptr));
        label->setText(QString());
        label_11->setText(QString());
        why_2->setText(QCoreApplication::translate("campaign", "Why become donor", nullptr));
        home_2->setText(QCoreApplication::translate("campaign", "Home", nullptr));
        about_2->setText(QCoreApplication::translate("campaign", "About us", nullptr));
        login_2->setText(QCoreApplication::translate("campaign", "Dashboard", nullptr));
        my_details_4->setText(QCoreApplication::translate("campaign", "Donate\n"
"Blood", nullptr));
        my_details_2->setText(QCoreApplication::translate("campaign", "My\n"
"Details", nullptr));
        my_details_3->setText(QCoreApplication::translate("campaign", "Request\n"
"Blood", nullptr));
        label_5->setText(QString());
        label_2->setText(QString());
        label_19->setText(QCoreApplication::translate("campaign", "Why  Do We Campaign ?", nullptr));
        label_18->setText(QCoreApplication::translate("campaign", "Campaign", nullptr));
        label_35->setText(QCoreApplication::translate("campaign", "Upcoming Campaign", nullptr));
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("campaign", "We need to make sure there is the right blood available for patients throughout the year. To do this we run local and national campaigns to encourage: people to sign up as blood donors and start saving lives existing do nors to continue donating to help us keep blood stocks healthy\n"
"", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("campaign", "We need to make sure there is the right blood available for\n"
"patients throughout the year.To do this we run local \n"
"and national campaigns to encourage:\n"
"-people to sign up as blood donors and start saving lives\n"
"-existing donors to continue donating to help us keep\n"
"blood stocks healthy\n"
"", nullptr));
        label_10->setText(QCoreApplication::translate("campaign", "Location:", nullptr));
        label_9->setText(QCoreApplication::translate("campaign", "Time:", nullptr));
        label_13->setText(QCoreApplication::translate("campaign", "Motive:", nullptr));
        time->setText(QString());
        date->setText(QString());
        label_21->setText(QString());
        label_12->setText(QCoreApplication::translate("campaign", "Date:", nullptr));
        label_6->setText(QString());
        login_3->setText(QCoreApplication::translate("campaign", "Logout", nullptr));
        pushButton_4->setText(QString());
        location->setText(QString());
        motive->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class campaign: public Ui_campaign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMPAIGN_H
