#ifndef KOALABOT_H
#define KOALABOT_H
#include "Parts.h"
#include <iostream>
class KoalaBot
{
	public:
		KoalaBot(std::string const& serial = "Bob-01");
		~KoalaBot();
		void setParts(Arms const& arms);
		void setParts(Legs const& legs);
		void setParts(Head const& head);
		void swapParts(Arms& arms);
		void swapParts(Legs& arms);
		void swapParts(Head& arms);
		void informations();
		bool status();
	
	private:
		std::string _serial;
		Legs _legs;
		Arms _arms;
		Head _head;
		
};

#endif
