#include<iostream>
using namespace std;

int main()
{
    int p , prev ;
    double sl , sm , s ,q;
    double presm;
    double  l , m; // dif = delta post - previous // d = 100 - post position
    cout << "Input the burner location: ";
    cin >> p;
    
        q = p;
        sm = q /10;
        presm = sm;
    
        q = 100 - p;
        sl = q /10;
    
    for (;;)
    {
        if (p >= 100 or p < 0) break;
        prev = p;
        cout << "Input the burner location: ";
        cin >> p;

        if (p <= prev and p >= 0) 
        {
            cout << "Next location must be greater than " << prev << "." << endl;
            p = prev;
        }else
        {
            if ( p <= 100 and p >= 0)
            {
                m = p - prev;
                sm = (m/2)/10;
                    
                l = 100 - p;
                sl = l/10;

                if (sl > sm) 
                {
                    if (sm > presm) presm = sm;
                    if (sm < presm) sm = presm;
                    
                }
                if (sm > sl) 
                {
                    sl = 0;
                    if(sm < presm) sm = presm;
                }
                    
            }
        }

        if (p >= 100 or p < 0) 
        {
            break;
        }
    }    
    if (sl >= sm) s = sl;
    if (sm >= sl) s = sm;
    cout << "Burning completes in "<< s << " sec.";
}