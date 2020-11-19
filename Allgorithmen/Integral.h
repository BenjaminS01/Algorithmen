#pragma once
#include <math.h>
#include <cmath>

class Integral
{

public: Integral();
		~Integral();



public: double rechteckverfahren( double a, double b, int intervalle);

public: double funktion(double x);

public: double trapezverfahren(double a, double b, int intervalle);

public: double simpsonverfahren(double y0, double y2, int intervalle);
};
