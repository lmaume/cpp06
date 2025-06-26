#include "Data.hpp"

Data::Data()
{
	setStr("Default");
	setValue(1);
}

Data::Data(std::string str)
{
	setStr(str);
	setValue(2);
}

Data::Data(std::string str, uintptr_t value)
{
	setStr(str);
	setValue(value);
}

Data::~Data()
{

}

std::string Data::getStr()
{
	return this->_str;
}

uintptr_t	Data::getValue()
{
	return this->_value;
}

void		Data::setStr(std::string str)
{
	this->_str = str;
}

void		Data::setValue(uintptr_t value)
{
	this->_value = value;
}
