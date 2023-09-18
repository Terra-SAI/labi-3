#include "Sale.h"

Sale::Sale()
{
	sale = period = 0;
}

Sale::~Sale()
{
}

Sale::Sale(int s, int p)
{
	this->sale = s;
	this->period = p;
}

int Sale::getSale()
{
	return sale;
}

int Sale::getPeriod()
{
	return period;
}

void Sale::setInfo()
{
	cout << "Ââåäèòå ïðîöåíò ñêèäêè: sdsf ";
	sale = checkPositiveIntNumber();
	cout << "Ââåäèòå ïåðèîä äåéñòâèÿ ñêèäêè(â äíÿõ): ";
	period = checkPositiveIntNumber();
}

void Sale::showInfo()
{
	cout << "Ïðåäîñòàâëÿåòñÿ ñêèäêà " << sale << "% íà ïåðèîä èñïîëüçîâàíèÿ " << period << " äíåé"<< endl;
}
