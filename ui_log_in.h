/********************************************************************************
** Form generated from reading UI file 'log_in.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_IN_H
#define UI_LOG_IN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_log_in
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *signin;
    QLineEdit *email;
    QLabel *password_2;
    QLabel *email_2;
    QLineEdit *password;
    QLabel *label_5;
    QPushButton *home_2;
    QPushButton *signin_2;
    QLabel *email_3;
    QToolButton *toolButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QFrame *line;
    QLineEdit *lineEdit;

    void setupUi(QDialog *log_in)
    {
        if (log_in->objectName().isEmpty())
            log_in->setObjectName("log_in");
        log_in->resize(1270, 700);
        log_in->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(log_in);
        label->setObjectName("label");
        label->setGeometry(QRect(1127, 828, 63, 20));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/login.png);"));
        label_2 = new QLabel(log_in);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(705, 14, 491, 641));
        label_2->setStyleSheet(QString::fromUtf8("border-radius:30px;\n"
"background-color:#F1EEEE;"));
        label_3 = new QLabel(log_in);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(920, 56, 81, 81));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/log_in.png);\n"
"background-color:#F1EEEE;"));
        label_4 = new QLabel(log_in);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(890, 140, 141, 81));
        QFont font;
        font.setPointSize(31);
        font.setBold(true);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-color:#F1EEEE;"));
        signin = new QPushButton(log_in);
        signin->setObjectName("signin");
        signin->setGeometry(QRect(740, 460, 421, 45));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        signin->setFont(font1);
        signin->setCursor(QCursor(Qt::PointingHandCursor));
        signin->setStyleSheet(QString::fromUtf8("#signin\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"border-radius:10px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"#signin::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        email = new QLineEdit(log_in);
        email->setObjectName("email");
        email->setGeometry(QRect(750, 270, 400, 50));
        email->setStyleSheet(QString::fromUtf8("#email\n"
"{\n"
"border-radius:5px;\n"
"background-color:rgb(255, 255, 255)\n"
"}"));
        password_2 = new QLabel(log_in);
        password_2->setObjectName("password_2");
        password_2->setGeometry(QRect(750, 344, 71, 20));
        QFont font2;
        font2.setBold(true);
        password_2->setFont(font2);
        password_2->setStyleSheet(QString::fromUtf8("background-color:#F1EEEE;\n"
""));
        email_2 = new QLabel(log_in);
        email_2->setObjectName("email_2");
        email_2->setGeometry(QRect(750, 243, 63, 20));
        email_2->setFont(font2);
        email_2->setStyleSheet(QString::fromUtf8("background-color:#F1EEEE;"));
        password = new QLineEdit(log_in);
        password->setObjectName("password");
        password->setGeometry(QRect(751, 373, 400, 50));
        password->setStyleSheet(QString::fromUtf8("#password\n"
"{\n"
"border-radius:5px;\n"
"background-color:rgb(255, 255, 255)\n"
"}"));
        password->setEchoMode(QLineEdit::Password);
        label_5 = new QLabel(log_in);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(75, 60, 591, 601));
        label_5->setStyleSheet(QString::fromUtf8(""));
        home_2 = new QPushButton(log_in);
        home_2->setObjectName("home_2");
        home_2->setGeometry(QRect(40, 30, 60, 61));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        home_2->setFont(font3);
        home_2->setCursor(QCursor(Qt::PointingHandCursor));
        home_2->setAutoFillBackground(false);
        home_2->setStyleSheet(QString::fromUtf8("#home_2\n"
"{\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    padding: 5px;}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/back_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        home_2->setIcon(icon);
        home_2->setIconSize(QSize(60, 78));
        signin_2 = new QPushButton(log_in);
        signin_2->setObjectName("signin_2");
        signin_2->setGeometry(QRect(900, 610, 181, 31));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setUnderline(true);
        signin_2->setFont(font4);
        signin_2->setCursor(QCursor(Qt::PointingHandCursor));
        signin_2->setStyleSheet(QString::fromUtf8("#signin_2\n"
"{\n"
"\n"
" background-color:#F1EEEE;\n"
"border-radius:20px;\n"
"	}\n"
""));
        email_3 = new QLabel(log_in);
        email_3->setObjectName("email_3");
        email_3->setGeometry(QRect(930, 525, 41, 20));
        email_3->setFont(font1);
        email_3->setStyleSheet(QString::fromUtf8("background-color:#F1EEEE;"));
        toolButton = new QToolButton(log_in);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(80, 100, 591, 551));
        toolButton->setStyleSheet(QString::fromUtf8("border:0px;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/login.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(10500, 10500));
        pushButton_4 = new QPushButton(log_in);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(950, 557, 51, 51));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Social Media Circled")});
        font5.setPointSize(25);
        pushButton_4->setFont(font5);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_4{\n"
"background-color:rgba(0,0,0,0);\n"
" color: rgb(255, 164, 170)\n"
"\n"
"   \n"
"}\n"
"\n"
"QPushButton#pushButton_4:hover{\n"
"background-color: rgba(0,0,0,0);\n"
" color: rgba(205,200,250,230);\n"
"\n"
"   \n"
"}\n"
"QPushButton#pushButton_4:pressed{\n"
"padding-left:5px;\n"
"padding-top:5px;\n"
"background-color:rgba(105,110,132,200);\n"
"\n"
"   \n"
"}"));
        pushButton_2 = new QPushButton(log_in);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(850, 557, 51, 51));
        pushButton_2->setFont(font5);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2{\n"
"background-color:rgba(0,0,0,0);\n"
" color: rgb(255, 164, 170)\n"
"   \n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover{\n"
"background-color: rgba(0,0,0,0);\n"
" color: rgba(205,200,250,230);\n"
"\n"
"   \n"
"}\n"
"QPushButton#pushButton_2:pressed{\n"
"padding-left:5px;\n"
"padding-top:5px;\n"
"background-color:rgba(105,110,132,200);\n"
"\n"
"   \n"
"}\n"
"QPushButton#pushButton_3:hover{\n"
"background-color: rgba(0,0,0,0);\n"
" color: rgba(205,200,250,230);\n"
"\n"
"   \n"
"}\n"
"QPushButton#pushButton_3:pressed{\n"
"padding-left:5px;\n"
"padding-top:5px;\n"
"background-color:rgba(105,110,132,200);\n"
"\n"
"   \n"
"}\n"
"QPushButton#pushButton_4:hover{\n"
"background-color: rgba(0,0,0,0);\n"
" color: rgba(205,200,250,230);\n"
"\n"
"   \n"
"}\n"
"QPushButton#pushButton_4:pressed{\n"
"padding-left:5px;\n"
"padding-top:5px;\n"
"background-color:rgba(105,110,132,200);\n"
"\n"
"   \n"
"}"));
        pushButton_3 = new QPushButton(log_in);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(900, 557, 51, 51));
        pushButton_3->setFont(font5);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_3{\n"
"background-color:rgba(0,0,0,0);\n"
" color: rgb(255, 164, 170)\n"
"\n"
"   \n"
"}\n"
"\n"
"QPushButton#pushButton_3:hover{\n"
"background-color: rgba(0,0,0,0);\n"
" color: rgba(205,200,250,230);\n"
"\n"
"   \n"
"}\n"
"QPushButton#pushButton_3:pressed{\n"
"padding-left:5px;\n"
"padding-top:5px;\n"
"background-color:rgba(105,110,132,200);\n"
"\n"
"   \n"
"}"));
        pushButton_5 = new QPushButton(log_in);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(1000, 557, 51, 51));
        pushButton_5->setFont(font5);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_5{\n"
"background-color:rgba(0,0,0,0);\n"
" color: rgb(255, 164, 170)\n"
"\n"
"   \n"
"}\n"
"\n"
"QPushButton#pushButton_5:hover{\n"
"background-color: rgba(0,0,0,0);\n"
" color: rgba(205,200,250,230);\n"
"\n"
"   \n"
"}\n"
"QPushButton#pushButton_5:pressed{\n"
"padding-left:5px;\n"
"padding-top:5px;\n"
"background-color:rgba(105,110,132,200);\n"
"\n"
"   \n"
"}"));
        line = new QFrame(log_in);
        line->setObjectName("line");
        line->setGeometry(QRect(747, 530, 411, 20));
        line->setStyleSheet(QString::fromUtf8("background-color:#F1EEEE;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        lineEdit = new QLineEdit(log_in);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(830, 611, 81, 28));
        QFont font6;
        font6.setPointSize(11);
        lineEdit->setFont(font6);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:#F1EEEE;\n"
"border-radius:5px;"));
        label_2->raise();
        line->raise();
        label_5->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        signin->raise();
        email->raise();
        password_2->raise();
        email_2->raise();
        password->raise();
        home_2->raise();
        signin_2->raise();
        email_3->raise();
        toolButton->raise();
        pushButton_4->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_5->raise();
        lineEdit->raise();

        retranslateUi(log_in);

        QMetaObject::connectSlotsByName(log_in);
    } // setupUi

    void retranslateUi(QDialog *log_in)
    {
        log_in->setWindowTitle(QCoreApplication::translate("log_in", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("log_in", "TextLabel", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("log_in", "Login", nullptr));
        signin->setText(QCoreApplication::translate("log_in", "Sign in", nullptr));
        password_2->setText(QCoreApplication::translate("log_in", "Password", nullptr));
        email_2->setText(QCoreApplication::translate("log_in", "Email", nullptr));
        label_5->setText(QString());
        home_2->setText(QString());
        signin_2->setText(QCoreApplication::translate("log_in", "Create New Account", nullptr));
        email_3->setText(QCoreApplication::translate("log_in", "OR", nullptr));
        toolButton->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("log_in", "D", nullptr));
        pushButton_2->setText(QCoreApplication::translate("log_in", "E", nullptr));
        pushButton_3->setText(QCoreApplication::translate("log_in", "Q", nullptr));
        pushButton_5->setText(QCoreApplication::translate("log_in", "k", nullptr));
        lineEdit->setText(QCoreApplication::translate("log_in", "Join us now", nullptr));
    } // retranslateUi

};

namespace Ui {
    class log_in: public Ui_log_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_IN_H
