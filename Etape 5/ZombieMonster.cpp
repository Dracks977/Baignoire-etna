//
// Created by eclat on 17/04/2019.
//

#include "ZombieMonster.hh"
#include "TimeManager.hh"

ZombieMonster::ZombieMonster(){
    this->SetX(0);
    this->SetY(0);
    this->SetLife(100);
}

void ZombieMonster::Update() {
    this->SetX(GetX() + (TimeManager::GetInstance().GetElapsedTime() * 0.001));
    this->SetY(GetY() + (TimeManager::GetInstance().GetElapsedTime() * 0.001));
}