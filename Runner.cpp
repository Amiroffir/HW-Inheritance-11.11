#include "Runner.h"


void Runner:: run() {
	    // 1,2
		Son son;
		int num = 5;
		int res = son.add2(num);
		//3
		Dog* dog1 = new Dog();
		Dog* dog2 = new Dog();
		Cat* cat1 = new Cat();
		Cat* cat2 = new Cat();
		//4
		
		ParentVirt* parentVirt = new ParentVirt();
		ChildVirt* childVirt = new ChildVirt();
		childVirt->DoOtherSomething();
}