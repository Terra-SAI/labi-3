#include "Sell.h"

Sell::Sell()
{
	price = period = 0;
}


Sell::Sell(double price, int period, Sale s)
{
	this->period = period;
	this->price = price;
	this->sale = s;
	if (s.getSale() >= 100) throw 1;
}

Sell::~Sell()
{
	//cout << "\nРаботаю по жизни как деструктор" << endl;
}

void Sell::setPrice()
{
	cout << "Введите стоимость услуги(в формате 1.0): ";
	price = checkPositiveDoubleNumber();

}

void Sell::setSale()
{
	Sale s;
	s.setInfo();
	sale = s;
}

void Sell::setPeriod()
{
	cout << "Введите период использования(в сутках): ";
	period = checkPositiveIntNumber();
}

double Sell::getPrice()
{
	return price;
}

int Sell::getPeriod()
{
	return period;
}

Sell Sell::getSell()
{
	Sell::setPeriod();
	Sell::setPrice();
	Sell::setSale();
	try {
		Sell s(price, period, sale);
	}
	catch (int) {
		throw 1;
	}
	
}

Sale Sell::getSale()
{
	return sale;
}


void Sell::showInfo()
{
	cout << "Период использования услуги: " << period << " суток\nЦена услуги: " << price <<" рублей"<< endl;
	sale.showInfo();
}
