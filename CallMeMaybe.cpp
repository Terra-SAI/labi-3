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
	cout << "Введите количество минут внутри сети: ";
	amountIn = checkPositiveIntNumber();
	cout << "Введите количество минут вне сети: ";
	amountOut = checkPositiveIntNumber();
}

void CallMeMaybe::showInfo()
{
	cout << "Я есть Сотовая Связь\n";
	Sell::showInfo();
	cout << "Количество минут в сети: " << amountIn << "\nКоличество минут вне сети: " << amountOut << endl;
}
