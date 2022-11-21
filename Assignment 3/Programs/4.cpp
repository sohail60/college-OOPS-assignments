#include <iostream>
using namespace std;

int main(){
    double p,r,t;
    cout << "Enter Pricipal in Rupees: "<< endl;
    cin >> p;
    cout << "Enter Rate: "<< endl;
    cin >> r;
    cout << "Enter Time in Years: "<< endl;
    cin >> t;
    
    double inst=p*r*t/100;
    cout << "Interest: "<< inst << endl;
}