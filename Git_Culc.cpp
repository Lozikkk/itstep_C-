#include <iostream>
#include <time.h>
#include <cmath>
#include <iomanip>
using namespace std;
float Dod(float a, float b)
{
	float Res1 = a + b;
	cout << "\n\nResault\t" << a << " + " << b << " = " << Res1 << endl;
	return Res1;
}
float Vid(float a, float b)
{
	float Res2 = a - b;
	cout << "\n\nResault\t" << a << " - " << b << " = " << Res2 << endl;
	return Res2;
}
float Mn(float a, float b)
{
	float Res3 = a * b;
	cout << "\n\nResault\t" << a << " * " << b << " = " << Res3 << endl;
	return Res3;
}
float Dil(float a, float b)
{
	if (b != 0)
	{
		float Res4 = a / b;
		cout << "\n\nResault\t" << a << " / " << b << " = " << Res4 << endl;
		return Res4;
	}
	else
	{
		cout << "\n\n\tAlarm!!!  Zero cannot be divided\n";
	}
}
void Menu_Calc()
{
	int Diya;
	do
	{
		float Res1, Res2, Res3, Res4;
		float a, b;
		cout << "\tEnter the first number\t";
		cin >> a;
		cout << "\tPlease select your action!! 5 Exit.  ";
		cin >> Diya;
		if (Diya != 5)
		{
			cout << "\tEnter the second number  ";
			cin >> b;
			if (Diya == 1)
			{
				Dod(a, b);
				system("pause");
				system("cls");
			}
			if (Diya == 2)
			{
				Vid(a, b);
				system("pause");
				system("cls");
			}
			if (Diya == 3)
			{
				Mn(a, b);
				system("pause");
				system("cls");
			}
			if (Diya == 4)
			{
				Dil(a, b);
				system("pause");
				system("cls");
			}
		}
	} while (Diya != 5);
}
void main()
{
	Menu_Calc();




	system("pause");
}