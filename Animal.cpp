#include "Animal.h"
#pragma warning (disable:4996)
void Animal::printCode() {

	printf("Animal code is: %d ", code);

}
void Animal::newName(char name[100]) {
	strcpy(this->name, name);
}
void Animal::print() {

	printf("Animal name is: %s ", name);

}
void Animal::newCode(int num) {
	code = num;
}