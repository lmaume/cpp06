#include <iostream>
#include "Base.hpp"

int main()
{
	Base base;

	Base* random = base.generate();
	random->identify(random);
	random->identify(*random);
	delete random;
}
