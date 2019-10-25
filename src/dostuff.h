#ifndef DOSTUFF_H
#define DOSTUFF_H

#include <QObject>

class DoStuff : public QObject
{
    Q_OBJECT
public:
    explicit DoStuff(QObject *parent = nullptr);
    Q_INVOKABLE void sayHello();
signals:

public slots:
};

#endif // DOSTUFF_H
