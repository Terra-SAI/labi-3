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
	cout << "������� ������ �������� ��������: ";
	countries = checkInputLine();
}

void Roaming::showInfo()
{ 
	cout << "� ���� �������\n";
	Sell::showInfo();
	cout << "������, ��� ������������ ������ �������: " << countries << endl;
}
