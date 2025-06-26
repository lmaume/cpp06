#ifndef DATA_HPP
# define DATA_HPP

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>
#include <stdint.h>

class Data
{
	private:
		std::string _str;
		uintptr_t	_value;
	public:
		std::string getStr();
		uintptr_t	getValue();
		void		setStr(std::string str);
		void		setValue(uintptr_t value);
		Data();
		Data(std::string str);
		Data(std::string str, uintptr_t value);
		~Data();
};

#endif