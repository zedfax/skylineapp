// LoginDialog.cpp

// Includes qt
#include <QMessageBox>
#include <QtSql>
#include <QCryptographicHash>


// Includes application
#include "LoginDialog.h"
#include <iostream>
using namespace std;

// Macros
#define q2c(string) string.toStdString()

LoginDialog::LoginDialog()
{
    //MainView *mview = new MainView();
    // Construction de la vue
    setupUi(this);

    // Connexion des signaux des différents widgets et boutons de la vue
    QObject::connect(this,SIGNAL(PasswordIsValid()),this,SLOT(close()));

   // QObject::connect(pbValid,SIGNAL(clicked()),this,SLOT(slotActionValid()));
   // QObject::connect(buttonBox, SIGNAL(clicked(accepted)), this, SLOT(close()));
}

/**
 * Destructeur
 */
LoginDialog::~LoginDialog()
{
}

void LoginDialog::accept() {
    cout << "Button OK pressed" << endl;
    cout << "Verification IDs..." << endl;
    QString log = login->text();
    QString pass = password->text();
    if(log == "" || pass == "")
      {
        lconnectStatus->setText("<font color='red'>Veuillez remplir tout les champs !</font>");
      }
    else {
        lconnectStatus->setText("Vérification des identifiants...");

        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        //db.setPort(22);
        db.setUserName("root");
        db.setPassword("root");
        db.setDatabaseName("test");
        cout << "Connexion à la DB..." << endl;
        if(db.open())
        {
            std::cout << "Vous êtes maintenant connecté à " << q2c(db.hostName()) << std::endl;
            QSqlQuery query(db);
            //query.prepare("SELECT user_id FROM phpbb_users WHERE username_clean=? AND user_password=?");
            //query.addBindValue(log);
            //query.addBindValue(QCryptographicHash::hash(pass.toLocal8Bit(),QCryptographicHash::Md5));

            cout << "SELECT * FROM identifiants WHERE username_clean='" << q2c(log) << "' AND user_password='" << q2c(pass) << "'" << endl;
            if(query.exec("SELECT * FROM identifiants WHERE username_clean='"+log+"' AND user_password='"+pass+"'"))
            {
                int count=0;
                    while(query.next())
                    {
                        count++;
                    }
                    if(count==1)
                    {
                        std::cout << "username & password correct" << std::endl;
                        lconnectStatus->setText("<font color='green'>Identifiants corrects !</font>");
                        sleep(1);
                        emit PasswordIsValid();
                    }
                    else if(count<1){
                        std::cout << "username &/or password incorrect" << std::endl;
                        lconnectStatus->setText("<font color='red'>Identifiants incorrects !</font>");
                        login->clear();
                        password->clear();
                    }




            }
            else
            {
                std::cout << "Requête incorrecte" << std::endl << q2c(query.lastError().text()) << std::endl;
                lconnectStatus->setText("<font color='red'>Erreur requête</font>");
            }

            db.close();
        }
        else
        {
            std::cout << "La connexion a échouée, désolé" << std::endl;
            lconnectStatus->setText("<font color='red'>La connexion a échouée</font>");
        }




    }
    cout << "Login = " << q2c(log) << " et Pass = " << q2c(pass) << endl;
}

/*void LoginDialog::reject() {
    cout << "Button Close pressed" << endl;
    hide();
}*/
