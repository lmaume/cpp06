#include <iostream>
#include "Serializer.hpp"

int main()
{
	Data			values("bonjour", 42);
	uintptr_t		valPtr = Serializer::serialize(&values);
	Data*			Copy = Serializer::deserialize(valPtr);

	std::cout << "Converted :\t" << Copy << "\n";
	std::cout << "Convertedn't :\t" << &values << "\n\n";

	std::cout << "Converted :\t" << Copy->getStr() << " " << Copy->getValue() << "\n";
	std::cout << "Convertedn't :\t" << values.getStr() << " " << values.getValue() << "\n";
}
