#include <iostream>
#include <fstream>
#include<string>
#include<cmath>
#include <iomanip>

using namespace std;

int main(){
    ifstream score;
    score.open("score.txt");
    string s;
    double sum1 = 0 , sum2 =0;
    int n = 0;
    while(getline(score,s))
    {
        sum1 += stof(s);
        sum2 += pow(stof(s),2);
        n++;
    }
    score.close();
    
    double mean , sd;
    mean = sum1 / n;
    sd = sqrt((sum2/n)-pow(mean,2));
    
    cout << "Number of data = " << n <<endl;
    cout << setprecision(3);
    cout << "Mean = " << mean <<endl;
    cout << "Standard deviation = " << sd ;
}