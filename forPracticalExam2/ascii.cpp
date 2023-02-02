#include<iostream>
using namespace std;

char before(char x)
{
    if(x < 'A' or x > 'Z')
    {
        return '0';
    }
    else
    {
        if (x == 'A') return 'Z';
        else return x - 1;

    }
}

int main()
{
    

}