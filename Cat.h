#pragma once
#include "Animal.h"
class Cat :
    public Animal
{
public:
	void changeGurim(int num);
	void printGurim();
	void printCat();
private:
	int gurimCount;
	int age;
};

