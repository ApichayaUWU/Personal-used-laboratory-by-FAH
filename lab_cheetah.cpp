#include<iostream>
#include<cmath>
using namespace std;

int cheetah(int m)
{
    int b = m / 10; //bottle that he bought
    int l = b ; //จน.ฉลากที่มี
    int n; //จำนวนขวดที่สามารถแลกได้
    int s = b; //all bottle he gain

    while (l>=3)
    {
        n=l/3;
        l = l - (3*n) + n;
        s += n;
    }
    return s;

}
int main()
{
    int money;
    cout << "budget = ";
    cin >> money;
    cout << "all bottle he has gain = " << cheetah(money);
}

