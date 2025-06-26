#include "Base.hpp"

Base::Base()
{}

Base::~Base()
{}

Base* Base::generate(void)
{
	std::srand(std::time(0));
	int random = rand();
	if (random % 3 == 0)
	{
		return new A;
	}
	else if (random % 3 == 1)
	{
		return new B;
	}
	else if (random % 3 == 2)
	{
		return new C;
	}
	return NULL;
}

void	Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "*Type A.\n";
		return ;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "*Type B.\n";
		return ;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "*Type C.\n";
		return ;
	}
	return ;
}

void	Base::identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "&Type A.\n";
		return ;
	}
	catch(const std::exception& e){}
		try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "&Type B.\n";
		return ;
	}
	catch(const std::exception& e){}
		try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "&Type C.\n";
		return ;
	}
	catch(const std::exception& e){}
	return ;
}
