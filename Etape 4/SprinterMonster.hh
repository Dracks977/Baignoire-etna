//
// Created by eclat on 17/04/2019.
//

#ifndef CPP_SPRINTERMONSTER_HH
#define CPP_SPRINTERMONSTER_HH

#include "Character.hh"

class SprinterMonster : public Character {
public:
    virtual void Update() override;
    SprinterMonster();
    ~SprinterMonster(){};
};


#endif //CPP_SPRINTERMONSTER_HH
