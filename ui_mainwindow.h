/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *signin_3;
    QPushButton *login;
    QLabel *label_4;
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QPushButton *see_more;
    QPushButton *home;
    QPushButton *about;
    QPushButton *why;
    QLabel *label_3;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1270, 700);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(16);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("#\n"
"{\n"
"background-color:rgb(255, 255, 255);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:white;"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, -20, 1280, 720));
        frame->setStyleSheet(QString::fromUtf8("#frame\n"
"{\n"
"background-color:rgb(255, 255, 255)\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        signin_3 = new QPushButton(frame);
        signin_3->setObjectName("signin_3");
        signin_3->setGeometry(QRect(1070, 60, 151, 40));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        signin_3->setFont(font1);
        signin_3->setCursor(QCursor(Qt::PointingHandCursor));
        signin_3->setStyleSheet(QString::fromUtf8("\n"
"*\n"
"{\n"
" background-color:rgb(144,10,18);\n"
"border-radius:20px;\n"
"color:white;\n"
"}\n"
"#signin_3:hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}\n"
""));
        login = new QPushButton(frame);
        login->setObjectName("login");
        login->setGeometry(QRect(880, 60, 151, 41));
        login->setFont(font1);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        login->setStyleSheet(QString::fromUtf8("#login\n"
"{\n"
" background-color:rgb(144,10,18);\n"
"border-radius:20px;\n"
"color:white;\n"
"}\n"
"#login:hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}\n"
""));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 225, 531, 191));
        QFont font2;
        font2.setPointSize(48);
        font2.setBold(true);
        label_4->setFont(font2);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(580, 150, 665, 495));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Images/blood_main.png);"));
        line = new QFrame(frame);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 130, 1280, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 430, 581, 101));
        QFont font3;
        font3.setPointSize(14);
        label_2->setFont(font3);
        see_more = new QPushButton(frame);
        see_more->setObjectName("see_more");
        see_more->setGeometry(QRect(80, 540, 151, 45));
        see_more->setFont(font1);
        see_more->setCursor(QCursor(Qt::PointingHandCursor));
        see_more->setStyleSheet(QString::fromUtf8("\n"
"#see_more\n"
"{\n"
" background-color:rgb(144,10,18);\n"
"border-radius:20px;\n"
"color:white;\n"
"}\n"
"#see_more:hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}\n"
""));
        home = new QPushButton(frame);
        home->setObjectName("home");
        home->setGeometry(QRect(290, 60, 71, 41));
        home->setFont(font1);
        home->setCursor(QCursor(Qt::PointingHandCursor));
        home->setStyleSheet(QString::fromUtf8("#home\n"
"{\n"
"border-radius:0.5px;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#home::hover\n"
"{\n"
"   border-bottom:3px solid rgb(144, 10, 18);\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        about = new QPushButton(frame);
        about->setObjectName("about");
        about->setGeometry(QRect(390, 60, 101, 41));
        about->setFont(font1);
        about->setCursor(QCursor(Qt::PointingHandCursor));
        about->setStyleSheet(QString::fromUtf8("#about\n"
"\n"
"{\n"
" background-color:#rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"#about::hover\n"
"{\n"
"   border-bottom:3px solid rgb(144, 10, 18);\n"
"	color: rgb(144, 10, 18);\n"
"\n"
"}"));
        why = new QPushButton(frame);
        why->setObjectName("why");
        why->setGeometry(QRect(512, 60, 201, 41));
        why->setFont(font1);
        why->setCursor(QCursor(Qt::PointingHandCursor));
        why->setStyleSheet(QString::fromUtf8("#why\n"
"{\n"
" background-color:#rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"#why::hover\n"
"{\n"
"   border-bottom:3px solid rgb(144, 10, 18);\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 30, 81, 91));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/logo1.png);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1270, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        signin_3->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Donate blood\n"
"Save lives", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "A single drop of blood can make a huge difference.\n"
"So be the reason for someone's heartbeat.", nullptr));
        see_more->setText(QCoreApplication::translate("MainWindow", "See more", nullptr));
        home->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        about->setText(QCoreApplication::translate("MainWindow", "About us", nullptr));
        why->setText(QCoreApplication::translate("MainWindow", "Why become donor", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
