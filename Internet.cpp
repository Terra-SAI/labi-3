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
	cout << "������� ������������ �������� �����������: ";
	speed = checkPositiveDoubleNumber();
	cout << "������� ������ ������ �������: ";
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
	cout << "� ���� ��������\n";
	Sell::showInfo();
	cout << "������������ ��������:" << speed << "\n����� �������:" << amount << " ��" << endl;
}
