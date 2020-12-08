#include "Exercises.h"


double Exercises::CelToKel()
{
	double celcius;
	cout << "Please enter temperature.\n";
	cin >> celcius;
	if (celcius < -273.15)
	{
		error("Max temp exceeded\n");
	}
	double k = celcius + 273.15;
	cout << k << " Kelvin" << endl;
	return k;
}

double Exercises::KelToCel()
{
	double kelvin;
	cout << "Please enter temperature.\n";
	while (cin >> kelvin)
	{
		double c = kelvin - 273.15;
		cout << c << " Celcius" << endl;
		return c;
	}
}

double Exercises::CelToFah()
{
	double celcius;
	cout << "Please enter temperature.\n";
	while (cin >> celcius)
	{
		double f = celcius * 1.8 + 32;
		cout << f << " Fahrenheit" << endl;
		return f;
	}
}

double Exercises::FahToCel()
{
	double fahrenheit;
	cout << "Please enter temperature.\n";
	while (cin >> fahrenheit)
	{
		double c = (fahrenheit - 32) / 1.8;
		cout << c << " Celcius" << endl;
		return c;
	}
}

bool Exercises::KeepCalculating(bool quitTheProgram)
{
	cout << "(N)New conversion (E)Exit programm\n";
	char option;
	cin >> option;
	switch (option)
	{
	case'n':
	{
		quitTheProgram = true;
		return quitTheProgram;
	}
	case'e':
	{
		quitTheProgram = false;
		return quitTheProgram;
	}
	default:
		cout << "Not an option\n";
	}
}

char Exercises::TempConvOptions()
{
	cout << "Please choose the type of conversion: " << '\n';
	cout << "(1) for Celscius to Kelvin \n(2) for Kelvin to Celscius.\n";
	cout << "(3) for Celscius to Fahrenheit \n(4) for Fahrenheit to Celscius.\n";
	char conversionOption;
	cin >> conversionOption;
	switch (conversionOption)
	{
	case '1':
		return conversionOption;
		break;
	case '2':
		return conversionOption;
		break;
	case '3':
		return conversionOption;
		break;
	case '4':
		return conversionOption;
		break;
	default:
		cout << "Bad Input\n";
	}
}
