//
// Created by eclat on 15/04/2019.
//

#include "Character.hh"

double Character::GetX() const {
    return X;
}

void Character::SetX(double x) {
    X = x;
}

double Character::GetY() const {
    return Y;
}

void Character::SetY(double y) {
    Y = y;
}

int Character::GetLife() const {
    return life;
}

void Character::SetLife(int life) {
    Character::life = life;
}

Character::~Character() {};
Character::Character() {};
