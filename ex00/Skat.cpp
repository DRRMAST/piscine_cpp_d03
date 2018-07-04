#include "Skat.h"
Skat::Skat(std::string const& name,int stimPaks) : _name(name),_stimPaks(stimPaks)
{}

Skat::~Skat()
{}

int& Skat::stimPaks()
{
	int& re = this->_stimPaks;
	return re;
}

const std::string& Skat::name()
{
	return this->_name;
}

void Skat::shareStimPaks(int number,int& stock)
{
	if((this->_stimPaks - number) < 0)
	{
		std::cout << "Don't be greedy" << std::endl;
		return;
	}
	else
	{
		stock += number;
		(this->_stimPaks) -= number;
		std::cout << "Keep the change." << std::endl;
	}
	
}
void Skat::addStimPaks(unsigned int number)
{
	if(number == 0)
	{
		std::cout << "Hey boya, did you forget something ?" << std::endl;
	}
	else 
	{
		(this->_stimPaks) += number;
	}
}

void Skat::useStimPaks()
{
	if(this->_stimPaks > 0)
	{
		(this->_stimPaks) -= 1;
		std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
	}
	else
		std::cout << "Mediiiiiic" << std::endl;
}

void Skat::status()
{
	std::cout << "Soldier " << this->name() << " reporting " << this->stimPaks() << " stimpaks remaining sir !" << std::endl;
}
