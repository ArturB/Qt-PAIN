#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QResizeEvent>
#include <QGraphicsPixmapItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    backgroundImageObject = new QImage();
    backgroundImageObject->load(":/deep-space.jpg");

    QImage* jetfighterobject = new QImage();
    jetfighterobject->load(":/jetfighter.jpg");
    QPixmap jetfighter = QPixmap::fromImage(*jetfighterobject);
    jetfighter = jetfighter.scaledToWidth(100);


    QImage* cruiserobject = new QImage();
    cruiserobject->load(":/cruiser.jpg");
    QPixmap cruiser = QPixmap::fromImage(*cruiserobject);
    cruiser = cruiser.scaledToWidth(100);


    QImage* destroyerobject = new QImage();
    destroyerobject->load(":/destroyer.jpg");
    QPixmap destroyer = QPixmap::fromImage(*destroyerobject);
    destroyer = destroyer.scaledToWidth(100);

    backgroundImage = QPixmap::fromImage(*backgroundImageObject);


    scene = new QGraphicsScene(this);
    scene->setSceneRect(QRectF(0,0,900,550));
    backgroundImage = backgroundImage.scaledToWidth(scene->sceneRect().width());
    scene->addPixmap(backgroundImage);

    QGraphicsPixmapItem* jetitem = scene->addPixmap(jetfighter);
    QGraphicsPixmapItem* cruiseritem = scene->addPixmap(cruiser);
    QGraphicsPixmapItem* destroyeritem = scene->addPixmap(destroyer);

    jetitem->setFlag(QGraphicsItem::ItemIsMovable);
    cruiseritem->setFlag(QGraphicsItem::ItemIsMovable);
    destroyeritem->setFlag(QGraphicsItem::ItemIsMovable);

    jetitem->setFlag(QGraphicsItem::ItemIsSelectable);
    cruiseritem->setFlag(QGraphicsItem::ItemIsSelectable);
    destroyeritem->setFlag(QGraphicsItem::ItemIsSelectable);

    ui->graphicsView->setScene(scene);
    //ui->graphicsView->fitInView(scene->sceneRect(), Qt::KeepAspectRatio);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionZamknij_triggered()
{
    QApplication::quit();
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    scene->setSceneRect(QRectF(0,0,event->size().width(),event->size().height()));
    backgroundImage = backgroundImage.scaledToWidth(scene->sceneRect().width());
    //scene->addPixmap(backgroundImage);
}

void MainWindow::showEvent(QShowEvent *) {
    //ui->graphicsView->fitInView(QRectF(0,0,600,600),Qt::KeepAspectRatio);
}
