#ifndef kl_podst
#define  kl_podst
#include <iostream>
#include <string>
class Punkt
{
	float x, y;
	std::string nazwa;

public:
	void wyswietl(); 
	Punkt(std::string n="S", float a=0, float b=0);
};

#endif // !kl_podst
