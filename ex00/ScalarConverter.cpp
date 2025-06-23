#include "ScalarConverter.hpp"

bool	isNum(std::string str)
{
	int i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (std::isdigit(str[i]) == false)
			return false;
		i++;
	}
	return true;
}

template <class Type>
void	display(Type value)
{
	if (static_cast<long int>(value) > 2147483647 || static_cast<long int>(value) < -2147483648)
		std::cout << "char: impossible\nint: impossible\n";
	else
	{
		if (isprint(static_cast<char>(value)))
			std::cout << "char: " << "'" << static_cast<char>(value) << "'" << std::endl;
		else
			std::cout << "char: Non displayable\n";
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	}
	if (static_cast<double>(value) < -3.40282e+38 || static_cast<double>(value) > 3.40282e+38)
		std::cout << "float: impossible\n";
	else
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(value) << "f" << std::endl;
	if (static_cast<long double>(value) < -1.79769e+308 || static_cast<long double>(value) > 1.79769e+308)
		std::cout << "double: impossible\n";
	else
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(value) << std::endl;
}

bool	nanException(std::string str)
{
	if (str == "nan")
	{
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n";
		return true;
	}
	return false;
}

bool	infException(std::string str)
{
	if (str.find("inf") != std::string::npos)
	{
		if (str == "inf" || str == "+inf")
			std::cout << "char: impossible\nint: impossible\nfloat: inff\ndouble: inf\n";
		else if (str == "-inf")
			std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf\n";
		return true;
	}
	return false;
}

void	ScalarConverter::convert(std::string str)
{
	if (nanException(str) == true || infException(str) == true)
		return ;
	if (str.find('.') != std::string::npos && std::isdigit(str[str.find('.') - 1]) != false)
	{
		if (str[str.length() - 1] == 'f')
		{
			float value = std::atof(str.c_str());
			display(value);
		}
		else
		{
			double value = std::atof(str.c_str());
			display(value);
		}
	}
	else if (isNum(str) == true)
	{
		long int value = std::atol(str.c_str());
		display(value);
	}
	else
	{
		char value = str[0];
		display(value);
	}
}
