#include "Roaming.h"

Roaming::Roaming()
{
	countries = "";
}

Roaming::Roaming(string c)
{
	this->countries = c;
}

string Roaming::getString()
{
	return countries;
}

void Roaming::setInfo()
{
	Sell::getSell();
	cout << "Введите страны действия роуминга: ";
	countries = checkInputLine();
}

void Roaming::showInfo()
{ 
	cout << "Я есть Роуминг\n";
	Sell::showInfo();
	cout << "Страны, где используется данный роуминг: " << countries << endl;
}
