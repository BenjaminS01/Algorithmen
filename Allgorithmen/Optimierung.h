#pragma once
#include <vector>
#include <array>
#include <cmath>
class Optimierung
{
public: Optimierung();
	  ~Optimierung();

public:	 std::vector<double> minf(double x, double y, std::vector<double> x0, double schrittweite);
};

