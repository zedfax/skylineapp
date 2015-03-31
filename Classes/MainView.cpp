// MainView.cpp

// Includes qt
#include <QMessageBox>

// Includes application
#include "MainView.h"
#include <iostream>
using namespace std;

MainView::MainView()
{
    //MainView *mview = new MainView();
    // Construction de la vue
    setupUi(this);
    //Création d'un popup de login
    LoginDialog* login = new LoginDialog();
    //Affichage du popup
    login->show();
    //lorsque le signal comme quoi le password est bon est reçu la mainview s'affiche
    QObject::connect(login, SIGNAL(PasswordIsValid()), this, SLOT(show()));

    // Connexion des signaux des différents widgets et boutons de la vue

    QObject::connect(actionQuitter,SIGNAL(triggered()),this,SLOT(close()));
    //QObject::connect(login,SIGNAL(PasswordIsValid()),this,SLOT(show()));

//    QObject::connect(pbClose, SIGNAL(clicked()), this, SLOT(close()));
}

/**
 * Destructeur
 */
MainView::~MainView()
{
}

/*void MainView::test() {
    this->show();
}*/
