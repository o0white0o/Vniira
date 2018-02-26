#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDebug>
#include <QTimer>
#include <QFile>
#include "udp.h"
#include "ui_mainwindow.h"

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
    void getUdpData(QByteArray newLine);
    void processOneThing();
private:
    Ui::MainWindow *ui;
    QList<QStringList> parser(QString str);
    bool changeColor(QFrame *frame, QString label, QString mode);
    bool fillWidget(QList<QStringList> dataForWidget);
    bool fillNav(QList<QStringList> dataForWidget);
    bool fillLnd(QList<QStringList> dataForWidget);
    void setFailStyle(QFrame *frame);
    void setWidgetWithoutData();
    void setDefaultStyle();
    void resetTextLabel();
    UDP server;
    QTimer *T0;
    const QString blackFrame = "border-style: outset;\n"
                   "border-width: 2px;\n";
    const QString backgroundRedColor = "background-color: red;";
    const QString backgroundYellowColor = "background-color: yellow;";
    const QString backgroundGreenColor = "background-color: LightGreen;";
    const QString backgroundGreyColor = "background-color: LightGrey;";
};

#endif // MAINWINDOW_H
