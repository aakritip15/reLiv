/********************************************************************************
** Form generated from reading UI file 'emergencyrequest_patient.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMERGENCYREQUEST_PATIENT_H
#define UI_EMERGENCYREQUEST_PATIENT_H

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

class Ui_emergencyRequest_patient
{
public:
    QLineEdit *age;
    QLineEdit *lineEdit_5;
    QLabel *label_3;
    QPushButton *about;
    QLabel *label_5;
    QPushButton *my_details_2;
    QLabel *label_7;
    QPushButton *home;
    QPushButton *why;
    QPushButton *my_details;
    QPushButton *login;
    QFrame *line;
    QLabel *label_2;
    QLabel *label;
    QFrame *line_5;
    QFrame *line_4;
    QFrame *line_3;
    QFrame *line_2;
    QCalendarWidget *calendarWidget;
    QPushButton *my_details_3;
    QTableView *tableView;
    QLineEdit *search;
    QLabel *label_19;
    QPushButton *pushButton;
    QLabel *label_4;
    QPushButton *login_2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *emergencyRequest_patient)
    {
        if (emergencyRequest_patient->objectName().isEmpty())
            emergencyRequest_patient->setObjectName("emergencyRequest_patient");
        emergencyRequest_patient->resize(1270, 700);
        emergencyRequest_patient->setStyleSheet(QString::fromUtf8("background-color:#EFE6E7;"));
        age = new QLineEdit(emergencyRequest_patient);
        age->setObjectName("age");
        age->setGeometry(QRect(575, 330, 91, 50));
        age->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"}"));
        lineEdit_5 = new QLineEdit(emergencyRequest_patient);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(685, 330, 121, 50));
        lineEdit_5->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#F1EEEE;\n"
"\n"
"}"));
        label_3 = new QLabel(emergencyRequest_patient);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(143, 125, 845, 542));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        about = new QPushButton(emergencyRequest_patient);
        about->setObjectName("about");
        about->setGeometry(QRect(435, 30, 121, 41));
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
"#about::hover\n"
"{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        label_5 = new QLabel(emergencyRequest_patient);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 130, 63, 61));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/Profile.png);"));
        my_details_2 = new QPushButton(emergencyRequest_patient);
        my_details_2->setObjectName("my_details_2");
        my_details_2->setGeometry(QRect(30, 290, 81, 61));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        my_details_2->setFont(font1);
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
        label_7 = new QLabel(emergencyRequest_patient);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 0, 81, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"border-image: url(:/img/Images/logo1.png);"));
        home = new QPushButton(emergencyRequest_patient);
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
"#home::hover\n"
"{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        why = new QPushButton(emergencyRequest_patient);
        why->setObjectName("why");
        why->setGeometry(QRect(580, 30, 221, 41));
        why->setFont(font);
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
        my_details = new QPushButton(emergencyRequest_patient);
        my_details->setObjectName("my_details");
        my_details->setGeometry(QRect(30, 210, 81, 61));
        my_details->setFont(font1);
        my_details->setCursor(QCursor(Qt::PointingHandCursor));
        my_details->setStyleSheet(QString::fromUtf8("#my_details\n"
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
        login = new QPushButton(emergencyRequest_patient);
        login->setObjectName("login");
        login->setGeometry(QRect(930, 30, 151, 41));
        login->setFont(font);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setStyleSheet(QString::fromUtf8("#login\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"border-radius:20px;\n"
"color:rgb(255, 255, 255)\n"
"}\n"
"\n"
"#login::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        line = new QFrame(emergencyRequest_patient);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 99, 1280, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(emergencyRequest_patient);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(25, 125, 89, 540));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        label = new QLabel(emergencyRequest_patient);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 99));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        line_5 = new QFrame(emergencyRequest_patient);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(25, 200, 89, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(emergencyRequest_patient);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(25, 435, 89, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(emergencyRequest_patient);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(25, 360, 89, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(emergencyRequest_patient);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(25, 280, 89, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        calendarWidget = new QCalendarWidget(emergencyRequest_patient);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(1015, 450, 237, 219));
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 9pt \"Segoe UI\";\n"
"border-radius:5px;"));
        my_details_3 = new QPushButton(emergencyRequest_patient);
        my_details_3->setObjectName("my_details_3");
        my_details_3->setGeometry(QRect(30, 370, 81, 61));
        my_details_3->setFont(font1);
        my_details_3->setCursor(QCursor(Qt::PointingHandCursor));
        my_details_3->setStyleSheet(QString::fromUtf8("*{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"#my_details_3::hover\n"
"{\n"
"\n"
"	color: rgb(144, 10, 18);\n"
"}\n"
""));
        tableView = new QTableView(emergencyRequest_patient);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(180, 211, 411, 311));
        tableView->setStyleSheet(QString::fromUtf8("border-color: rgb(31, 31, 31);\n"
"background-color: rgb(255, 255, 255);\n"
"border-width : 1.2px;\n"
"border-style:inset;\n"
""));
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        search = new QLineEdit(emergencyRequest_patient);
        search->setObjectName("search");
        search->setGeometry(QRect(180, 150, 411, 38));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Andale Mono")});
        font2.setPointSize(11);
        search->setFont(font2);
        search->setCursor(QCursor(Qt::IBeamCursor));
        search->setStyleSheet(QString::fromUtf8("background-color: #F1EEEE;;\n"
"color:grey;\n"
"border-radius:15px;\n"
"font-family:Andale Mono;"));
        label_19 = new QLabel(emergencyRequest_patient);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(190, 560, 301, 31));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        label_19->setFont(font3);
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(144, 10, 18);"));
        pushButton = new QPushButton(emergencyRequest_patient);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(500, 560, 91, 31));
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("*{background-color: rgb(144, 10, 18);\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;}\n"
"\n"
"#pushButton:hover{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_4 = new QLabel(emergencyRequest_patient);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(640, 150, 321, 481));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/emergency.png);\n"
"background-image:no-repeat;"));
        login_2 = new QPushButton(emergencyRequest_patient);
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
        pushButton_4 = new QPushButton(emergencyRequest_patient);
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
        age->raise();
        lineEdit_5->raise();
        label_3->raise();
        about->raise();
        label_5->raise();
        my_details_2->raise();
        label_7->raise();
        home->raise();
        why->raise();
        my_details->raise();
        login->raise();
        line->raise();
        line_5->raise();
        line_4->raise();
        line_3->raise();
        line_2->raise();
        calendarWidget->raise();
        my_details_3->raise();
        tableView->raise();
        search->raise();
        label_19->raise();
        pushButton->raise();
        label_4->raise();
        login_2->raise();
        pushButton_4->raise();

        retranslateUi(emergencyRequest_patient);

        QMetaObject::connectSlotsByName(emergencyRequest_patient);
    } // setupUi

    void retranslateUi(QDialog *emergencyRequest_patient)
    {
        emergencyRequest_patient->setWindowTitle(QCoreApplication::translate("emergencyRequest_patient", "Dialog", nullptr));
        age->setText(QString());
        age->setPlaceholderText(QCoreApplication::translate("emergencyRequest_patient", "     Age  ", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("emergencyRequest_patient", "   Blood Group", nullptr));
        label_3->setText(QString());
        about->setText(QCoreApplication::translate("emergencyRequest_patient", "About us", nullptr));
        label_5->setText(QString());
        my_details_2->setText(QCoreApplication::translate("emergencyRequest_patient", "Donate\n"
"Blood", nullptr));
        label_7->setText(QString());
        home->setText(QCoreApplication::translate("emergencyRequest_patient", "Home", nullptr));
        why->setText(QCoreApplication::translate("emergencyRequest_patient", "Why become donor", nullptr));
        my_details->setText(QCoreApplication::translate("emergencyRequest_patient", "My\n"
"Details", nullptr));
        login->setText(QCoreApplication::translate("emergencyRequest_patient", "Dashboard", nullptr));
        label_2->setText(QString());
        label->setText(QString());
        my_details_3->setText(QCoreApplication::translate("emergencyRequest_patient", "Request\n"
"Blood", nullptr));
        search->setText(QString());
        search->setPlaceholderText(QCoreApplication::translate("emergencyRequest_patient", "   Search", nullptr));
        label_19->setText(QCoreApplication::translate("emergencyRequest_patient", "Ready to Donate ?", nullptr));
        pushButton->setText(QCoreApplication::translate("emergencyRequest_patient", "Yes", nullptr));
        label_4->setText(QString());
        login_2->setText(QCoreApplication::translate("emergencyRequest_patient", "Logout", nullptr));
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class emergencyRequest_patient: public Ui_emergencyRequest_patient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMERGENCYREQUEST_PATIENT_H
