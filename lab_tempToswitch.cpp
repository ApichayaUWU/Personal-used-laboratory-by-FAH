#include<iostream>
using namespace std;

int main()
{
    cout << "Please input the room temperature: ";
    double t;
    cin >> t;
    if (t > 27)
    {
        cout << "Turn on the air conditioner." << endl;
    }else{
        cout << "Turn off the air conditioner." << endl;
    }
    cout << "The operation was completed successfully.";
    return 0;
}