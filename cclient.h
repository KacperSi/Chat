#ifndef CCLIENT_H
#define CCLIENT_H

#include <QObject>

class cclient : public QObject
{
    Q_OBJECT
public:
    explicit cclient(QObject *parent = nullptr);

signals:

};

#endif // CCLIENT_H
