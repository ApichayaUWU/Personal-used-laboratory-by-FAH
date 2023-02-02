#include<iostream>
using namespace std;

void printO(int i,int j)
{
    if(i > 0 and j > 0)
    {
        for( int x = 0 ; x<i ; x++)
        {
            for(int y =0; y < j ; y++)
            {
                cout << 'O';
            }
            cout << endl;
        }
    }else cout << "Invalid Input";
}

int main()
{
   int i, j;
   cin >> i;
   cin >> j;
   printO(i,j);
   return 0;
}