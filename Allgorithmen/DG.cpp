#include "DG.h"



DG::DG()
{
}

DG::~DG()
{
}

double DG::eulerCauchy(int y, double x0, double y0, double deltaX, double konstante)
{
	for (double i = x0; i < y; i += deltaX)
	{
		y0 = konstante * y0 * x0 * deltaX + y0;
		x0 = x0 + deltaX;
	}
	return y0;
}

double DG::rungekutta(int y, double x0, double y0, double deltaX, double konstante)
{

	double k1i = 0;
	double k2i = 0;
	double result = 0;

	for (double i = x0; i < y; i += deltaX)
	{
		k1i = k(i, y0, konstante);

		k2i = k(i + deltaX, y0 + deltaX * k1i, konstante);

		y0 = y0 + (deltaX / 2) * (k1i + k2i);
	
	}

	return y0;
}

double DG::rungekutta4(int y, double x0, double y0, double deltaX, double konstante)
{
	double k1i = 0;
	double k2i = 0;
	double k3i = 0;
	double k4i = 0;
	double result = 0;

	for (double i = x0; i < y; i += deltaX)
	{
		k1i = k(i, y0, konstante);

		k2i = k(i + deltaX/2, y0 + deltaX * (k1i/2), konstante);

		k3i = k(i + deltaX/2, y0 + deltaX * (k2i/2), konstante);

		k4i = k(i + deltaX, y0 + deltaX * k3i, konstante);

		y0 = y0 + (deltaX / 6) * (k1i + 2*k2i+ 2*k3i + k4i);

	}

	return y0;
}

double DG::k(double x, double y, double konstante)
{
	return konstante * y * x;
}
