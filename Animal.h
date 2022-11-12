#pragma once
#include <iostream> 
class Animal
{
public:
	int code;
	char name[100];
	void newCode(int num);
	void printCode();
	void newName(char name[100]);
	void print();
};

