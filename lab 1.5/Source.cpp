#include "Date.h"
#include <iostream>
using namespace std;

int main()
{
	Date s;
	s.Read();
	s.Display();
	int c, b;
	do
	{
		cout << "IncreaseDay = "; cin >> c;

	} while (!s.DayCheck(c));

	s.IncreaseDay(c);
	s.Display();
	return 0;
}