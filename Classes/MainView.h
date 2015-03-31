#include <QMainWindow>

#include "ui_MainView.h"
#include "LoginDialog.h"

class MainView : public QMainWindow, private Ui_MainWindow
{
    Q_OBJECT
public :
    MainView();
    ~MainView();

private :
    LoginDialog *login;

private slots :
signals :

};
