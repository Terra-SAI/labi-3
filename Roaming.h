#pragma once
#include "Sell.h"
class Roaming :public Sell
{
	string countries;
public:
	Roaming();
	Roaming(string c);
	string getString();
	void setInfo();
	void showInfo() override;
};
 
