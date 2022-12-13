#include<iostream>
#include<cmath>
using namespace std;

double findDistance(double u,double a,double t)
{
    return (u*t)+(0.5*a*pow(t,2));
}

int main()
{
 cout << findDistance(0,0.5,1);
}