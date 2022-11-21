#pragma once
#include "Sell.h"
class CallMeMaybe : public Sell
{
	int amountIn, amountOut;
public:
	CallMeMaybe();
	CallMeMaybe(int i, int o);
	int getIn();
	int getOut();
	void setInfo();
	void showInfo() override;
};

