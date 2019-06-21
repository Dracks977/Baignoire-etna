//
// Created by eclat on 20/04/2019.
//

#include "Character.hh"

Character::Character() {}

Character::~Character() {}

IObservable::IObservable(){};

IObservable::~IObservable(){};

IObserver::IObserver(){};

IObserver::~IObserver(){};

double Character::GetX() const
{
    return x;
}

void Character::SetX(double x)
{
    Character::x = x;
    NotifyObservers();
}

double Character::GetY() const
{
    return y;
}

void Character::SetY(double y)
{
    Character::y = y;
    NotifyObservers();
}

int Character::GetLife() const
{
    return life;
}

void Character::SetLife(int life)
{
    Character::life = life;
    NotifyObservers();
}

void Character::NotifyObservers(){
    for (auto *observer : observers){
        observer->Notify(this);
    }
}