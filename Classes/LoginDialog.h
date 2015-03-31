#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "ui_LoginDialog.h"
#include <QCoreApplication>
//#include <QtSql>

class LoginDialog : public QDialog, private Ui_loginDialog
{
    Q_OBJECT
public :
    LoginDialog();
    ~LoginDialog();

private :
    QString log;
    QString pass;

private slots :
  void accept();
  /*void reject();*/

signals :
  void PasswordIsValid();

};


#endif // LOGINDIALOG_H
