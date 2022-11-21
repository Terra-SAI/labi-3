#pragma once
#pragma once
#include <iostream>
#include <windows.h>
#include <memory>
#include <io.h>
#include <fstream>
#include <string>
#include <iomanip> 
#include <conio.h>
#include <vector>

#include "InvalidPositiveDigitInput.h"

using namespace std;

template <class T>
void isPositiveDigit(T digit)
{
	if (digit <= 0)
		throw InvalidPositiveDigitInput("¬веденное число должно быть больше нул€!");
}

int checkPositiveIntNumber();

double checkPositiveDoubleNumber();

string checkInputLine();
