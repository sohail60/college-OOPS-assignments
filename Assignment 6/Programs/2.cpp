#include<iostream>
using namespace std;

class Human{
    public:
    int height;

    private:
    int weight;

    protected:
    int age;
};

class Male: protected Human{
    
    public:
    int dob;

    int getHeight(){
        height;
    }


};

int main(){
    Male m1;

    cout<< m1.getHeight() <<endl;
}