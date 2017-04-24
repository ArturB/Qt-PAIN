// mymodel.cpp
#include "Spaceship.h"
#include <QFont>
#include <QBrush>
#include <QDebug>
#include <QTime>
#include <QModelIndex>
#include <QTimer>

Spaceship::Spaceship(SpaceshipType type) {
    switch(type) {
    case JetFighter:
        attack = 10;
        defense = 5;
        range = 2;
        break;

    case HeavyFighter:
        attack = 20;
        defense = 8;
        range = 3;
        break;

    case Cruiser:
        attack = 50;
        defense = 20;
        range = 4;
        break;

    case Drednot:
        attack = 100;
        defense = 40;
        range = 7;
        break;

    case Destroyer:
        attack = 300;
        defense = 80;
        range = 10;
        break;

    case SuperDestroyer:
        attack = 500;
        defense = 90;
        range = 12;
    }
}

int Spaceship::getAttack() const
{
    return attack;
}

void Spaceship::setAttack(int value)
{
    attack = value;
}

int Spaceship::getDefense() const
{
    return defense;
}

void Spaceship::setDefense(int value)
{
    defense = value;
}

int Spaceship::getRange() const
{
    return range;
}

void Spaceship::setRange(int value)
{
    range = value;
}




