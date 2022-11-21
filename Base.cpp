#include "Baaaaaase.h"

int checkPositiveIntNumber()
{
	string input;
	while (true)
	{
		try
		{

			getline(cin, input);

			for (unsigned char c : input)
			{
				if (!isdigit(c))
				{
					throw InvalidPositiveDigitInput("Некорректный ввод!");
				}
			}
			
			int intInput = stoi(input);
			isPositiveDigit(intInput);

			return intInput;

		}
		catch (InvalidPositiveDigitInput& ex)
		{
			cin.clear();
			cout << ex.what() << endl;
		}

	}
}

double checkPositiveDoubleNumber()
{
	string input;
	while (true)
	{
		try
		{
			getline(cin, input);
			int dotCounter = 0;

			for (unsigned char c : input)
			{
				if (!isdigit(c))
				{
					if (!(c == '.' && dotCounter++ < 1))
						throw InvalidPositiveDigitInput("Некорректный ввод!");
				}
			}

			double doubleInput = stod(input);
			isPositiveDigit(doubleInput);

			return doubleInput;

		}
		catch (InvalidPositiveDigitInput& ex)
		{
			cin.clear();
			cout << ex.what() << endl;
		}

	}
}

string checkInputLine()
{
	string input;
	cin.get();
	while (true)
	{
		try
		{
			getline(cin, input);

			size_t digits = input.find_first_of("1234567890+@#$^&*()!?_=/{}");
			if (digits != -1)
			{
				throw "Некорректный ввод!";
			}

			return input;
		}
		catch (const char *)
		{
			cin.clear();
			cout << "В строке содержатся недопустимые символы\n";
		}

	}
}