#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    string name;
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name <<": " ;
    string id;
    getline(cin,id);
    int gear;
    string first_two_digits = id.substr(0, 2);
    gear = stoi(first_two_digits) - 12;
    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    string mov;
    getline(cin,mov);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    string date;
    getline(cin,date);
    cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching " << mov << " with you.\n";
    cout << name << ": ";
    string talk;
    getline(cin,talk);
    cout << "Fahsai: 555+ see you " << date << ". Bye Bye \\(^ ^)/";


}