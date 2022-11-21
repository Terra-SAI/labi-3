#pragma once
#include <iostream>
#include "Baaaaaase.h"
#include "Sale.h"
using namespace std;
class Sell
{
	double price;
	int period;
	Sale sale;
public:
	Sell();
	Sell(double, int, Sale);
	~Sell();
	void setPrice();
	void setSale();
	void setPeriod();
	double getPrice();
	int getPeriod();
	Sell getSell();
	Sale getSale();
	virtual void showInfo();
};

