#ifndef BASE_HPP
# define BASE_HPP

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>
#include <stdint.h>

#include <ctime>

class Base
{
	private:
	public:
		Base*	generate(void);
		void	identify(Base* p);
		void	identify(Base& p);
		Base();
		virtual ~Base();
};

class A : public Base
{
	private:
	public:
};

class B : public Base
{
	private:
	public:
};

class C : public Base
{
	private:
	public:
};

#endif