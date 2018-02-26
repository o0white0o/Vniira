#ifndef UDP_H
#define UDP_H

#include <QObject>
#include <QUdpSocket>
class UDP : public QObject
{
    Q_OBJECT
public:
    explicit UDP(QObject *parent = 0);
    void sendDatagrams(QString str);
public slots:
    void readPendingDatagrams();
private:
    QUdpSocket *socket;
};

#endif // UDP_H
