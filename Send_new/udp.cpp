#include "udp.h"

UDP::UDP(QObject *parent) : QObject(parent)
{
    socket = new QUdpSocket(this);
    socket->bind(QHostAddress::LocalHost,1234);
    //connect(socket,SIGNAL(readyRead()),this,SLOT(readPendingDatagrams()));
}

void UDP::sendDatagrams(QString str)
{
    QByteArray Data;
    Data.append(str);
    socket->writeDatagram(Data,QHostAddress::LocalHost,4321);
}

void UDP::readPendingDatagrams()
{
    QByteArray Buffer;
    Buffer.resize(socket->pendingDatagramSize());
    QHostAddress sender;
    quint16 senderPort;
    socket->readDatagram(Buffer.data(),Buffer.size(),&sender,&senderPort);
    qDebug()<<Buffer;
}
