#include <iostream>
using namespace std;

int main()
{
    int x=4;
    if(x%3 == 2)
    {
        cout << x;
        x +=3;
    }else{
        cout << x*2;
    }
    return 0;

}