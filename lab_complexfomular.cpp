#include <iostream>
#include <cmath>
using namespace std;

double term1(double t)
{
    t = sin((2*M_PI)/(3*pow(t,4)+1));
    return t;
}

double term2(double t)
{
    t = (pow(2,(2*t)+1))*(sqrt(pow(t,2)+1));
    return t;
}

double complexFormula(double x)
{
    return term1(x)+term2(x);

}

int main ()
{
    cout << "Result = " << complexFormula(1);
    return 0;
}