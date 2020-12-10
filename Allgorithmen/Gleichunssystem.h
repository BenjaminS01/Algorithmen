#pragma once
#include <vector>
#include <array>
class Gleichunssystem
{
public: Gleichunssystem();
	  ~Gleichunssystem();

public: void setDreiecke(std::vector<std::vector<double>> _matrix, std::vector<double> _vektor);

public: void vorwärts();
public: void rückwärts();

public: std::vector<std::vector<double>> lInit(std::vector<std::vector<double>> _matrix);

private: std::vector<std::vector<double>> oberesDreieck;
private: std::vector<std::vector<double>> unteresDreieck;
private: std::vector<double> vectorY;
private: std::vector<double> ergebnisX;
};

