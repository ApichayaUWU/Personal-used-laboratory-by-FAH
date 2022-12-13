#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cout << "Who is the one you love?: ";
    cin >> n;
    int l;
    cout << "How many rounds do you want to repeat?: ";
    cin >> l;
    cout << "<3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3" << endl;
    int i=0;
    while(i < l)
    {
        cout << "I love " << n << "." << endl;
        i++;
    }
    cout << "<3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3";
    return 0;
}