#include<iostream>
#include<string>
using namespace std;

void printPattern1(int m,int n)
{
   if (n <= 0 or m <= 0)
   {
    cout << "Invalid input";
   }else
   {
    int i , j;
    char p[] = {'O','X'};
    int c=0 , ci;
    for (i = 0 ; i < m ; ++i)
    {
        ci =c;
        for(j = 0; j < n ; ++j)
        {
            cout << p[c];
            if(c == 0) 
            {
                ++c;
            }else{
                if(c == 1) 
                {
                    --c;
                }
            }
            
        }
        if(ci == 0) c = 1;
        if (ci == 1) c =0 ;
        cout << endl;
    }
   }
}

int main()
{
printPattern1(2,2);
}