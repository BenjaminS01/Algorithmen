#include "Gleichungssystem.h"

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

bool Gleichunssystem::isDiagonalDominant(std::vector<std::vector<double>> _matrix)
{
	bool test = true;
	double aii;
	double aij;

	

		aii = 0;
		aij = 0;

		for (int i = 0; i < _matrix.size(); i++) {

			for (int j = 0; j < _matrix.size(); j++) {
				if (i == j) {
					aii = _matrix[i][j];
				}
				else {
					aij += _matrix[i][j];
				}
			}
			if (aii >= aij) {
				test = false;
				break;
			}
		}

	return test;
}

	std::vector<double> Gleichunssystem::jacobi(std::vector<std::vector<double>> _matrix, std::vector<double> _vektor){

		std::vector < double> x = { 0,0,0 };
		double aii = 0;
		double bi = 0;
		double summeAijXj = 0;
		std::vector < double> x_m1 = { 0,0,0 };
		bool test = false;
		
		double summeXSqrt = 0;
		double e = 0;

		while (test == false){

			for (int i = 0; i < _matrix.size(); i++) {

				for (int j = 0; j < _matrix.size(); j++)
				{
					if (j == i) {
						aii = _matrix[i][j];
					}
					else {
						summeAijXj += _matrix[i][j]*x[j];
					}

				}
				x_m1[i] = 1 / aii * (_vektor[i] - summeAijXj);
				summeAijXj = 0;
			}

			for (int k = 0; k< x.size(); k++)
			{
				summeXSqrt += pow(x[k] - x_m1[k], 2);
			}
			e = sqrt(summeXSqrt);

			if (e > 0.01) {
				test = false;
			}
			else {
				test = true;
			}
			x = x_m1;
			summeXSqrt = 0;
			//summeAijXj = 0;
		}


	return x_m1;
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
