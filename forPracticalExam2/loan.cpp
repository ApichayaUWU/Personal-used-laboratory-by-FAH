#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan , rate , pay;
	cout << "Enter initial loan: ";
    cin >> loan;
	cout << "Enter interest rate per year (%): ";
    cin >> rate;
	cout << "Enter amount you can pay per year: ";
    cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
    double prevBlance , Interest ,Total ,Payment ,NewBalance;
    int year = 1;
    prevBlance = loan;
    Interest = loan * rate /100;
    Total = prevBlance + Interest;
    if(pay < Total)
        {
            Payment = pay;
        }else Payment = Total;
    NewBalance = Total - Payment;
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
    for(;;){
        cout << fixed << setprecision(2); 
	    cout << setw(13) << left << year; 
	    cout << setw(13) << left << prevBlance;
	    cout << setw(13) << left << Interest;
	    cout << setw(13) << left << Total;
	    cout << setw(13) << left << Payment;
	    cout << setw(13) << left << NewBalance;
	    cout << "\n";
        if(NewBalance <= 0) break;	
        year++;
        prevBlance = NewBalance;
        Interest = prevBlance * rate /100;
        Total = prevBlance + Interest;
        if(pay < Total)
        {
            Payment = pay;
        }else Payment = Total;
        NewBalance = Total - Payment;
        
    }
	
	
	return 0;
}