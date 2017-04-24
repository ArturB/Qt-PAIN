// main.cpp
#include <QtWidgets/QApplication>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "Spaceship.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow mainWindow;
    //mainWindow.setGeometry(100, 100, 800, 500);
    mainWindow.show();

    return app.exec();
}
