/********************************************************************************
** Form generated from reading UI file 'userdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDASHBOARD_H
#define UI_USERDASHBOARD_H

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

class Ui_userDashboard
{
public:
    QLabel *label_41;
    QPushButton *about;
    QLabel *label_54;
    QLabel *label_37;
    QLabel *label_44;
    QFrame *line_5;
    QLabel *label_6;
    QPushButton *why;
    QPushButton *my_details;
    QLabel *label_52;
    QLabel *label_16;
    QLabel *label_11;
    QLabel *label_33;
    QLabel *label_42;
    QPushButton *my_details_3;
    QLabel *label_46;
    QLabel *label_39;
    QLabel *label_47;
    QLabel *label_13;
    QLabel *label_5;
    QLabel *label_7;
    QFrame *line_4;
    QLabel *label_53;
    QLabel *label;
    QLabel *label_51;
    QFrame *line_3;
    QLabel *label_8;
    QLabel *label_43;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *label_3;
    QLabel *label_14;
    QLabel *label_40;
    QLabel *label_45;
    QLabel *label_18;
    QFrame *line_2;
    QFrame *line;
    QLabel *label_15;
    QPushButton *login;
    QCalendarWidget *calendarWidget;
    QLabel *label_48;
    QLabel *label_17;
    QLabel *label_36;
    QLabel *label_10;
    QLabel *label_34;
    QLabel *label_49;
    QPushButton *home;
    QLabel *label_38;
    QLabel *label_50;
    QLabel *label_2;
    QPushButton *my_details_2;
    QLabel *label_19;
    QLabel *label_35;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *login_2;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_55;
    QLabel *label_57;
    QLabel *label_60;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_4;

    void setupUi(QDialog *userDashboard)
    {
        if (userDashboard->objectName().isEmpty())
            userDashboard->setObjectName("userDashboard");
        userDashboard->resize(1270, 700);
        userDashboard->setStyleSheet(QString::fromUtf8("background-color: #EFE6E7"));
        label_41 = new QLabel(userDashboard);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(680, 230, 63, 61));
        label_41->setCursor(QCursor(Qt::ArrowCursor));
        label_41->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        about = new QPushButton(userDashboard);
        about->setObjectName("about");
        about->setGeometry(QRect(430, 30, 111, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
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
        label_54 = new QLabel(userDashboard);
        label_54->setObjectName("label_54");
        label_54->setGeometry(QRect(790, 500, 141, 51));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label_54->setFont(font1);
        label_37 = new QLabel(userDashboard);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(480, 340, 63, 61));
        label_37->setCursor(QCursor(Qt::ArrowCursor));
        label_37->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        label_44 = new QLabel(userDashboard);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(640, 340, 41, 51));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        label_44->setFont(font2);
        label_44->setCursor(QCursor(Qt::ArrowCursor));
        line_5 = new QFrame(userDashboard);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(138, 160, 845, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(userDashboard);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(160, 220, 178, 80));
        label_6->setCursor(QCursor(Qt::ArrowCursor));
        label_6->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        why = new QPushButton(userDashboard);
        why->setObjectName("why");
        why->setGeometry(QRect(570, 30, 231, 41));
        why->setFont(font);
        why->setCursor(QCursor(Qt::PointingHandCursor));
        why->setStyleSheet(QString::fromUtf8("#why\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#why::hover{\n"
"border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        my_details = new QPushButton(userDashboard);
        my_details->setObjectName("my_details");
        my_details->setGeometry(QRect(30, 220, 81, 61));
        my_details->setFont(font1);
        my_details->setCursor(QCursor(Qt::PointingHandCursor));
        my_details->setStyleSheet(QString::fromUtf8("#my_details\n"
"\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"#my_details::hover{\n"
"border-botton:3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        label_52 = new QLabel(userDashboard);
        label_52->setObjectName("label_52");
        label_52->setGeometry(QRect(250, 490, 161, 111));
        label_52->setFont(font1);
        label_16 = new QLabel(userDashboard);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(430, 460, 253, 175));
        label_16->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_11 = new QLabel(userDashboard);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(365, 330, 178, 80));
        label_11->setCursor(QCursor(Qt::ArrowCursor));
        label_11->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        label_33 = new QLabel(userDashboard);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(270, 230, 63, 61));
        label_33->setCursor(QCursor(Qt::ArrowCursor));
        label_33->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        label_42 = new QLabel(userDashboard);
        label_42->setObjectName("label_42");
        label_42->setGeometry(QRect(640, 230, 41, 51));
        label_42->setFont(font2);
        label_42->setCursor(QCursor(Qt::ArrowCursor));
        my_details_3 = new QPushButton(userDashboard);
        my_details_3->setObjectName("my_details_3");
        my_details_3->setGeometry(QRect(30, 380, 81, 61));
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
        label_46 = new QLabel(userDashboard);
        label_46->setObjectName("label_46");
        label_46->setGeometry(QRect(830, 230, 66, 51));
        label_46->setFont(font2);
        label_46->setCursor(QCursor(Qt::ArrowCursor));
        label_39 = new QLabel(userDashboard);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(480, 230, 63, 61));
        label_39->setCursor(QCursor(Qt::ArrowCursor));
        label_39->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        label_47 = new QLabel(userDashboard);
        label_47->setObjectName("label_47");
        label_47->setGeometry(QRect(890, 340, 63, 61));
        label_47->setCursor(QCursor(Qt::ArrowCursor));
        label_47->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        label_13 = new QLabel(userDashboard);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(775, 220, 178, 80));
        label_13->setCursor(QCursor(Qt::ArrowCursor));
        label_13->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        label_5 = new QLabel(userDashboard);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 140, 63, 61));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        label_7 = new QLabel(userDashboard);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        line_4 = new QFrame(userDashboard);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(25, 445, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_53 = new QLabel(userDashboard);
        label_53->setObjectName("label_53");
        label_53->setGeometry(QRect(550, 500, 111, 51));
        label_53->setFont(font1);
        label = new QLabel(userDashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_51 = new QLabel(userDashboard);
        label_51->setObjectName("label_51");
        label_51->setGeometry(QRect(730, 500, 51, 51));
        label_51->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/announcement.png);"));
        line_3 = new QFrame(userDashboard);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(25, 370, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(userDashboard);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(365, 220, 178, 80));
        label_8->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        label_43 = new QLabel(userDashboard);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(680, 340, 63, 61));
        label_43->setCursor(QCursor(Qt::ArrowCursor));
        label_43->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        label_12 = new QLabel(userDashboard);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(160, 330, 178, 80));
        label_12->setCursor(QCursor(Qt::ArrowCursor));
        label_12->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        label_9 = new QLabel(userDashboard);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(775, 330, 178, 80));
        label_9->setCursor(QCursor(Qt::ArrowCursor));
        label_9->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        label_3 = new QLabel(userDashboard);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(138, 125, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_14 = new QLabel(userDashboard);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(570, 220, 178, 80));
        label_14->setCursor(QCursor(Qt::ArrowCursor));
        label_14->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        label_40 = new QLabel(userDashboard);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(440, 230, 41, 51));
        label_40->setFont(font2);
        label_40->setCursor(QCursor(Qt::ArrowCursor));
        label_45 = new QLabel(userDashboard);
        label_45->setObjectName("label_45");
        label_45->setGeometry(QRect(890, 230, 63, 61));
        label_45->setCursor(QCursor(Qt::ArrowCursor));
        label_45->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        label_18 = new QLabel(userDashboard);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(160, 131, 211, 20));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        line_2 = new QFrame(userDashboard);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(25, 290, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(userDashboard);
        line->setObjectName("line");
        line->setGeometry(QRect(25, 210, 89, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_15 = new QLabel(userDashboard);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(160, 460, 253, 175));
        label_15->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        login = new QPushButton(userDashboard);
        login->setObjectName("login");
        login->setGeometry(QRect(930, 30, 151, 41));
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
        calendarWidget = new QCalendarWidget(userDashboard);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1010, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_48 = new QLabel(userDashboard);
        label_48->setObjectName("label_48");
        label_48->setGeometry(QRect(830, 340, 61, 51));
        label_48->setFont(font2);
        label_48->setCursor(QCursor(Qt::ArrowCursor));
        label_17 = new QLabel(userDashboard);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(700, 460, 253, 175));
        label_17->setCursor(QCursor(Qt::ArrowCursor));
        label_17->setStyleSheet(QString::fromUtf8("border-radius:5px;"));
        label_36 = new QLabel(userDashboard);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(230, 340, 41, 51));
        label_36->setFont(font2);
        label_36->setCursor(QCursor(Qt::ArrowCursor));
        label_10 = new QLabel(userDashboard);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(570, 330, 178, 80));
        label_10->setCursor(QCursor(Qt::ArrowCursor));
        label_10->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-radius:5px;"));
        label_34 = new QLabel(userDashboard);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(230, 230, 41, 51));
        label_34->setFont(font2);
        label_34->setCursor(QCursor(Qt::ArrowCursor));
        label_49 = new QLabel(userDashboard);
        label_49->setObjectName("label_49");
        label_49->setGeometry(QRect(180, 520, 53, 52));
        label_49->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/Donor.png);"));
        home = new QPushButton(userDashboard);
        home->setObjectName("home");
        home->setGeometry(QRect(300, 30, 111, 41));
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
        label_38 = new QLabel(userDashboard);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(440, 340, 41, 51));
        label_38->setFont(font2);
        label_38->setCursor(QCursor(Qt::ArrowCursor));
        label_50 = new QLabel(userDashboard);
        label_50->setObjectName("label_50");
        label_50->setGeometry(QRect(470, 500, 51, 51));
        label_50->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/camp.png);"));
        label_2 = new QLabel(userDashboard);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(25, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        my_details_2 = new QPushButton(userDashboard);
        my_details_2->setObjectName("my_details_2");
        my_details_2->setGeometry(QRect(30, 300, 81, 61));
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
        label_19 = new QLabel(userDashboard);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(160, 170, 351, 31));
        label_19->setFont(font1);
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_35 = new QLabel(userDashboard);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(270, 340, 63, 61));
        label_35->setCursor(QCursor(Qt::ArrowCursor));
        label_35->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_drop.png);"));
        pushButton = new QPushButton(userDashboard);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(430, 580, 253, 58));
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{border-radius:5px;\n"
"background-color: #E6E6E6;}\n"
"\n"
"#pushButton::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        pushButton_2 = new QPushButton(userDashboard);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(700, 580, 253, 58));
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2{border-radius:5px;\n"
"background-color: #E6E6E6;}\n"
"\n"
"#pushButton_2::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        login_2 = new QPushButton(userDashboard);
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
        label_20 = new QLabel(userDashboard);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(170, 250, 51, 20));
        label_21 = new QLabel(userDashboard);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(380, 250, 51, 20));
        label_22 = new QLabel(userDashboard);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(585, 250, 51, 20));
        label_55 = new QLabel(userDashboard);
        label_55->setObjectName("label_55");
        label_55->setGeometry(QRect(780, 250, 48, 20));
        label_57 = new QLabel(userDashboard);
        label_57->setObjectName("label_57");
        label_57->setGeometry(QRect(780, 358, 51, 20));
        label_60 = new QLabel(userDashboard);
        label_60->setObjectName("label_60");
        label_60->setGeometry(QRect(380, 358, 51, 20));
        lineEdit = new QLineEdit(userDashboard);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(170, 240, 51, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: rgb(144, 10, 18);"));
        lineEdit_2 = new QLineEdit(userDashboard);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(380, 350, 51, 28));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: rgb(144, 10, 18);"));
        lineEdit_3 = new QLineEdit(userDashboard);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(580, 350, 51, 28));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: rgb(144, 10, 18);"));
        lineEdit_4 = new QLineEdit(userDashboard);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(170, 350, 51, 28));
        lineEdit_4->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: rgb(144, 10, 18);"));
        lineEdit_5 = new QLineEdit(userDashboard);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(580, 240, 51, 28));
        lineEdit_5->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: rgb(144, 10, 18);"));
        lineEdit_6 = new QLineEdit(userDashboard);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(380, 240, 51, 28));
        lineEdit_6->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: rgb(144, 10, 18);"));
        lineEdit_7 = new QLineEdit(userDashboard);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(780, 350, 51, 28));
        lineEdit_7->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: rgb(144, 10, 18);"));
        lineEdit_8 = new QLineEdit(userDashboard);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(780, 240, 51, 28));
        lineEdit_8->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: rgb(144, 10, 18);"));
        pushButton_4 = new QPushButton(userDashboard);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1010, 130, 237, 306));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);\n"
"border-radius:3px;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/donor_day.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(250, 400));
        label->raise();
        label_3->raise();
        label_17->raise();
        label_15->raise();
        label_13->raise();
        label_10->raise();
        label_9->raise();
        label_8->raise();
        label_11->raise();
        label_14->raise();
        label_2->raise();
        label_41->raise();
        about->raise();
        label_54->raise();
        label_37->raise();
        label_44->raise();
        line_5->raise();
        label_6->raise();
        why->raise();
        my_details->raise();
        label_52->raise();
        label_16->raise();
        label_33->raise();
        label_42->raise();
        my_details_3->raise();
        label_46->raise();
        label_39->raise();
        label_47->raise();
        label_5->raise();
        label_7->raise();
        line_4->raise();
        label_53->raise();
        label_51->raise();
        line_3->raise();
        label_43->raise();
        label_12->raise();
        label_40->raise();
        label_45->raise();
        label_18->raise();
        line_2->raise();
        line->raise();
        login->raise();
        calendarWidget->raise();
        label_48->raise();
        label_36->raise();
        label_34->raise();
        label_49->raise();
        home->raise();
        label_38->raise();
        label_50->raise();
        my_details_2->raise();
        label_19->raise();
        label_35->raise();
        pushButton->raise();
        pushButton_2->raise();
        login_2->raise();
        label_20->raise();
        label_21->raise();
        label_22->raise();
        label_55->raise();
        label_57->raise();
        label_60->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        lineEdit_5->raise();
        lineEdit_6->raise();
        lineEdit_7->raise();
        lineEdit_8->raise();
        pushButton_4->raise();

        retranslateUi(userDashboard);

        QMetaObject::connectSlotsByName(userDashboard);
    } // setupUi

    void retranslateUi(QDialog *userDashboard)
    {
        userDashboard->setWindowTitle(QCoreApplication::translate("userDashboard", "Dialog", nullptr));
        label_41->setText(QString());
        about->setText(QCoreApplication::translate("userDashboard", "About us", nullptr));
        label_54->setText(QCoreApplication::translate("userDashboard", "Emergency\n"
"Requests", nullptr));
        label_37->setText(QString());
        label_44->setText(QCoreApplication::translate("userDashboard", "O-", nullptr));
        label_6->setText(QString());
        why->setText(QCoreApplication::translate("userDashboard", "Why become donor", nullptr));
        my_details->setText(QCoreApplication::translate("userDashboard", "My\n"
"Details", nullptr));
        label_52->setText(QCoreApplication::translate("userDashboard", "Donate blood and \n"
"gift someone a \n"
"precious life.", nullptr));
        label_16->setText(QString());
        label_11->setText(QString());
        label_33->setText(QString());
        label_42->setText(QCoreApplication::translate("userDashboard", "O+", nullptr));
        my_details_3->setText(QCoreApplication::translate("userDashboard", "Request\n"
"Blood", nullptr));
        label_46->setText(QCoreApplication::translate("userDashboard", "AB+", nullptr));
        label_39->setText(QString());
        label_47->setText(QString());
        label_13->setText(QString());
        label_5->setText(QString());
        label_7->setText(QString());
        label_53->setText(QCoreApplication::translate("userDashboard", "Campaign\n"
"Available", nullptr));
        label->setText(QString());
        label_51->setText(QString());
        label_8->setText(QString());
        label_43->setText(QString());
        label_12->setText(QString());
        label_9->setText(QString());
        label_3->setText(QString());
        label_14->setText(QString());
        label_40->setText(QCoreApplication::translate("userDashboard", "B+", nullptr));
        label_45->setText(QString());
        label_18->setText(QCoreApplication::translate("userDashboard", "Welcome back!!", nullptr));
        label_15->setText(QString());
        login->setText(QCoreApplication::translate("userDashboard", "Dashboard", nullptr));
        label_48->setText(QCoreApplication::translate("userDashboard", "AB-", nullptr));
        label_17->setText(QString());
        label_36->setText(QCoreApplication::translate("userDashboard", "A-", nullptr));
        label_10->setText(QString());
        label_34->setText(QCoreApplication::translate("userDashboard", "A+", nullptr));
        label_49->setText(QString());
        home->setText(QCoreApplication::translate("userDashboard", "Home", nullptr));
        label_38->setText(QCoreApplication::translate("userDashboard", "B-", nullptr));
        label_50->setText(QString());
        label_2->setText(QString());
        my_details_2->setText(QCoreApplication::translate("userDashboard", "Donate\n"
"Blood", nullptr));
        label_19->setText(QCoreApplication::translate("userDashboard", "Available blood groups in litre", nullptr));
        label_35->setText(QString());
        pushButton->setText(QCoreApplication::translate("userDashboard", "      View Details", nullptr));
        pushButton_2->setText(QCoreApplication::translate("userDashboard", "      View Details", nullptr));
        login_2->setText(QCoreApplication::translate("userDashboard", "Logout ", nullptr));
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_55->setText(QString());
        label_57->setText(QString());
        label_60->setText(QString());
        lineEdit->setText(QCoreApplication::translate("userDashboard", "1 unit", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("userDashboard", "1 unit", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("userDashboard", "1 unit", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("userDashboard", "3 units", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("userDashboard", "5 units", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("userDashboard", "2 units", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("userDashboard", "0 units", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("userDashboard", "3 units", nullptr));
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class userDashboard: public Ui_userDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDASHBOARD_H
