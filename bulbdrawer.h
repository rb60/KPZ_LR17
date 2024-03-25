#ifndef BULBDRAWER_H
#define BULBDRAWER_H

#include <QWidget>
#include <QImage>

class BulbDrawer : public QWidget
{
    Q_OBJECT
private:
    QImage onBulb;
    QImage offBulb;
    bool on;
public:
    explicit BulbDrawer(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent* pe);
    bool getOn() const;
    void setOn(bool newOn);
};

#endif // BULBDRAWER_H
