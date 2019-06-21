//
// Created by eclat on 17/04/2019.
//

#ifndef CPP_MONSTERFACTORY_HH
#define CPP_MONSTERFACTORY_HH

#include "Character.hh"
#include <string>
#include "ZombieMonster.hh"
#include "SprinterMonster.hh"


class MonsterFactory {
public:
    Character* Create(const std::string&);
};


#endif //CPP_MONSTERFACTORY_HH
