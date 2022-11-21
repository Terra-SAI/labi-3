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
	//cout << "\n������� �� ����� ��� ����������" << endl;
}

void Sell::setPrice()
{
	cout << "������� ��������� ������(� ������� 1.0): ";
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
	cout << "������� ������ �������������(� ������): ";
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
	cout << "������ ������������� ������: " << period << " �����\n���� ������: " << price <<" ������"<< endl;
	sale.showInfo();
}
