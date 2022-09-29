#pragma once
#include "Bacteria.h"
class Bacillus :
    public Bacteria
{
public:
    Bacillus() {
        Bacteria::distance = 1;
        Bacteria::sign = 'B';
   };

virtual bool getIsAlive() override;
virtual void setIsAlive() override {};
virtual bool checkNearby() override { return true; };

virtual Bacteria* split() {
    return nullptr;
}
};
