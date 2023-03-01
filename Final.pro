QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    admin_dashboard.cpp \
    camaign_admin.cpp \
    campaign.cpp \
    change_information.cpp \
    create_account.cpp \
    donate_blood.cpp \
    donor_request.cpp \
    edit_donor.cpp \
    edit_patient.cpp \
    emergencyrequest_admin.cpp \
    emergencyrequest_patient.cpp \
    log_in.cpp \
    main.cpp \
    mainwindow.cpp \
    my_details.cpp \
    patient_requests.cpp \
    request_blood.cpp \
    user_details.cpp \
    userdashboard.cpp \
    why_become_donor.cpp

HEADERS += \
    about.h \
    admin_dashboard.h \
    camaign_admin.h \
    campaign.h \
    change_information.h \
    create_account.h \
    donate_blood.h \
    donor_request.h \
    edit_donor.h \
    edit_patient.h \
    emergencyrequest_admin.h \
    emergencyrequest_patient.h \
    log_in.h \
    mainwindow.h \
    my_details.h \
    patient_requests.h \
    request_blood.h \
    user_details.h \
    userdashboard.h \
    why_become_donor.h

FORMS += \
    about.ui \
    admin_dashboard.ui \
    camaign_admin.ui \
    campaign.ui \
    change_information.ui \
    create_account.ui \
    donate_blood.ui \
    donor_request.ui \
    edit_donor.ui \
    edit_patient.ui \
    emergencyrequest_admin.ui \
    emergencyrequest_patient.ui \
    log_in.ui \
    mainwindow.ui \
    my_details.ui \
    patient_requests.ui \
    request_blood.ui \
    user_details.ui \
    userdashboard.ui \
    why_become_donor.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc

DISTFILES +=
