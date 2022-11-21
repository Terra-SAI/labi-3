#include "Sale.h"

Sale::Sale()
{
	sale = period = 0;
}

Sale::~Sale()
{
}

Sale::Sale(int s, int p)
{
	this->sale = s;
	this->period = p;
}

int Sale::getSale()
{
	return sale;
}

int Sale::getPeriod()
{
	return period;
}

void Sale::setInfo()
{
	cout << "Введите процент скидки: ";
	sale = checkPositiveIntNumber();
	cout << "Введите период действия скидки(в днях): ";
	period = checkPositiveIntNumber();
}

void Sale::showInfo()
{
	cout << "Предоставляется скидка " << sale << "% на период использования " << period << " дней"<< endl;
}
