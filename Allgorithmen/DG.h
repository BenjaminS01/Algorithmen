#pragma once
#include <cmath>
#include <iostream>

class DG
{
public: DG();
	  ~DG();

public: double eulerCauchy(int y, double x0, double y0, double deltaX, double konstante);

public: double rungekutta(int y, double x0, double y0, double deltaX, double konstante);

public: double rungekutta4(int y, double x0, double y0, double deltaX, double konstante);

public: double k(double x, double y, double konstante);
};



