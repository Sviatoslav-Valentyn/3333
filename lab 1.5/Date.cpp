#include "Time.h"
#include <iostream>
#include "Date.h"
using namespace std;

bool Date::Init(int month, int week, int day)
{
	if (month < 12 && month > -1 && week < 4 && week > -1 && day < 28 && day > -1)
	{
		Triad t;
		t.Init(month, week, day);
		setTriad(t);
		return true;
	}
	else
		return false;
}

bool Date::DayCheck(int s)
{
	if (s < 0 || s >= 28)
	{
		cout << "Wrong arguments to Init! = " << endl;
		return false;
	}
	else
		return true;
}

void Date::Display() const
{
	cout << endl;
	cout << "month = " << triad.getA() << endl;
	cout << "week = " << triad.getB() << endl;
	cout << "day = " << triad.getC() << endl << endl;
}

void Date::IncreaseDay(int day)
{
	int a1;
	if (day + triad.getC() >= 28)
	{
		triad.augmentationB();
		if (triad.getB() >= 4)
		{
			triad.augmentationA();
			triad.setB(0);
		}
		a1 = day + triad.getC() - 28;
	}
	else
	{
		a1 = day + triad.getC();
	}
	triad.setC(0);
	for (int i = 0; i < a1; i++)
	{
		triad.augmentationC();
	}
}

void Date::Read()
{
	int x, y, z;
	bool x1;
	do
	{
		cout << "month = "; cin >> x;
		cout << "week = "; cin >> y;
		cout << "day = "; cin >> z;
		x1 = Init(x, y, z);
		if (!x1)
			cout << "Wrong arguments to Init!" << endl;
	} while (!x1);
}