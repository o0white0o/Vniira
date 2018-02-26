#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDebug>
#include <QTimer>
#include "udp.h"
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
    void on_UploadFile_clicked();

    void on_Send_clicked();
    void processOneThing();
private:
    Ui::MainWindow *ui;
    QStringList data_file;
    UDP Client;
    QTimer *T0;

};

#endif // MAINWINDOW_H
