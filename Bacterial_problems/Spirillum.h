#pragma once
#include "Bacteria.h"
class Spirillum :
    public Bacteria
{
public:
    Spirillum() {
        Bacteria :: distance = 2;
        Bacteria :: sign = 'S';
    };

    //    //int x, int y)
    //    //: Bacteria(x, y) {  
    ////}

virtual bool getIsAlive() override;
virtual void setIsAlive() override {};
virtual bool checkNearby() override { return true; };

virtual Bacteria* split() {
    return nullptr;
}
};

