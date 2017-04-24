#ifndef MYMODEL_H
#define MYMODEL_H

#endif // MYMODEL_H

// mymodel.h

enum SpaceshipType { JetFighter, HeavyFighter, Cruiser, Drednot, Destroyer, SuperDestroyer };

class Spaceship
{
public:
    Spaceship(SpaceshipType type);

    int getAttack() const;
    void setAttack(int value);

    int getDefense() const;
    void setDefense(int value);

    int getRange() const;
    void setRange(int value);

private:
    int attack;
    int defense;
    int range;

};
