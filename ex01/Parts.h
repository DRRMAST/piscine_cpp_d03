#ifndef PARTS_H
#define PARTS_H
#include <iostream>
class Arms
{
	public:
		Arms(std::string serial = "A-01", bool functional = true); 
		~Arms();
		bool isFunctionnal() const;
		std::string serial() const;
		void informations() const;
		
	private:
		std::string _serial;
		bool _functional;
};

class Legs
{
	public:
		Legs(std::string serial = "L-01", bool functional = true); 
		~Legs();
		bool isFunctionnal() const;
		std::string serial() const;
		void informations() const;
	private:
		std::string _serial;
		bool _functional;
};

class Head
{
	public:
		Head(std::string serial = "H-01", bool functional = true); 
		~Head();
		bool isFunctionnal() const;
		std::string serial() const;
		void informations() const;
	private:
		std::string _serial;
		bool _functional;
};

#endif
