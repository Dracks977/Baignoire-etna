//
// Created by eclat on 17/04/2019.
//

#ifndef CPP_ZOMBIEMONSTER_HH
#define CPP_ZOMBIEMONSTER_HH

#include "Character.hh"

class ZombieMonster : public Character {
public:
    virtual void Update() override;
    ZombieMonster();
    ~ZombieMonster(){};
};


#endif //CPP_ZOMBIEMONSTER_HH
