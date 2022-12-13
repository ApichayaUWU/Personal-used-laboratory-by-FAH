#include <iostream>
using namespace std;

int main()
{
    int x=4;
    while(x%3 != 2)
    {
        cout << x;
        x += 2;
    }
    cout << x/2;
    return 0;

}