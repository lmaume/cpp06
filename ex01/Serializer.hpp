#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include "Data.hpp"

#include <cstdlib>
#include <stdint.h>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>

class Serializer
{
	private:
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif