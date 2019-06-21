//
// Created by eclat on 15/04/2019.
//

#ifndef CPP_CHARACTER_HH
#define CPP_CHARACTER_HH

#include "AbstractEntity.hh"


class Character : public AbstractEntity {
private:
    double X;
    double Y;
    int life;

public:
    double GetX() const;
    void SetX(double x);
    double GetY() const;
    void SetY(double y);
    int GetLife() const;
    void SetLife(int life);
    virtual ~Character();

protected:
    Character();

};


#endif //CPP_CHARACTER_HH
