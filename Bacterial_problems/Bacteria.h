#pragma once
#include "Dish.h"

class Bacteria
{
	bool isAlive = true;

protected:
	const int xCoordinate;
	const int yCoordinate;
	int distance;

public:
	char sign;
	Bacteria();
		int x, int y)
	//lista inicjalizacyjna
		//: xCoordinate(x), 
		//yCoordinate(y) {}

	void setLifeStatus(bool life);
	bool getLifeStatus();

	virtual bool checkNearby() = 0;

	virtual Bacteria *split() = 0;
};



//opcja1
	//funcja split() -> nowy obiekt bakterii jeśli warunki spełnione
	//na szalce: wywołujemy split i umieszczamy odpowiednio na szalce

//opcja2
	//split(*bakteria) na szalce, 

//checkNearby - klasa czysto wirtualna, bo każda bakteria ma inne warunki; tylko wspólny interfejs