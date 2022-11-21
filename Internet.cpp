#include "Internet.h"

Internet::Internet()
{
	speed = amount = 0;
}

Internet::Internet(int a, double s)
{
	this->amount = a;
	this->speed = s;
}

void Internet::setInfo()
{
	Sell::getSell();
	cout << "Введите максимальную скорость подключения: ";
	speed = checkPositiveDoubleNumber();
	cout << "Введите размер пакета трафика: ";
	amount = checkPositiveIntNumber();
}

int Internet::getAmount()
{
	return amount;
}

double Internet::getSpeed()
{
	return speed;
}

void Internet::showInfo()
{
	cout << "Я есть Интернет\n";
	Sell::showInfo();
	cout << "Максимальная скорость:" << speed << "\nПакет трафика:" << amount << " Гб" << endl;
}
