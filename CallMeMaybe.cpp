#include "CallMeMaybe.h"

CallMeMaybe::CallMeMaybe()
{
	amountIn = amountOut = 0;
}

CallMeMaybe::CallMeMaybe(int i, int o)
{
	this->amountIn = i;
	this->amountOut = o;
}

int CallMeMaybe::getIn()
{
	return amountIn;
}

int CallMeMaybe::getOut()
{
	return amountOut;
}

void CallMeMaybe::setInfo()
{
	Sell::getSell();
	cout << "������� ���������� ����� ������ ����: ";
	amountIn = checkPositiveIntNumber();
	cout << "������� ���������� ����� ��� ����: ";
	amountOut = checkPositiveIntNumber();
}

void CallMeMaybe::showInfo()
{
	cout << "� ���� ������� �����\n";
	Sell::showInfo();
	cout << "���������� ����� � ����: " << amountIn << "\n���������� ����� ��� ����: " << amountOut << endl;
}
