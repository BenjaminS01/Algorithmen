#include "Optimierung.h"

Optimierung::Optimierung()
{
}

Optimierung::~Optimierung()
{
}

std::vector<double> Optimierung::minf(double x, double y, std::vector<double> x0, double schrittweite)
{
	std::vector<double> xAlt = x0;
		std::vector<double> xNeu = x0;
		std::vector<double> ausstiegsWert = {1,1};
		

	while (ausstiegsWert[0] > 0.1 && ausstiegsWert[1] > 0.1 )
	{
		xAlt = xNeu;
		xNeu[0] = xAlt[0] + schrittweite * (-1) * x * xAlt[0];
		xNeu[1] = xAlt[1] + schrittweite * (-1) * y * xAlt[1];

		ausstiegsWert[0] = xAlt[0] - xNeu[0];
		ausstiegsWert[1] = xAlt[1] - xNeu[1];

	}


    return xNeu;
}
