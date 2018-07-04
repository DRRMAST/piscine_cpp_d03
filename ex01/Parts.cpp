#include "Parts.h"

Arms::Arms(std::string serial, bool functional) : _serial(serial),_functional(functional) 
{
}

Arms::~Arms()
{
}

bool Arms::isFunctionnal()
{
	return this->_functional;
}

std::string Arms::serial()
{
	return this->_serial;
}

void Arms::informations()
{
	std::cout << "\t[Parts] Arms " << this->_serial << " status : " ;
	if(this->isFunctionnal())
		std::cout << "OK" << std::endl;
	else 
		std::cout << "KO" << std::endl;
}

Legs::Legs(std::string serial, bool functional) : _serial(serial),_functional(functional) 
{
}

Legs::~Legs()
{
}

bool Legs::isFunctionnal()
{
	return this->_functional;
}

std::string Legs::serial()
{
	return this->_serial;
}

void Legs::informations()
{
	std::cout << "\t[Parts] Legs " << this->_serial << " status : " ;
	if(this->isFunctionnal())
		std::cout << "OK" << std::endl;
	else 
		std::cout << "KO" << std::endl;
}

Head::Head(std::string serial, bool functional) : _serial(serial),_functional(functional) 
{
}

Head::~Head()
{
}

bool Head::isFunctionnal()
{
	return this->_functional;
}

std::string Head::serial()
{
	return this->_serial;
}

void Head::informations()
{
	std::cout << "\t[Parts] Head " << this->_serial << " status : " ;
	if(this->isFunctionnal())
		std::cout << "OK" << std::endl;
	else 
		std::cout << "KO" << std::endl;
}
