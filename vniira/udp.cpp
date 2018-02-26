#include "udp.h"

UDP::UDP(QObject *parent) : QObject(parent)
{
    socket = new QUdpSocket(this);
    socket->bind(QHostAddress::LocalHost,4321);
    connect(socket,SIGNAL(readyRead()),this,SLOT(readPendingDatagrams()));
}

void UDP::sendDatagrams(QString data)
{
    QByteArray datagram;
    datagram.append(data);
    socket->writeDatagram(datagram,QHostAddress::LocalHost,4321);


}

void UDP::readPendingDatagrams()
{
    QByteArray Buffer;
    Buffer.resize(socket->pendingDatagramSize());
    socket->readDatagram(Buffer.data(),Buffer.size());
    emit sendToMainWindow(Buffer);
}
