#ifndef MAMMALS_H
#define MAMMALS_H

#include "animal.h"



class Mammals : public Animal
{
public:
    Mammals();


    virtual void displayInfo();


    // Get
    bool getSex() {
        return this->sex;
    }

    bool getDangerous() {
        return this->dangerous;
    }

    // Set
    void setSex(bool value) {
        this->sex = value;
    }

    void setDangerous(bool value) {
        this->dangerous = value;
    }

private:
    bool sex;
    bool dangerous;
};

#endif // MAMMALS_H
