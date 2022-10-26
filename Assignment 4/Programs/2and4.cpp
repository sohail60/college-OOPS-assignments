// C++ program to add two objects using binary
// plus (+) operator overloading

#include <iostream>
using namespace std;

class NUM
{

public:
    int n;
    // function to get number
    NUM(int x)
    {
        n = x;
    }

    // add two objects - Binary Plus(+) Operator Overloading
    NUM operator+(NUM &obj)
    {
        NUM x(0); // create another object
        x.n = this->n + obj.n;
        return (x); // return object
    }
};

int main()
{
    NUM num1(10), num2(20), sum(0);

    // add two objects
    sum = num1 + num2;

    cout << sum.n << endl;

    return 0;
}