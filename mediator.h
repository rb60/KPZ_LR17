#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <QObject>
#include <QList>
#include <QString>
#include <QPushButton>
#include <QMainWindow>
#include "bulbdrawer.h"

class Mediator : public QObject
{
    Q_OBJECT
public:
    BulbDrawer* bulbA;
    BulbDrawer* bulbB;
    BulbDrawer* bulbC;
    explicit Mediator(QObject *parent = nullptr);

public slots:
    void Notify(const QString& event);
};

#endif // MEDIATOR_H
