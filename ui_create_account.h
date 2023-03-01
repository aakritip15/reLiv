/********************************************************************************
** Form generated from reading UI file 'create_account.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_ACCOUNT_H
#define UI_CREATE_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_create_account
{
public:
    QLabel *label;
    QLabel *label_5;
    QLineEdit *name;
    QLineEdit *age;
    QLabel *label_15;
    QPushButton *register_2;
    QLineEdit *email;
    QLineEdit *gender;
    QLineEdit *blood_group;
    QLineEdit *location;
    QLineEdit *phone_number;
    QLineEdit *password;
    QLineEdit *disease;
    QPushButton *back;

    void setupUi(QDialog *create_account)
    {
        if (create_account->objectName().isEmpty())
            create_account->setObjectName("create_account");
        create_account->resize(1270, 700);
        create_account->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        label = new QLabel(create_account);
        label->setObjectName("label");
        label->setGeometry(QRect(1087, 808, 63, 20));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/img/Images/login.png);"));
        label_5 = new QLabel(create_account);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 49, 491, 621));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/create_account.jpg);"));
        name = new QLineEdit(create_account);
        name->setObjectName("name");
        name->setGeometry(QRect(720, 120, 461, 50));
        name->setCursor(QCursor(Qt::IBeamCursor));
        name->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color: #EDEDED;\n"
"}"));
        age = new QLineEdit(create_account);
        age->setObjectName("age");
        age->setGeometry(QRect(720, 180, 111, 50));
        age->setCursor(QCursor(Qt::IBeamCursor));
        age->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color: #EDEDED;\n"
"}"));
        label_15 = new QLabel(create_account);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(720, 60, 231, 41));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label_15->setFont(font);
        label_15->setCursor(QCursor(Qt::PointingHandCursor));
        label_15->setStyleSheet(QString::fromUtf8(""));
        register_2 = new QPushButton(create_account);
        register_2->setObjectName("register_2");
        register_2->setGeometry(QRect(720, 590, 461, 50));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        register_2->setFont(font1);
        register_2->setCursor(QCursor(Qt::PointingHandCursor));
        register_2->setStyleSheet(QString::fromUtf8("#register_2\n"
"{\n"
"background-color:rgb(144, 10, 18);\n"
"border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#register_2::hover\n"
"{\n"
"background-color:white;\n"
"	color: rgb(144, 10, 18);\n"
"}"));
        email = new QLineEdit(create_account);
        email->setObjectName("email");
        email->setGeometry(QRect(720, 300, 461, 50));
        email->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color: #EDEDED;\n"
"}"));
        gender = new QLineEdit(create_account);
        gender->setObjectName("gender");
        gender->setGeometry(QRect(1020, 180, 161, 50));
        gender->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color: #EDEDED;}"));
        blood_group = new QLineEdit(create_account);
        blood_group->setObjectName("blood_group");
        blood_group->setGeometry(QRect(840, 180, 171, 50));
        blood_group->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color: #EDEDED;\n"
"\n"
"}"));
        location = new QLineEdit(create_account);
        location->setObjectName("location");
        location->setGeometry(QRect(720, 240, 461, 50));
        location->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color:#EDEDED;\n"
"}"));
        phone_number = new QLineEdit(create_account);
        phone_number->setObjectName("phone_number");
        phone_number->setGeometry(QRect(720, 360, 461, 50));
        phone_number->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color: #EDEDED;\n"
"}"));
        password = new QLineEdit(create_account);
        password->setObjectName("password");
        password->setGeometry(QRect(720, 420, 461, 50));
        password->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color: #EDEDED;\n"
"}"));
        password->setEchoMode(QLineEdit::Normal);
        disease = new QLineEdit(create_account);
        disease->setObjectName("disease");
        disease->setGeometry(QRect(720, 480, 461, 101));
        disease->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border-radius:5px;\n"
"background-color: #EDEDED;\n"
"}"));
        back = new QPushButton(create_account);
        back->setObjectName("back");
        back->setGeometry(QRect(30, 30, 60, 60));
        back->setCursor(QCursor(Qt::PointingHandCursor));
        back->setStyleSheet(QString::fromUtf8("#back {\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    padding: 5px;\n"
"  }\n"
"\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/back_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon);
        back->setIconSize(QSize(60, 78));

        retranslateUi(create_account);

        QMetaObject::connectSlotsByName(create_account);
    } // setupUi

    void retranslateUi(QDialog *create_account)
    {
        create_account->setWindowTitle(QCoreApplication::translate("create_account", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("create_account", "TextLabel", nullptr));
        label_5->setText(QString());
        name->setText(QString());
        name->setPlaceholderText(QCoreApplication::translate("create_account", "  Full Name", nullptr));
        age->setText(QString());
        age->setPlaceholderText(QCoreApplication::translate("create_account", "   Age", nullptr));
        label_15->setText(QCoreApplication::translate("create_account", "Create Account", nullptr));
        register_2->setText(QCoreApplication::translate("create_account", "Create account", nullptr));
        email->setText(QString());
        email->setPlaceholderText(QCoreApplication::translate("create_account", "  Email", nullptr));
        gender->setText(QString());
        gender->setPlaceholderText(QCoreApplication::translate("create_account", "   Gender", nullptr));
        blood_group->setText(QString());
        blood_group->setPlaceholderText(QCoreApplication::translate("create_account", "   Blood Group", nullptr));
        location->setText(QString());
        location->setPlaceholderText(QCoreApplication::translate("create_account", "   Location", nullptr));
        phone_number->setText(QString());
        phone_number->setPlaceholderText(QCoreApplication::translate("create_account", "   Phone Number", nullptr));
        password->setText(QString());
        password->setPlaceholderText(QCoreApplication::translate("create_account", "   Password", nullptr));
        disease->setText(QString());
        disease->setPlaceholderText(QCoreApplication::translate("create_account", "    Sepecify disease(if any)", nullptr));
        back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class create_account: public Ui_create_account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_ACCOUNT_H
