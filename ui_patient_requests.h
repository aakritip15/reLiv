/********************************************************************************
** Form generated from reading UI file 'patient_requests.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENT_REQUESTS_H
#define UI_PATIENT_REQUESTS_H

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

class Ui_patient_requests
{
public:
    QPushButton *my_details;
    QPushButton *about;
    QPushButton *login;
    QLabel *label_3;
    QLabel *label_7;
    QPushButton *why;
    QLabel *label_5;
    QPushButton *my_details_3;
    QFrame *line_3;
    QPushButton *my_details_2;
    QFrame *line_4;
    QFrame *line_2;
    QPushButton *home;
    QLabel *label;
    QLabel *label_2;
    QCalendarWidget *calendarWidget;
    QFrame *line;
    QTableView *tableView;
    QLineEdit *search;
    QPushButton *pushButton;
    QPushButton *login_2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *patient_requests)
    {
        if (patient_requests->objectName().isEmpty())
            patient_requests->setObjectName("patient_requests");
        patient_requests->resize(1270, 700);
        patient_requests->setStyleSheet(QString::fromUtf8("background-color:#EFE6E7;"));
        my_details = new QPushButton(patient_requests);
        my_details->setObjectName("my_details");
        my_details->setGeometry(QRect(25, 220, 81, 61));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        my_details->setFont(font);
        my_details->setCursor(QCursor(Qt::PointingHandCursor));
        my_details->setStyleSheet(QString::fromUtf8("#my_details\n"
"\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"#my_details::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        about = new QPushButton(patient_requests);
        about->setObjectName("about");
        about->setGeometry(QRect(420, 30, 151, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        about->setFont(font1);
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
        login = new QPushButton(patient_requests);
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
"\n"
"#login::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_3 = new QLabel(patient_requests);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(130, 130, 845, 542));
        QFont font2;
        font2.setPointSize(16);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_7 = new QLabel(patient_requests);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        why = new QPushButton(patient_requests);
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
"\n"
"\n"
"#why::hover{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        label_5 = new QLabel(patient_requests);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(35, 140, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        my_details_3 = new QPushButton(patient_requests);
        my_details_3->setObjectName("my_details_3");
        my_details_3->setGeometry(QRect(25, 380, 81, 61));
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
        line_3 = new QFrame(patient_requests);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(20, 370, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        my_details_2 = new QPushButton(patient_requests);
        my_details_2->setObjectName("my_details_2");
        my_details_2->setGeometry(QRect(25, 300, 81, 61));
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
"}"));
        line_4 = new QFrame(patient_requests);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(20, 445, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(patient_requests);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(20, 290, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        home = new QPushButton(patient_requests);
        home->setObjectName("home");
        home->setGeometry(QRect(290, 30, 111, 41));
        home->setFont(font1);
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
        label = new QLabel(patient_requests);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(patient_requests);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        calendarWidget = new QCalendarWidget(patient_requests);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1010, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        line = new QFrame(patient_requests);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 210, 89, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tableView = new QTableView(patient_requests);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(170, 209, 777, 421));
        tableView->setStyleSheet(QString::fromUtf8("border-color: rgb(31, 31, 31);\n"
"background-color: rgb(255, 255, 255);\n"
"border-width : 1.2px;\n"
"border-style:inset;\n"
""));
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        search = new QLineEdit(patient_requests);
        search->setObjectName("search");
        search->setGeometry(QRect(170, 148, 461, 38));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Andale Mono")});
        font3.setPointSize(11);
        search->setFont(font3);
        search->setCursor(QCursor(Qt::IBeamCursor));
        search->setStyleSheet(QString::fromUtf8("background-color: #F1EEEE;;\n"
"color:grey;\n"
"border-radius:15px;\n"
"font-family:Andale Mono;"));
        pushButton = new QPushButton(patient_requests);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(840, 150, 101, 38));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("*{background-color: rgb(144, 10, 18);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:10px;}\n"
"\n"
"#pushButton::hoever\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(144, 10, 18);\n"
"}\n"
""));
        login_2 = new QPushButton(patient_requests);
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
"#login2::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        pushButton_4 = new QPushButton(patient_requests);
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
        my_details->raise();
        about->raise();
        login->raise();
        label_3->raise();
        label_7->raise();
        why->raise();
        label_5->raise();
        my_details_3->raise();
        line_3->raise();
        my_details_2->raise();
        line_4->raise();
        line_2->raise();
        home->raise();
        calendarWidget->raise();
        line->raise();
        tableView->raise();
        search->raise();
        pushButton->raise();
        login_2->raise();
        pushButton_4->raise();

        retranslateUi(patient_requests);

        QMetaObject::connectSlotsByName(patient_requests);
    } // setupUi

    void retranslateUi(QDialog *patient_requests)
    {
        patient_requests->setWindowTitle(QCoreApplication::translate("patient_requests", "Dialog", nullptr));
        my_details->setText(QCoreApplication::translate("patient_requests", "User\n"
"Details", nullptr));
        about->setText(QCoreApplication::translate("patient_requests", "About us", nullptr));
        login->setText(QCoreApplication::translate("patient_requests", "Dashboard", nullptr));
        label_3->setText(QString());
        label_7->setText(QString());
        why->setText(QCoreApplication::translate("patient_requests", "Why become donor", nullptr));
        label_5->setText(QString());
        my_details_3->setText(QCoreApplication::translate("patient_requests", "Blood\n"
"Requests", nullptr));
        my_details_2->setText(QCoreApplication::translate("patient_requests", "Donor\n"
"Requests", nullptr));
        home->setText(QCoreApplication::translate("patient_requests", "Home", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        search->setText(QString());
        search->setPlaceholderText(QCoreApplication::translate("patient_requests", "   Search", nullptr));
        pushButton->setText(QCoreApplication::translate("patient_requests", "Edit", nullptr));
        login_2->setText(QCoreApplication::translate("patient_requests", "Logout", nullptr));
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class patient_requests: public Ui_patient_requests {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENT_REQUESTS_H
