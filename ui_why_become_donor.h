/********************************************************************************
** Form generated from reading UI file 'why_become_donor.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHY_BECOME_DONOR_H
#define UI_WHY_BECOME_DONOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_why_become_donor
{
public:
    QPushButton *register_2;
    QPushButton *login;
    QLabel *label_3;
    QFrame *line;
    QPushButton *about_2;
    QPushButton *home;
    QPushButton *why;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;

    void setupUi(QDialog *why_become_donor)
    {
        if (why_become_donor->objectName().isEmpty())
            why_become_donor->setObjectName("why_become_donor");
        why_become_donor->resize(1270, 700);
        why_become_donor->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        register_2 = new QPushButton(why_become_donor);
        register_2->setObjectName("register_2");
        register_2->setGeometry(QRect(1100, 20, 151, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        register_2->setFont(font);
        register_2->setCursor(QCursor(Qt::PointingHandCursor));
        register_2->setStyleSheet(QString::fromUtf8("#register_2\n"
"{\n"
" background-color:rgb(144, 10, 18);\n"
"	color: rgb(255, 255, 255);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"#register_2::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        login = new QPushButton(why_become_donor);
        login->setObjectName("login");
        login->setGeometry(QRect(920, 20, 151, 41));
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
        label_3 = new QLabel(why_become_donor);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 0, 81, 91));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/logo1.png);"));
        line = new QFrame(why_become_donor);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 100, 1280, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        about_2 = new QPushButton(why_become_donor);
        about_2->setObjectName("about_2");
        about_2->setGeometry(QRect(360, 20, 131, 41));
        about_2->setFont(font);
        about_2->setCursor(QCursor(Qt::PointingHandCursor));
        about_2->setStyleSheet(QString::fromUtf8("#about_2\n"
"\n"
"{\n"
" background-color:#rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"\n"
"#about_2::hover{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        home = new QPushButton(why_become_donor);
        home->setObjectName("home");
        home->setGeometry(QRect(230, 20, 111, 41));
        home->setFont(font);
        home->setCursor(QCursor(Qt::PointingHandCursor));
        home->setStyleSheet(QString::fromUtf8("#home\n"
"\n"
"{\n"
" background-color:#rgb(255, 255, 255);\n"
"border-radius:0.5px;\n"
"}\n"
"\n"
"\n"
"#home::hover{border-bottom :3px solid rgb(144, 10, 18);\n"
"color: rgb(144, 10, 18);}"));
        why = new QPushButton(why_become_donor);
        why->setObjectName("why");
        why->setGeometry(QRect(510, 20, 231, 41));
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
        frame = new QFrame(why_become_donor);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 105, 1271, 651));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"border-image: url(:/img/Images/output-onlinepngtools (1).png);  }\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 40, 131, 161));
        label->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 40, 341, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("AcadEref")});
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_17 = new QLabel(frame);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(260, 80, 361, 41));
        label_17->setStyleSheet(QString::fromUtf8(""));
        label_18 = new QLabel(frame);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(480, 170, 341, 41));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(true);
        label_18->setFont(font2);
        label_18->setStyleSheet(QString::fromUtf8(""));
        label_19 = new QLabel(frame);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(590, 320, 341, 41));
        label_19->setFont(font2);
        label_19->setStyleSheet(QString::fromUtf8(""));
        label_20 = new QLabel(frame);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(770, 440, 341, 41));
        label_20->setFont(font2);
        label_20->setStyleSheet(QString::fromUtf8(""));
        label_21 = new QLabel(frame);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(570, 370, 471, 51));
        label_21->setStyleSheet(QString::fromUtf8(""));
        label_22 = new QLabel(frame);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(460, 220, 531, 51));
        label_22->setStyleSheet(QString::fromUtf8(""));
        label_23 = new QLabel(frame);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(820, 490, 361, 41));
        label_23->setStyleSheet(QString::fromUtf8(""));
        label_24 = new QLabel(frame);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(500, 540, 491, 41));
        label_24->setFont(font2);
        label_24->setStyleSheet(QString::fromUtf8(""));
        label_25 = new QLabel(frame);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(410, 350, 131, 111));
        label_25->setStyleSheet(QString::fromUtf8("#label_12{border-image: url(:/img/Images/istockphoto-1179369531-612x612-removebg-preview.png);\n"
"  hover:  rgb(170, 0, 0);\n"
"\n"
"\n"
"}\n"
""));
        label_26 = new QLabel(frame);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(290, 160, 161, 161));
        label_26->setStyleSheet(QString::fromUtf8(""));
        label_27 = new QLabel(frame);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(1010, 20, 251, 281));
        label_27->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/vector-illustration-of-donate-blood-concept-for-world-blood-donor-day-T7393X-removebg-preview.png);\n"
"border-radius: 50px;\n"
""));
        toolButton = new QToolButton(frame);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(70, 40, 131, 161));
        toolButton->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Downloads/bg.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(160, 160));
        toolButton_2 = new QToolButton(frame);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(290, 160, 161, 161));
        toolButton_2->setStyleSheet(QString::fromUtf8("border-radius:3px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Downloads/istockphoto-1091728056-612x612-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon1);
        toolButton_2->setIconSize(QSize(160, 160));
        toolButton_3 = new QToolButton(frame);
        toolButton_3->setObjectName("toolButton_3");
        toolButton_3->setGeometry(QRect(410, 350, 131, 111));
        toolButton_3->setStyleSheet(QString::fromUtf8("border-radius:3px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Downloads/istockphoto-1179369531-612x612-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon2);
        toolButton_3->setIconSize(QSize(150, 150));

        retranslateUi(why_become_donor);

        QMetaObject::connectSlotsByName(why_become_donor);
    } // setupUi

    void retranslateUi(QDialog *why_become_donor)
    {
        why_become_donor->setWindowTitle(QCoreApplication::translate("why_become_donor", "Dialog", nullptr));
        register_2->setText(QCoreApplication::translate("why_become_donor", "Register", nullptr));
        login->setText(QCoreApplication::translate("why_become_donor", "Login", nullptr));
        label_3->setText(QString());
        about_2->setText(QCoreApplication::translate("why_become_donor", "About us", nullptr));
        home->setText(QCoreApplication::translate("why_become_donor", "Home", nullptr));
        why->setText(QCoreApplication::translate("why_become_donor", "Why become donor", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("why_become_donor", "1. There is no substitute for human blood", nullptr));
        label_17->setText(QCoreApplication::translate("why_become_donor", "It only comes from a person who donate it", nullptr));
        label_18->setText(QCoreApplication::translate("why_become_donor", "2. One blood donation can save 3 lives", nullptr));
        label_19->setText(QCoreApplication::translate("why_become_donor", "3.Its a volunteering activity", nullptr));
        label_20->setText(QCoreApplication::translate("why_become_donor", "4. There is always need for donors", nullptr));
        label_21->setText(QCoreApplication::translate("why_become_donor", "Its a great help to community and takes only about an hour !", nullptr));
        label_22->setText(QCoreApplication::translate("why_become_donor", "RBC in your blood can help in surgeries, platelets often goes to cancer patients", nullptr));
        label_23->setText(QCoreApplication::translate("why_become_donor", "Your small help would help those who are in need ", nullptr));
        label_24->setText(QCoreApplication::translate("why_become_donor", "YOU  WILL LEARN  ABOUT YOUR BLOOD TYPE AND MORE !! :) ", nullptr));
        label_25->setText(QString());
        label_26->setText(QString());
        label_27->setText(QString());
        toolButton->setText(QString());
        toolButton_2->setText(QString());
        toolButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class why_become_donor: public Ui_why_become_donor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHY_BECOME_DONOR_H
