#include "mediator.h"

Mediator::Mediator(QObject *parent)
    : QObject{parent},
    bulbA(nullptr),
    bulbB(nullptr),
    bulbC(nullptr)
{}

void Mediator::Notify(const QString &event)
{
    if(event == "1" && bulbA != nullptr)
    {
        bulbA->setOn(!bulbA->getOn());
        bulbA->update();
        bulbB->setOn(!bulbB->getOn());
        bulbB->update();
    }

    if(event == "2" && bulbA != nullptr)
    {
       bulbB->setOn(!bulbB->getOn());
       bulbB->update();
       bulbC->setOn(!bulbC->getOn());
       bulbC->update();
    }

    if(event == "3" && bulbA != nullptr)
    {
        bulbA->setOn(!bulbA->getOn());
        bulbA->update();
        bulbC->setOn(!bulbC->getOn());
        bulbC->update();
    }

}

