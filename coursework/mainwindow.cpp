#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTabBar>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget_user->tabBar()->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

