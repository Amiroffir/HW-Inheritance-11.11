#include "Dog.h"

void Dog::changeGurim(int num) {
	
		gurimCount = num;
	
}

void Dog::printGurim() {

	printf("gurimCount: ", gurimCount);

};
void Dog::printDog() {
	printf("Dog name is:%s ", name);
	printf("Dog Code is:%d ", code);
	printGurim();
};