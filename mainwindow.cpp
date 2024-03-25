#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSignalMapper>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    mediator.bulbA = ui->bulbDrawer1;
    mediator.bulbB = ui->bulbDrawer2;
    mediator.bulbC = ui->bulbDrawer3;

    QSignalMapper* mapper = new QSignalMapper(this);
    connect(mapper, &QSignalMapper::mappedString, &mediator, &Mediator::Notify);

    connect(ui->pushButton1, &QPushButton::clicked, mapper, qOverload<>(&QSignalMapper::map));
    mapper->setMapping(ui->pushButton1, "1");

    connect(ui->pushButton2, &QPushButton::clicked, mapper, qOverload<>(&QSignalMapper::map));
    mapper->setMapping(ui->pushButton2, "2");

    connect(ui->pushButton3, &QPushButton::clicked, mapper, qOverload<>(&QSignalMapper::map));
    mapper->setMapping(ui->pushButton3, "3");

}

MainWindow::~MainWindow()
{
    delete ui;
}
