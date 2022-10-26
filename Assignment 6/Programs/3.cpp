#include<iostream>
using namespace std;

class Human{
    public:
    int height;

    protected:
    int age;

    private:
    int weight;
};

class Male1: public Human{

};

class Male2: protected Human{

    public:
        int getAge(){
        age;
    }
};

int main(){
    Male1 m1;
    Male2 m2;

    cout<< m1.height <<endl;
    cout<< m2.getAge() <<endl;
}