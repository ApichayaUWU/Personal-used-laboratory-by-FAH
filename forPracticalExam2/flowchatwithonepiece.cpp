#include<iostream>
using namespace std;

int main()
{
    int age , height , bounty;
    string _char;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25)
    {
        cout << "Enter your height: ";
        cin >> height;
        if(height < 100) _char = "Chopper";
        else if(height < 180) _char = "Usopp";
        else{
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > 1100000000) _char = "Zoro";
            else _char = "Sanji";
        }
    }else if(age <= 60)
    {
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty > 500000000) _char = "Jinbe";
        else _char = "Franky";
    }else _char = "Brook";

    cout << "Your character = " << _char;
}