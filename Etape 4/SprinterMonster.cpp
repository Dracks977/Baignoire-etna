//
// Created by eclat on 17/04/2019.
//

#include "SprinterMonster.hh"
#include "TimeManager.hh"

SprinterMonster::SprinterMonster(){
    this->SetX(0);
    this->SetY(0);
    this->SetLife(25);
}

void SprinterMonster::Update() {
    this->SetX(GetX() + (TimeManager::GetInstance().GetElapsedTime() * 0.005));
    this->SetY(GetY() + (TimeManager::GetInstance().GetElapsedTime() * 0.005));
}