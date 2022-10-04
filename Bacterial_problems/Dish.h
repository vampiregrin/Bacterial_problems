#pragma once
#include "Bacteria.h"
#include <vector>
#include <memory>

class Dish
{
	std::vector<std::vector<std::shared_ptr<Bacteria>>> container;

public: 
	Dish();
	void displayDish();
	void elapsedTime();

};

