// C++ program to add two objects using binary
// plus (+) operator overloading

#include <iostream>
using namespace std;

class NUM
{

public:
    int n;

    // user defined constructor
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

    // diff two objects - Binary Plus(-) Operator Overloading
    NUM operator-(NUM &obj)
    {
        NUM x(0); // create another object
        x.n = this->n - obj.n;
        return (x); // return object
    }
    // multiply two objects - Binary Plus(*) Operator Overloading
    NUM operator*(NUM &obj)
    {
        NUM x(0); // create another object
        x.n = this->n * obj.n;
        return (x); // return object
    }
    // divide two objects - Binary Plus(/) Operator Overloading
    NUM operator/(NUM &obj)
    {
        NUM x(0); // create another object
        x.n = this->n / obj.n;
        return (x); // return object
    }
};

int main()
{
    NUM num1(10), num2(20), sum(0), diff(0), mul(0), div(0);

    // add two objects
    sum = num1 + num2;
    // diff two objects
    diff = num1 - num2;
    // multiply two objects
    mul = num1 * num2;
    // divide two objects
    div = num1 / num2;

    cout << sum.n << endl;
    cout << diff.n << endl;
    cout << mul.n << endl;
    cout << div.n << endl;

    return 0;
}