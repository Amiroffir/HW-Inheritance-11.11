#include "Cat.h"
void Cat::changeGurim(int num) {

	gurimCount = num;

}

void Cat::printGurim() {

	printf("gurimCount: ", gurimCount);

};
void Cat::printCat() {
	printf("Cat name is: %s ", name);
	printf("Cat Code is: %d ", code);
	printf("Cat age is: %d ", age);
	printGurim();
};