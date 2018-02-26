#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    T0 = new QTimer(this);
    connect(T0, SIGNAL(timeout()), this, SLOT(processOneThing()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_UploadFile_clicked()
{
    QString str = QFileDialog::getOpenFileName(0, "Выбор файла для отправки", "", "*.csv *.txt");
    QFile file(str);
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Ошибка при открытии файла";
    }
    str = file.readAll();
    file.close();
    data_file = str.split("\r\n");
}

void MainWindow::on_Send_clicked()
{
    T0->start(100);
}
void MainWindow::processOneThing()
{
    if(data_file.length()<1)
    {
        qDebug()<<"Нет данных для отправки";
        T0->stop();
        return;
    }
    else
    Client.sendDatagrams(data_file[0]);
    data_file.pop_front();
}

