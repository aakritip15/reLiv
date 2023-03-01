/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QPushButton *home;
    QLabel *label_3;
    QPushButton *login;
    QPushButton *register_2;
    QFrame *line;
    QPushButton *why;
    QPushButton *about_2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName("about");
        about->resize(1283, 700);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(about->sizePolicy().hasHeightForWidth());
        about->setSizePolicy(sizePolicy);
        about->setMinimumSize(QSize(1283, 700));
        about->setSizeIncrement(QSize(10, 10));
        about->setBaseSize(QSize(1270, 0));
        about->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        home = new QPushButton(about);
        home->setObjectName("home");
        home->setGeometry(QRect(230, 40, 151, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        home->setFont(font);
        home->setCursor(QCursor(Qt::PointingHandCursor));
        home->setStyleSheet(QString::fromUtf8("#home\n"
"\n"
"{\n"
" background-color:#rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"#home::hover\n"
"{\n"
"\n"
"border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        label_3 = new QLabel(about);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 20, 81, 91));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/logo1.png);"));
        login = new QPushButton(about);
        login->setObjectName("login");
        login->setGeometry(QRect(920, 40, 151, 41));
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
        register_2 = new QPushButton(about);
        register_2->setObjectName("register_2");
        register_2->setGeometry(QRect(1100, 40, 151, 41));
        register_2->setFont(font);
        register_2->setCursor(QCursor(Qt::PointingHandCursor));
        register_2->setStyleSheet(QString::fromUtf8("#register_2\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#register_2::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        line = new QFrame(about);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 120, 1280, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        why = new QPushButton(about);
        why->setObjectName("why");
        why->setGeometry(QRect(510, 40, 231, 41));
        why->setFont(font);
        why->setCursor(QCursor(Qt::PointingHandCursor));
        why->setStyleSheet(QString::fromUtf8("#why\n"
"\n"
"{\n"
" background-color:rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"#why::hover\n"
"{\n"
"border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        about_2 = new QPushButton(about);
        about_2->setObjectName("about_2");
        about_2->setGeometry(QRect(360, 40, 151, 41));
        about_2->setFont(font);
        about_2->setCursor(QCursor(Qt::PointingHandCursor));
        about_2->setStyleSheet(QString::fromUtf8("#about_2\n"
"\n"
"{\n"
" background-color:#rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"#about_2::hover\n"
"{\n"
"border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);\n"
"}"));
        label_2 = new QLabel(about);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 200, 391, 61));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        label_2->setFont(font1);
        label_4 = new QLabel(about);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 260, 501, 181));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(false);
        label_4->setFont(font2);
        label_5 = new QLabel(about);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(590, 260, 150, 149));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/reLiv.png);"));
        label_6 = new QLabel(about);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 440, 201, 171));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/vision.png);"));
        label_7 = new QLabel(about);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(280, 410, 391, 61));
        label_7->setFont(font1);
        label_8 = new QLabel(about);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(280, 470, 501, 181));
        label_8->setFont(font2);
        label_9 = new QLabel(about);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(820, 130, 281, 61));
        QFont font3;
        font3.setPointSize(32);
        font3.setBold(true);
        label_9->setFont(font3);
        label_10 = new QLabel(about);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(830, 470, 150, 149));
        label_10->setStyleSheet(QString::fromUtf8(""));
        label_11 = new QLabel(about);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(1040, 470, 150, 149));
        label_11->setStyleSheet(QString::fromUtf8(""));
        label_12 = new QLabel(about);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(1040, 250, 150, 149));
        label_12->setStyleSheet(QString::fromUtf8(""));
        label_13 = new QLabel(about);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(830, 250, 150, 149));
        label_13->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(about);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 140, 281, 61));
        label->setFont(font3);
        toolButton = new QToolButton(about);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(820, 250, 161, 151));
        toolButton->setStyleSheet(QString::fromUtf8("border-radius:3px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Downloads/pr2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(120, 120));
        toolButton_2 = new QToolButton(about);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(1030, 250, 161, 151));
        toolButton_2->setStyleSheet(QString::fromUtf8("border-radius:3px;"));
        toolButton_2->setIcon(icon);
        toolButton_2->setIconSize(QSize(120, 120));
        toolButton_3 = new QToolButton(about);
        toolButton_3->setObjectName("toolButton_3");
        toolButton_3->setGeometry(QRect(820, 470, 161, 151));
        toolButton_3->setStyleSheet(QString::fromUtf8("border-radius:3px;"));
        toolButton_3->setIcon(icon);
        toolButton_3->setIconSize(QSize(120, 120));
        toolButton_4 = new QToolButton(about);
        toolButton_4->setObjectName("toolButton_4");
        toolButton_4->setGeometry(QRect(1030, 470, 161, 151));
        toolButton_4->setStyleSheet(QString::fromUtf8("border-radius:3px;"));
        toolButton_4->setIcon(icon);
        toolButton_4->setIconSize(QSize(120, 120));
        label_14 = new QLabel(about);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(860, 420, 111, 20));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        label_14->setFont(font4);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(144, 10, 18);"));
        label_15 = new QLabel(about);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(1060, 420, 131, 20));
        label_15->setFont(font4);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(144, 10, 18);"));
        label_16 = new QLabel(about);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(850, 640, 121, 20));
        label_16->setFont(font4);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(144, 10, 18);"));
        label_17 = new QLabel(about);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(1050, 640, 131, 20));
        label_17->setFont(font4);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(144, 10, 18);"));

        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QCoreApplication::translate("about", "Dialog", nullptr));
        home->setText(QCoreApplication::translate("about", "Home", nullptr));
        label_3->setText(QString());
        login->setText(QCoreApplication::translate("about", "Login", nullptr));
        register_2->setText(QCoreApplication::translate("about", "Register", nullptr));
        why->setText(QCoreApplication::translate("about", "Why become donor", nullptr));
        about_2->setText(QCoreApplication::translate("about", "About us", nullptr));
        label_2->setText(QCoreApplication::translate("about", "What is ReLiv?", nullptr));
        label_4->setText(QCoreApplication::translate("about", "\342\200\234ReLiv\342\200\235 aims to computerize the bloodstock management\n"
"and donor data management to provide blood immediately\n"
"to the patient without any delay.In addition, it keeps the\n"
"records of all the donors,recipients,blood donation programs \n"
"and so on. ", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("about", "Our Vision", nullptr));
        label_8->setText(QCoreApplication::translate("about", "ReLiv allow the receiver to make a search for blood of their\n"
"respective blood group and make a request for blood.\n"
"It help volunteer donors to know about different blood \n"
"donations campaign.It encourage and publicize blood \n"
"donation programs.\n"
"", nullptr));
        label_9->setText(QCoreApplication::translate("about", "Our Team", nullptr));
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label->setText(QCoreApplication::translate("about", "About Us", nullptr));
        toolButton->setText(QString());
        toolButton_2->setText(QString());
        toolButton_3->setText(QString());
        toolButton_4->setText(QString());
        label_14->setText(QCoreApplication::translate("about", "Anuja Kafle", nullptr));
        label_15->setText(QCoreApplication::translate("about", "Aakriti Poudel", nullptr));
        label_16->setText(QCoreApplication::translate("about", "Rista Shrestha", nullptr));
        label_17->setText(QCoreApplication::translate("about", "Krishita Pandey", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
