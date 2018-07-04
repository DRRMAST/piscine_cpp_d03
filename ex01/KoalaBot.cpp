#include "KoalaBot.h"
#include "Parts.h"
#include <iostream>
KoalaBot::KoalaBot(std::string const& serial)
{
	this->_serial = serial;
}
KoalaBot::~KoalaBot()
{
}

void KoalaBot::setParts(Arms const& arms)
{
	this->_arms = arms;
}
void KoalaBot::setParts(Legs const& legs)
{
	this->_legs = legs;
}
void KoalaBot::setParts(Head const& head)
{
	this->_head = head;
}
void KoalaBot::swapParts(Arms& arms)
{
	Arms t;
	t = this->_arms;
	this->_arms = arms;
	arms = t;
}
void KoalaBot::swapParts(Legs& legs)
{
	Legs t;
	t = this->_legs;
	this->_legs = legs;
	legs = t;
}
void KoalaBot::swapParts(Head& head)
{
	Head t;
	t = this->_head;
	this->_head = head;
	head = t;
}
void KoalaBot::informations()
{
	std::cout << "[KoalaBot] " << this->_serial << std::endl;
	this->_arms.informations();
	this->_legs.informations();
	this->_head.informations();
}
bool KoalaBot::status()
{
	bool status = this->_arms.isFunctionnal() && this->_legs.isFunctionnal() && this->_head.isFunctionnal();
	return status;
}
