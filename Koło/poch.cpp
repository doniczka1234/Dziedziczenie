#include "klasa_pochodna.h"
#include <math.h>
void Kolo::wyswietl()
{
	std::cout << "Kolo o nazwie: " << nazwa << std::endl;
	std::cout << "Srodek kola: " << std::endl;
	Punkt::wyswietl();
	std::cout << "Promien: " << r << std::endl;
	std::cout << "Pole kola: " << 3.14 * r*r << std::endl;
}

Kolo::Kolo(std::string nk, std::string np, float a, float b, float pr)
	:Punkt(np,a,b)
{
	nazwa = nk;
	r = pr;
}

Kula::Kula(std::string nku, std::string nk, std::string np, float a, float b, float pr)
	:Kolo(nk, np, a, b, pr)
{
	nku = nazwa;
}
void Kula::wyswietl()
{
	std::cout << "Kula o nazwie: " << nazwa << std::endl;
	Kolo::wyswietl();
	std::cout << "Objetosc Kuli: "<< (4 / 3) * 3.14*r*r*r <<std::endl;
}