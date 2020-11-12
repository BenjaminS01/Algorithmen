#include "PrimzahlenBisN.h"
#include <math.h>
#include <cmath>
#include<vector>

#include <iostream>

PrimzahlenBisN::PrimzahlenBisN()
{
}

PrimzahlenBisN::~PrimzahlenBisN()
{
}

std::vector<int> PrimzahlenBisN::getPrimzahlen(int n)
{
	std::vector<int> alleZahlen;

	int wurzelN = floor(sqrt(n));

	for (int i = 1; i <= n; i++)
	{
		
		alleZahlen.push_back(i);

	}


	for (int i = 2; i < wurzelN; i++)
	{
		if (std::find(alleZahlen.begin(), alleZahlen.end(), i) != alleZahlen.end()) {

		
			for (int j = floor(n / i); j >= i; j--)
			{

				if (std::find(alleZahlen.begin(), alleZahlen.end(), j) != alleZahlen.end()) {
					alleZahlen[(i * j)-1] = 0;
				}

			}

		}

	}

	

	return alleZahlen;
}
