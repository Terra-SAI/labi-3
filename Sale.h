#pragma once
#include <iostream>
#include "Baaaaaase.h"
using namespace std;
class Sale
{
	int sale, period;
public:
	Sale();
	~Sale();
	Sale(int, int);
	int getSale();
	int getPeriod();
	void setInfo();
	void showInfo();
};

