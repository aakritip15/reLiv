/********************************************************************************
** Form generated from reading UI file 'donor_request.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONOR_REQUEST_H
#define UI_DONOR_REQUEST_H

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

class Ui_donor_request
{
public:
    QLabel *label_5;
    QFrame *line_3;
    QFrame *line;
    QLabel *label;
    QLabel *label_3;
    QPushButton *my_details_2;
    QPushButton *my_details_3;
    QPushButton *login;
    QFrame *line_4;
    QLabel *label_7;
    QCalendarWidget *calendarWidget;
    QPushButton *why;
    QPushButton *my_details;
    QPushButton *home;
    QPushButton *about;
    QLabel *label_2;
    QFrame *line_2;
    QTableView *tableView;
    QLineEdit *search;
    QPushButton *pushButton;
    QPushButton *login_2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *donor_request)
    {
        if (donor_request->objectName().isEmpty())
            donor_request->setObjectName("donor_request");
        donor_request->resize(1270, 700);
        donor_request->setStyleSheet(QString::fromUtf8("background-color:#EFE6E7;"));
        label_5 = new QLabel(donor_request);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(35, 140, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        line_3 = new QFrame(donor_request);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(20, 370, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line = new QFrame(donor_request);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 210, 89, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(donor_request);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(donor_request);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(138, 125, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        my_details_2 = new QPushButton(donor_request);
        my_details_2->setObjectName("my_details_2");
        my_details_2->setGeometry(QRect(25, 300, 81, 61));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        my_details_2->setFont(font);
        my_details_2->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_2->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"\n"
"#my_details_2::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}\n"
""));
        my_details_3 = new QPushButton(donor_request);
        my_details_3->setObjectName("my_details_3");
        my_details_3->setGeometry(QRect(25, 380, 81, 61));
        my_details_3->setFont(font);
        my_details_3->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_3->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"#my_details_3::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        login = new QPushButton(donor_request);
        login->setObjectName("login");
        login->setGeometry(QRect(930, 30, 151, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        login->setFont(font1);
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
        line_4 = new QFrame(donor_request);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(20, 445, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(donor_request);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        calendarWidget = new QCalendarWidget(donor_request);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1010, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        why = new QPushButton(donor_request);
        why->setObjectName("why");
        why->setGeometry(QRect(550, 30, 231, 41));
        why->setFont(font1);
        why->setCursor(QCursor(Qt::PointingHandCursor));
        why->setStyleSheet(QString::fromUtf8("#why\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"#why::hover\n"
"{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        my_details = new QPushButton(donor_request);
        my_details->setObjectName("my_details");
        my_details->setGeometry(QRect(25, 220, 81, 61));
        my_details->setFont(font);
        my_details->setCursor(QCursor(Qt::PointingHandCursor));
        my_details->setStyleSheet(QString::fromUtf8("#my_details\n"
"\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"#my_details::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        home = new QPushButton(donor_request);
        home->setObjectName("home");
        home->setGeometry(QRect(270, 30, 111, 41));
        home->setFont(font1);
        home->setCursor(QCursor(Qt::PointingHandCursor));
        home->setStyleSheet(QString::fromUtf8("#home\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"#home::hover\n"
"{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        about = new QPushButton(donor_request);
        about->setObjectName("about");
        about->setGeometry(QRect(410, 30, 111, 41));
        about->setFont(font1);
        about->setCursor(QCursor(Qt::PointingHandCursor));
        about->setStyleSheet(QString::fromUtf8("#about\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"#about::hover\n"
"{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        label_2 = new QLabel(donor_request);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        line_2 = new QFrame(donor_request);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(20, 290, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        tableView = new QTableView(donor_request);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(170, 209, 777, 431));
        tableView->setStyleSheet(QString::fromUtf8("border-color: rgb(31, 31, 31);\n"
"background-color: rgb(255, 255, 255);\n"
"border-width : 1.2px;\n"
"border-style:inset;\n"
""));
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);
        search = new QLineEdit(donor_request);
        search->setObjectName("search");
        search->setGeometry(QRect(170, 148, 461, 38));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Andale Mono")});
        font2.setPointSize(11);
        search->setFont(font2);
        search->setCursor(QCursor(Qt::IBeamCursor));
        search->setStyleSheet(QString::fromUtf8("background-color: #F1EEEE;;\n"
"color:grey;\n"
"border-radius:15px;\n"
"font-family:Andale Mono;"));
        pushButton = new QPushButton(donor_request);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(840, 148, 101, 38));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{background-color: rgb(144, 10, 18);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"}\n"
"\n"
"#pushButton::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        login_2 = new QPushButton(donor_request);
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
        pushButton_4 = new QPushButton(donor_request);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1010, 130, 237, 307));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);\n"
"border-radius:3px;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/donor_day.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(250, 400));
        label_3->raise();
        label_2->raise();
        label_5->raise();
        line_3->raise();
        line->raise();
        label->raise();
        my_details_2->raise();
        my_details_3->raise();
        login->raise();
        line_4->raise();
        label_7->raise();
        calendarWidget->raise();
        why->raise();
        my_details->raise();
        home->raise();
        about->raise();
        line_2->raise();
        tableView->raise();
        search->raise();
        pushButton->raise();
        login_2->raise();
        pushButton_4->raise();

        retranslateUi(donor_request);

        QMetaObject::connectSlotsByName(donor_request);
    } // setupUi

    void retranslateUi(QDialog *donor_request)
    {
        donor_request->setWindowTitle(QCoreApplication::translate("donor_request", "Dialog", nullptr));
        label_5->setText(QString());
        label->setText(QString());
        label_3->setText(QString());
        my_details_2->setText(QCoreApplication::translate("donor_request", "Donor\n"
"Requests", nullptr));
        my_details_3->setText(QCoreApplication::translate("donor_request", "Blood\n"
"Requests", nullptr));
        login->setText(QCoreApplication::translate("donor_request", "Dashboard", nullptr));
        label_7->setText(QString());
        why->setText(QCoreApplication::translate("donor_request", "Why become donor", nullptr));
        my_details->setText(QCoreApplication::translate("donor_request", "User\n"
"Details", nullptr));
        home->setText(QCoreApplication::translate("donor_request", "Home", nullptr));
        about->setText(QCoreApplication::translate("donor_request", "About us", nullptr));
        label_2->setText(QString());
        search->setText(QString());
        search->setPlaceholderText(QCoreApplication::translate("donor_request", "   Search", nullptr));
        pushButton->setText(QCoreApplication::translate("donor_request", "Edit", nullptr));
        login_2->setText(QCoreApplication::translate("donor_request", "Logout", nullptr));
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class donor_request: public Ui_donor_request {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONOR_REQUEST_H
