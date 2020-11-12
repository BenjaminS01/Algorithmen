#include "GGT.h"
#include <algorithm>

GGT::GGT()
{
}

GGT::~GGT()
{
}

int GGT::getGGT(int a, int b)
{
	int h = 0;
	

	if (a < b) {
		std::swap(a, b);
	}
	while (b != 0) {
		h = a % b;
		a = b;
		b = h;
	}

	return a;
}
