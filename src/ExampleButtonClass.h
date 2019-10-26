#ifndef EXAMPLEBUTTONCLASS_H
#define EXAMPLEBUTTONCLASS_H

#include <QObject>

class ExampleButtonClass : public QObject
{
    Q_OBJECT
public:
    explicit ExampleButtonClass(QObject *parent = nullptr);
    Q_INVOKABLE void exampleFunction();

signals:

public slots:
};

#endif // EXAMPLEBUTTONCLASS_H
