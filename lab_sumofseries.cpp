#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x = 5, sum = 0;
    while(x <= 225){
        sum = sum + x;
        x = x + 10;
    }
    cout << sum;    
    return 0;
}
