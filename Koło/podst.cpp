#include "klasa_podst.h"

void Punkt::wyswietl()
{
	std::cout << nazwa << "(" << x << "," << y << ")" << std::endl;
}
Punkt::Punkt(std::string xd, float a, float b)
{
	nazwa = xd;
	x = a;
	y = b;
}