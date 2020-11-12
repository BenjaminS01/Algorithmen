#include "Pi.h"

Pi::Pi()
{
}

Pi::~Pi()
{
}

void Pi::getPi()
{
    
	double pi = 0.0;
	double s2n = sqrt(2);
	
	for (int i = 4; i < 5000; i*=2)
	{
		 s2n = sqrt(pow(s2n, 2) / (2 + 2 * sqrt(1 - (pow(s2n, 2)) / 4)));
		 
		pi = i * s2n;

		std::cout << "i = "; 
		std::cout << i;
		std::cout << "    Pi = ";
		std::cout << pi;
		std::cout << "\n";
	}

}
