#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QGraphicsScene>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private slots:
    void on_actionZamknij_triggered();

private:
    Ui::MainWindow *ui;
    QPixmap backgroundImage;
    QImage  *backgroundImageObject;
    QGraphicsScene *scene;

protected:
    void showEvent(QShowEvent *);
    void resizeEvent(QResizeEvent *);

};

#endif // MAINWINDOW_H
