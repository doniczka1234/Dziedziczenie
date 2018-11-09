#include "klasa_podst.h"
#ifndef kl_poch
#define  kl_poch
// klasa kolo dziedziczy publicznie z klasy punkt
class Kolo :public Punkt
{
	//atrybuty
protected:
	float r;
	std::string nazwa;

	//metody
public:
	void wyswietl();
	Kolo(std::string nk="Kolko", std::string np="S", float a=1, float b=2, float pr=3);
};

class Kula :public Kolo
{
public:
	std::string nazwa;
	Kula(std::string nku = "Kula", std::string nk = "Kolko", std::string np = "S", float a = 1, float b = 2, float pr = 3);
	void wyswietl();
};
#endif // !kl_poch

