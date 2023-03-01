/********************************************************************************
** Form generated from reading UI file 'user_details.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_DETAILS_H
#define UI_USER_DETAILS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_user_details
{
public:
    QFrame *line_2;
    QPushButton *home;
    QFrame *line_4;
    QCalendarWidget *calendarWidget;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_7;
    QPushButton *about;
    QLabel *label_5;
    QFrame *line_3;
    QLabel *label;
    QLabel *label_3;
    QPushButton *my_details_2;
    QPushButton *login;
    QPushButton *why;
    QPushButton *my_details_3;
    QPushButton *my_details;
    QTableView *tableView;
    QLineEdit *search;
    QPushButton *login_2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *user_details)
    {
        if (user_details->objectName().isEmpty())
            user_details->setObjectName("user_details");
        user_details->resize(1270, 700);
        user_details->setStyleSheet(QString::fromUtf8("background-color:#EFE6E7"));
        line_2 = new QFrame(user_details);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(20, 290, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        home = new QPushButton(user_details);
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
        line_4 = new QFrame(user_details);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(20, 445, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        calendarWidget = new QCalendarWidget(user_details);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1010, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        line = new QFrame(user_details);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 210, 89, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(user_details);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_7 = new QLabel(user_details);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        about = new QPushButton(user_details);
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
        label_5 = new QLabel(user_details);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(35, 140, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        line_3 = new QFrame(user_details);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(20, 370, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label = new QLabel(user_details);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(user_details);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(138, 125, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        my_details_2 = new QPushButton(user_details);
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
        login = new QPushButton(user_details);
        login->setObjectName("login");
        login->setGeometry(QRect(930, 30, 151, 41));
        login->setFont(font);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setStyleSheet(QString::fromUtf8("#login\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#login::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        why = new QPushButton(user_details);
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
        my_details_3 = new QPushButton(user_details);
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
        my_details = new QPushButton(user_details);
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
        tableView = new QTableView(user_details);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(170, 209, 777, 421));
        tableView->setStyleSheet(QString::fromUtf8("border-color: rgb(31, 31, 31);\n"
"background-color: rgb(255, 255, 255);\n"
"border-width : 1.2px;\n"
"border-style:inset;\n"
""));
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);
        search = new QLineEdit(user_details);
        search->setObjectName("search");
        search->setGeometry(QRect(170, 150, 461, 38));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Andale Mono")});
        font2.setPointSize(11);
        search->setFont(font2);
        search->setCursor(QCursor(Qt::IBeamCursor));
        search->setStyleSheet(QString::fromUtf8("background-color: #F1EEEE;;\n"
"color:grey;\n"
"border-radius:15px;\n"
"font-family:Andale Mono;"));
        login_2 = new QPushButton(user_details);
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
        pushButton_4 = new QPushButton(user_details);
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
        line_2->raise();
        home->raise();
        line_4->raise();
        calendarWidget->raise();
        line->raise();
        label_7->raise();
        about->raise();
        label_5->raise();
        line_3->raise();
        label_3->raise();
        my_details_2->raise();
        login->raise();
        why->raise();
        my_details_3->raise();
        my_details->raise();
        tableView->raise();
        search->raise();
        login_2->raise();
        pushButton_4->raise();

        retranslateUi(user_details);

        QMetaObject::connectSlotsByName(user_details);
    } // setupUi

    void retranslateUi(QDialog *user_details)
    {
        user_details->setWindowTitle(QCoreApplication::translate("user_details", "Dialog", nullptr));
        home->setText(QCoreApplication::translate("user_details", "Home", nullptr));
        label_2->setText(QString());
        label_7->setText(QString());
        about->setText(QCoreApplication::translate("user_details", "About us", nullptr));
        label_5->setText(QString());
        label->setText(QString());
        label_3->setText(QString());
        my_details_2->setText(QCoreApplication::translate("user_details", "Donor\n"
"Requests", nullptr));
        login->setText(QCoreApplication::translate("user_details", "Dashboard", nullptr));
        why->setText(QCoreApplication::translate("user_details", "Why become donor", nullptr));
        my_details_3->setText(QCoreApplication::translate("user_details", "Blood\n"
"Requests", nullptr));
        my_details->setText(QCoreApplication::translate("user_details", "User\n"
"Details", nullptr));
        search->setText(QString());
        search->setPlaceholderText(QCoreApplication::translate("user_details", "   Search", nullptr));
        login_2->setText(QCoreApplication::translate("user_details", "Logout", nullptr));
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user_details: public Ui_user_details {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_DETAILS_H
