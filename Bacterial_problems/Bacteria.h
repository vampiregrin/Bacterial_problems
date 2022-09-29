#pragma once
class Bacteria
{
private:
	//int xCoordinate;
	//int yCoordinate;

protected:
	int distance;
	
	bool isAlive = true;

public:
	char sign;
	//Bacteria();
	//	//int x, int y)
	////lista inicjalizacyjna
	//	//: xCoordinate(x), 
	//	//yCoordinate(y) {}

	virtual bool getIsAlive();
	
	//setter nie będzie potrzebny? -> zamiast tego: 
	//warunki niespełnione -> bakteria umiera -> niszczymy obiekt 
	virtual void setIsAlive();

	//checkNearby - klasa czysto wirtualna, bo każda bakteria ma inne warunki; tylko wspólny interfejs
	virtual bool checkNearby() = 0;

	virtual Bacteria *split() = 0;
};



//opcja1
	//funcja split() -> nowy obiekt bakterii jeśli warunki spełnione
	//na szalce: wywołujemy split i umieszczamy odpowiednio na szalce

//opcja2
	//split(*bakteria) na szalce, 

