//
// Created by eclat on 15/04/2019.
//

#ifndef CPP_ABSTRACTENTITY_HH
#define CPP_ABSTRACTENTITY_HH


class AbstractEntity {
public:
    virtual void Draw();
    virtual void Update();
    virtual ~AbstractEntity();

protected:
    AbstractEntity();


};


#endif //CPP_ABSTRACTENTITY_HH
