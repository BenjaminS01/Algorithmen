#include "Integral.h"


Integral::Integral()
{
}

Integral::~Integral()
{
}

double Integral::rechteckverfahren(double a, double b, int intervalle)
{
	double integral = 0;

	double deltaX = abs((a - b) / (intervalle-1));

	for (int i = 0; i < intervalle ; i++)
	{
		integral += funktion(a + i * deltaX);
	}

	return integral * 0.5;
}


double Integral::trapezverfahren(double a, double b, int intervalle)
{
	double integral = 0;

	double deltaX = abs((a - b) / (intervalle-1));

	for (int i = 1; i < intervalle ; i++)
	{
		integral += funktion(a + i * deltaX);
	}

	return (integral + (funktion(a)/2) + (funktion(b) / 2)) * deltaX ;
}

double Integral::simpsonverfahren(double y0, double yN, int intervalle)
{

	double deltaX = abs((y0 - yN) / (intervalle));

	double integral = 0;

	for (int i = 1; i < intervalle; i+=2)
	{
		integral += 4 * funktion(y0 + i * ( deltaX));

		
	}
	for (int j = 2; j < intervalle; j += 2)
	{
		integral += 2 * funktion(y0 + j * ( deltaX));
	}
	
	return deltaX/3 * (funktion(y0) + funktion(yN) + integral);
}


double Integral::funktion(double x)
{
	return pow(x, 2);
	
}


