#pragma once
#include "Sell.h"
class Internet :   public Sell
{
	double speed;
	int amount;
public:
	Internet();
	Internet(int a, double s);
	void setInfo();
	int getAmount();
	double getSpeed();
	void showInfo() override;
};

