#include "klasa_podst.h"
#ifndef kl_poch
#define  kl_poch
// klasa kolo dziedziczy publicznie z klasy punkt
class Kolo :public Punkt
{
	//atrybuty
	float r;
	std::string nazwa;

	//metody
public:
	void wyswietl();
	Kolo(std::string nk="Kolko", std::string np="S", float a=0, float b=0, float pr=1);
};

#endif // !kl_poch

