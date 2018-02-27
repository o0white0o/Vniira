#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&server,SIGNAL(sendToMainWindow(QByteArray)),this,SLOT(getUdpData(QByteArray)));
    T0 = new QTimer(this);
    connect(T0, SIGNAL(timeout()), this, SLOT(processOneThing()));
    T0->setInterval(1000);
    T0->start();
    setDefaultStyle();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setDefaultStyle()
{
    resetTextLabel();
    ui->LND->setStyleSheet("QLabel{"+blackFrame+backgroundGreyColor+"}");
    ui->NAV->setStyleSheet("QLabel{"+blackFrame+backgroundGreyColor+"}");
}
void MainWindow::setFailStyle(QFrame *frame)
{
    frame->setStyleSheet("QLabel{"+blackFrame+backgroundRedColor+"}");
}
void MainWindow::setWidgetWithoutData()
{
    setDefaultStyle();
    ui->LND->setStyleSheet("QLabel{"+blackFrame+backgroundGreyColor+"}"
                           "QLabel#LND_label{"+blackFrame+backgroundRedColor+"}");
    ui->NAV->setStyleSheet("QLabel{"+blackFrame+backgroundGreyColor+"}"
                           "QLabel#NAV_label{"+blackFrame+backgroundRedColor+"}");
}
void MainWindow::resetTextLabel()
{
    ui->text_lnd_ch->setText("---");
    ui->text_lnd_d->setText("---");
    ui->text_lnd_g->setText("---");
    ui->text_lnd_k->setText("---");
    ui->text_nav_a->setText("---");
    ui->text_nav_ch->setText("---");
    ui->text_nav_d->setText("---");
}
bool MainWindow::changeColor(QFrame *frame,QString label, QString mode)
{
    QString backgroundColor;
    if (mode=="NORM")
        backgroundColor = backgroundGreenColor;
    else if (mode=="NRDY")
        backgroundColor = backgroundGreyColor;
    else if(mode=="TEST")
        backgroundColor = backgroundYellowColor;
    else
        return false;
    frame->setStyleSheet(frame->styleSheet()+
                         "QLabel#"+label+"{"+blackFrame+backgroundColor+"}");
    return true;
}

QList<QStringList> MainWindow::parser(QString str)
{
    QList<QStringList> dataForTheWidget;
    foreach(const QString &lst, str.split(", "))
       dataForTheWidget << lst.split(' ');
    return dataForTheWidget;
}

bool MainWindow::fillWidget(QList<QStringList> dataForWidget)
{
    if(dataForWidget.length()<6)
        return false;
    if(dataForWidget[0].length()<2)
        return false;
    if(dataForWidget[0][1]=="NAV")
        return fillNav(dataForWidget);
    else if (dataForWidget[0][1]=="LND")
        return fillLnd(dataForWidget);
    else
        return false;

}

bool MainWindow::fillNav(QList<QStringList> dataForWidget)
{
    if(dataForWidget[1][0]=="FAIL" || dataForWidget[2][0]=="FAIL"
            || dataForWidget[3][0]=="FAIL")
    {
        setFailStyle(ui->NAV);
        return true;
    }
    if(!changeColor(ui->NAV,"NAV_CH",dataForWidget[1][0]) ||
            !changeColor(ui->NAV,"NAV_A",dataForWidget[2][0]) ||
            !changeColor(ui->NAV,"NAV_D",dataForWidget[3][0]))
        return false;
    changeColor(ui->NAV,"NAV_label","NORM");
    ui->text_nav_ch->setText(dataForWidget[1][1]);
    ui->text_nav_a->setText(dataForWidget[2][1]);
    ui->text_nav_d->setText(dataForWidget[3][1]);
    return true;
}
bool MainWindow::fillLnd(QList<QStringList> dataForWidget)
{
    if(dataForWidget[1][0]=="FAIL" || dataForWidget[3][0]=="FAIL"
            || dataForWidget[4][0]=="FAIL" || dataForWidget[5][0]=="FAIL")
    {
        setFailStyle(ui->LND);
        return true;
    }
    if(!changeColor(ui->LND,"LND_CH",dataForWidget[1][0]) ||
            !changeColor(ui->LND,"LND_D",dataForWidget[3][0]) ||
            !changeColor(ui->LND,"LND_K",dataForWidget[4][0]) ||
            !changeColor(ui->LND,"LND_G",dataForWidget[5][0]))
        return false;
    changeColor(ui->LND,"LND_label","NORM");
    ui->text_lnd_ch->setText(dataForWidget[1][1]);
    ui->text_lnd_d->setText(dataForWidget[3][1]);
    ui->text_lnd_k->setText(dataForWidget[4][1]);
    ui->text_lnd_g->setText(dataForWidget[5][1]);
    return true;
}

void MainWindow::getUdpData(QByteArray newLine)
{
    T0->setInterval(1000);
    T0->start();
    setDefaultStyle();
    qDebug()<<newLine;
    QList<QStringList> dataForWidget = parser(QString(newLine));
    qDebug()<<dataForWidget;
    if(!fillWidget(dataForWidget))
        setWidgetWithoutData();

}

void MainWindow::processOneThing()
{
    setWidgetWithoutData();
}


