#pragma once
#include "Bacteria.h"
class Coccus :
    public Bacteria
{

public: 
    Coccus() {
        Bacteria::distance = 3;
        Bacteria::sign = 'C';
    }
   //(int x, int y)
     //   : Bacteria(x, y) {
    //}*/

virtual bool getIsAlive() override;
virtual void setIsAlive() override {};
virtual bool checkNearby() override { return true; };

virtual Bacteria* split() {return nullptr;}

};
