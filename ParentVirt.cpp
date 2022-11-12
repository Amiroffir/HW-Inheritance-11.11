#include "ParentVirt.h"
#include <iostream>
void ParentVirt::DoOtherSomething() {
	DoSomething();
}
void ParentVirt::DoSomething() {
	printf("ParentVirt::DoSomething()");
}