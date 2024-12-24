#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebChannel>
#include <QPushButton>
#include <QPair>
#include <QtAlgorithms>
#include <QtMath>
#include "bridge.h"
#include "dsu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void inputFinish();

private:
    Ui::MainWindow *ui;
    Bridge* bridge;
    QVector<QPair<double, double>> points;
private slots:
    void cleanMap();
    void cleanLine();
    void getPoint();
    void input(double x, double y);
    void calc();
};
#endif // MAINWINDOW_H