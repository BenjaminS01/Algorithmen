#pragma once
#include <vector>
#include <array>
#include <cmath>

class Gleichunssystem
{
public: Gleichunssystem();
	  ~Gleichunssystem();

public: void setDreiecke(std::vector<std::vector<double>> _matrix, std::vector<double> _vektor);

public: void vorwärts();
public: void rückwärts();

private: bool isDiagonalDominant(std::vector<std::vector<double>> _matrix);
public: std::vector<double> jacobi(std::vector<std::vector<double>> _matrix, std::vector<double> _vektor);

public: std::vector<std::vector<double>> lInit(std::vector<std::vector<double>> _matrix);

private: std::vector<std::vector<double>> oberesDreieck;
private: std::vector<std::vector<double>> unteresDreieck;
private: std::vector<double> vectorY;
private: std::vector<double> ergebnisX;


};

