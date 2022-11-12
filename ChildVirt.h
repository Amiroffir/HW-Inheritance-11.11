#pragma once
#include "ParentVirt.h"
#include <iostream>
class ChildVirt :
    public ParentVirt
{
public:
	void DoSomething() {
		
			printf("ChildVirt::DoSomething()");
	}
};


