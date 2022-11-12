#pragma once
#include "Animal.h"
class Dog :
    public Animal
{
public:
	void changeGurim(int num);
	void printGurim();
	void printDog();
private:
	int gurimCount;
	
};

