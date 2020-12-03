#include "Regression.h"



double Regression::getB(std::vector<double> x, std::vector<double> y)
{

    return (this->summeXY(x,y)- (x.size()*this->mittelwert(x)* this->mittelwert(y) ) ) 
         / ( this->summeXQuadrat(x) - (x.size()* this->mittelwert(x)* this->mittelwert(x)));
}

double Regression::mittelwert(std::vector<double> vector)
{
    double result = 0;

    for (int i = 0; i < vector.size(); i++) {

        result += vector[i];

    }

    return result;
}

double Regression::summeXY(std::vector<double> x, std::vector<double> y)
{
    
    double result = 0;

    for (int i = 0; i < x.size(); i++)
    {
        result += x[i] * y[i];
    }

    return result;
}

double Regression::summeXQuadrat(std::vector<double> x)
{
    double result = 0;
    for (int i = 0; i < x.size(); i++)
    {
        result += x[i] * x[i];
    }

    return 0.0;
}
