#include<iostream>
#include<string>
using namespace std;

string mixtext(string s1,string s2)
{
    if(s1.size()==s2.size())
    {
        int i=0,j=0;
        string v = s1+s2;
        while(i<=2*s1.size())
        {
            v[i] = s1[j];
            v[i+1] = s2[j];
            i = i+2;
            j++;
        }
        return v;
    }else
    {
        return "E";
    }
}


int main()
{
    string s1,s2;
    cout << "insert string 1 : " ;
    cin >> s1;
    cout << "insert string 2 : " ;
    cin >> s2;
    cout << "mix text : " << mixtext(s1,s2);
}