/********************************************************************************
** Form generated from reading UI file 'edit_donor.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_DONOR_H
#define UI_EDIT_DONOR_H

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

class Ui_edit_donor
{
public:
    QLabel *label;
    QPushButton *my_details_2;
    QPushButton *login;
    QLabel *label_2;
    QPushButton *my_details_3;
    QLabel *label_3;
    QLabel *label_5;
    QFrame *line_2;
    QTableView *tableView;
    QFrame *line_3;
    QCalendarWidget *calendarWidget;
    QLabel *label_7;
    QPushButton *home;
    QFrame *line;
    QPushButton *about;
    QPushButton *my_details;
    QPushButton *why;
    QFrame *line_4;
    QPushButton *pushButton;
    QLineEdit *userid;
    QPushButton *login_2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *edit_donor)
    {
        if (edit_donor->objectName().isEmpty())
            edit_donor->setObjectName("edit_donor");
        edit_donor->resize(1270, 700);
        edit_donor->setStyleSheet(QString::fromUtf8("background-color:#EFE6E7;\n"
""));
        label = new QLabel(edit_donor);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        my_details_2 = new QPushButton(edit_donor);
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
"}"));
        login = new QPushButton(edit_donor);
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
        label_2 = new QLabel(edit_donor);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        my_details_3 = new QPushButton(edit_donor);
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
        label_3 = new QLabel(edit_donor);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(138, 125, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_5 = new QLabel(edit_donor);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(35, 140, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        line_2 = new QFrame(edit_donor);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(20, 290, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        tableView = new QTableView(edit_donor);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(170, 160, 777, 471));
        tableView->setStyleSheet(QString::fromUtf8("border-color: rgb(31, 31, 31);\n"
"background-color: rgb(255, 255, 255);\n"
"border-width : 1.2px;\n"
"border-style:inset;\n"
""));
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        line_3 = new QFrame(edit_donor);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(20, 370, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        calendarWidget = new QCalendarWidget(edit_donor);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1010, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label_7 = new QLabel(edit_donor);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        home = new QPushButton(edit_donor);
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
        line = new QFrame(edit_donor);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 210, 89, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        about = new QPushButton(edit_donor);
        about->setObjectName("about");
        about->setGeometry(QRect(400, 30, 151, 41));
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
        my_details = new QPushButton(edit_donor);
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
"\n"
"#my_details::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        why = new QPushButton(edit_donor);
        why->setObjectName("why");
        why->setGeometry(QRect(560, 30, 231, 41));
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
        line_4 = new QFrame(edit_donor);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(20, 445, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(edit_donor);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 580, 151, 29));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("*{background-color: rgb(144, 10, 18);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"#pushButton::hover{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"\n"
"}"));
        userid = new QLineEdit(edit_donor);
        userid->setObjectName("userid");
        userid->setGeometry(QRect(200, 537, 161, 31));
        userid->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color:black;"));
        login_2 = new QPushButton(edit_donor);
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
        pushButton_4 = new QPushButton(edit_donor);
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
        my_details_2->raise();
        login->raise();
        my_details_3->raise();
        label_3->raise();
        label_5->raise();
        line_2->raise();
        tableView->raise();
        line_3->raise();
        calendarWidget->raise();
        label_7->raise();
        home->raise();
        line->raise();
        about->raise();
        my_details->raise();
        why->raise();
        line_4->raise();
        pushButton->raise();
        userid->raise();
        login_2->raise();
        pushButton_4->raise();

        retranslateUi(edit_donor);

        QMetaObject::connectSlotsByName(edit_donor);
    } // setupUi

    void retranslateUi(QDialog *edit_donor)
    {
        edit_donor->setWindowTitle(QCoreApplication::translate("edit_donor", "Dialog", nullptr));
        label->setText(QString());
        my_details_2->setText(QCoreApplication::translate("edit_donor", "Donor\n"
"Requests", nullptr));
        login->setText(QCoreApplication::translate("edit_donor", "Dashboard", nullptr));
        label_2->setText(QString());
        my_details_3->setText(QCoreApplication::translate("edit_donor", "Blood\n"
"Requests", nullptr));
        label_3->setText(QString());
        label_5->setText(QString());
        label_7->setText(QString());
        home->setText(QCoreApplication::translate("edit_donor", "Home", nullptr));
        about->setText(QCoreApplication::translate("edit_donor", "About us", nullptr));
        my_details->setText(QCoreApplication::translate("edit_donor", "User\n"
"Details", nullptr));
        why->setText(QCoreApplication::translate("edit_donor", "Why become donor", nullptr));
        pushButton->setText(QCoreApplication::translate("edit_donor", "Delete", nullptr));
        userid->setPlaceholderText(QCoreApplication::translate("edit_donor", "  Enter Donor ID", nullptr));
        login_2->setText(QCoreApplication::translate("edit_donor", "Logout", nullptr));
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class edit_donor: public Ui_edit_donor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_DONOR_H
