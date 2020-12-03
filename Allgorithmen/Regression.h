#pragma once

#include <string>
#include <iostream>
#include <vector>

class Regression
{
public: Regression();
	  ~Regression();

public: double getA(std::vector<double>x, std::vector<double>y);

public: double getB(std::vector<double>x, std::vector<double>y);

public: std::string gerade(std::vector<double>x, std::vector<double>y);

public: double mittelwert(std::vector<double> vector);

public: double summeXY(std::vector<double>x, std::vector<double>y);

public: double summeXQuadrat(std::vector<double>x);


};

