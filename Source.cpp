#include <iostream>
#include"Exercises.h"
#include "std_lib_facilities.h"

int main()
{
	try
	{
		Exercises temp;
		double temperature;
		bool quitProgram = true;

		while (quitProgram)
		{
			char CoversionOptions{ temp.TempConvOptions() };
			if (CoversionOptions == '1')
			{
				temperature = temp.CelToKel();
			}
			if (CoversionOptions == '2')
			{
				temperature = temp.KelToCel();
			}
			if (CoversionOptions == '3')
			{
				double f{ temp.CelToFah() };
			}
			if (CoversionOptions == '4')
			{
				double c{ temp.FahToCel() };
			}
			temp.KeepCalculating(quitProgram);
		}
		cout << "\nThank you";
		keep_window_open();
	}
	catch (const std::exception& e)
	{
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return -1;
	}
	keep_window_open();
	return 0;
}