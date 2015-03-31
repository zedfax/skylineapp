#include <QApplication>
#include "MainView.h"
#include "LoginDialog.h"
#include <QTextCodec>

int main(int argc, char *argv[])
{
	QApplication skyapp(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
            QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
            QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    MainView w;
    LoginDialog l;
    //Popup login
    //l.show();
    //Check si login bon
    //w.show();

    return skyapp.exec();
}

