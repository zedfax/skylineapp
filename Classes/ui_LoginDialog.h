/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created: Tue Mar 31 19:55:41 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *login;
    QLineEdit *password;
    QLabel *llogin;
    QLabel *lpassword;
    QLabel *label;
    QLabel *lconnectStatus;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QString::fromUtf8("loginDialog"));
        loginDialog->resize(400, 184);
        buttonBox = new QDialogButtonBox(loginDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(290, 77, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);
        login = new QLineEdit(loginDialog);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(130, 77, 151, 27));
        password = new QLineEdit(loginDialog);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(130, 110, 151, 27));
        password->setEchoMode(QLineEdit::Password);
        llogin = new QLabel(loginDialog);
        llogin->setObjectName(QString::fromUtf8("llogin"));
        llogin->setGeometry(QRect(20, 82, 81, 17));
        lpassword = new QLabel(loginDialog);
        lpassword->setObjectName(QString::fromUtf8("lpassword"));
        lpassword->setGeometry(QRect(20, 114, 101, 17));
        label = new QLabel(loginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(135, 20, 143, 25));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        lconnectStatus = new QLabel(loginDialog);
        lconnectStatus->setObjectName(QString::fromUtf8("lconnectStatus"));
        lconnectStatus->setGeometry(QRect(20, 150, 351, 20));
        lconnectStatus->setAlignment(Qt::AlignCenter);

        retranslateUi(loginDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), loginDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), loginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QApplication::translate("loginDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        llogin->setText(QApplication::translate("loginDialog", "Identifiant :", 0, QApplication::UnicodeUTF8));
        lpassword->setText(QApplication::translate("loginDialog", "Mot de passe :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("loginDialog", "SkylineApp v1", 0, QApplication::UnicodeUTF8));
        lconnectStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
