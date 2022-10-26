#include <iostream>
using namespace std;

int main(){
    double p,r,t;
    cout << "Enter Pricipal: "<< endl;
    cin >> p;
    cout << "Enter Rate: "<< endl;
    cin >> r;
    cout << "Enter Time: "<< endl;
    cin >> t;
    
    double inst=p*r*t/100;
    cout << "Interest: "<< inst << endl;
}