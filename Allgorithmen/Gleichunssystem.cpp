#include "Gleichunssystem.h"

Gleichunssystem::Gleichunssystem()
{
}

Gleichunssystem::~Gleichunssystem()
{
}

void Gleichunssystem::setDreiecke(std::vector<std::vector<double>> _matrix, std::vector<double> _vektor)
{
	const int size = _matrix.size();
	
	std::vector<std::vector<double>> L = this->lInit(_matrix);
	
	for (int k = 0; k < size; k++)
	{

		for (int i = k+1; i < size; i++)
		{
			
			L[i][k] = _matrix[i][k]/_matrix[k][k];

			for (int j = 0; j < size; j++)
			{
				_matrix[i][j] = _matrix[i][j] - L[i][k] * _matrix[k][j];
			}

		}

	}
	this->oberesDreieck = _matrix;
	this->unteresDreieck = L;
	this->vectorY = _vektor;
}

void Gleichunssystem::vorwärts()
{
	std::vector<double> ergebnis = this->vectorY;
	for (int i = 0; i < vectorY.size(); i++)
	{
		double summe = 0;
		for (int j = 0; j < i; j++)
		{
			summe += this->unteresDreieck[i][j] * ergebnis[j];
		}
		ergebnis[i] = (1 / this->unteresDreieck[i][i]) * (this->vectorY[i] - summe);
	}
	
	this->vectorY = ergebnis;
}

std::vector<std::vector<double>> Gleichunssystem::lInit(std::vector<std::vector<double>> _matrix)
{
	for (int i = 0; i < _matrix.size(); i++)
	{
		_matrix[i][i] = 1;

		for (int j = i+1; j < _matrix.size(); j++)
		{
			_matrix[i][j] = 0;
		}
	}

	return _matrix;
}
