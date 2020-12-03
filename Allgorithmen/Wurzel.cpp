#include "Wurzel.h"
#include <cmath>




Wurzel::Wurzel()
{
}


Wurzel::~Wurzel()
{
}

double Wurzel::getWurzel(double a, int n)
{
	double predecessor = 0;
	double result = 1;
	bool isFirstRound = true;

	while (abs((predecessor - result)) > 0.01) { // abs => Betrag
		
		predecessor = result;
		result = ((n - 1)*pow(result, n) + a) / (n * pow(result, n-1) );

		if (isFirstRound)
		{
			isFirstRound = false;
			continue;
		}
	}
	return result;
}



