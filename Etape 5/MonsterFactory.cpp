//
// Created by eclat on 17/04/2019.
//

#include "MonsterFactory.hh"

Character* MonsterFactory::Create(const std::string &op) {
    if (op == "ZombieMonster") {
        return new ZombieMonster();
    } else if (op == "SprinterMonster") {
        return  new SprinterMonster();
    } else {
        return NULL;
    }
}
