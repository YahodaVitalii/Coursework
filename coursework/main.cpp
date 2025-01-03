#include "mainwindow.h"

#include <QApplication>
#include "sqlitedbmanager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DBManager* dbManager = SqliteDBManager::getInstance();

    dbManager->connectToDataBase();
    MainWindow w(dbManager);
    w.show();
    return a.exec();
}
