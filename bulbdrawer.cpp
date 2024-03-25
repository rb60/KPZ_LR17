#include "bulbdrawer.h"
#include <QPainter>

bool BulbDrawer::getOn() const
{
    return on;
}

void BulbDrawer::setOn(bool newOn)
{
    on = newOn;
}

BulbDrawer::BulbDrawer(QWidget *parent)
    : QWidget{parent},
    onBulb(":/bulbs/on_bulb.png"),
    offBulb(":/bulbs/off_bulb.png"),
    on(true)
{
}

void BulbDrawer::paintEvent(QPaintEvent *pe)
{
    QPainter painter(this);
    painter.drawImage(0,0, on ? onBulb : offBulb);
    painter.end();
}
