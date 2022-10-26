#include<iostream>
using namespace std;

class Dog{
    private:
    string color;

    public:
    Dog(){
        this->color="";
    }

    Dog(string s){
        this->color=s;
    }

    void setColor(string s){
        this->color=s;
    }

    string getColor(){
        return this->color;
    }
};

class Labrador:public Dog{
    private:
    int age;

    public:
    Labrador(){
        this->age=0;
    }

    Labrador(int a){
        this->age=a;
    }

    void setAge(int a){
        this->age=a;
    }

    int getAge(){
        return this->age;
    }
};

class Bulldog:public Dog{
    private:
    int age;

    public:
    Bulldog(){
        this->age=0;
    }

    Bulldog(int a){
        this->age=a;
    }

    void setAge(int a){
        this->age=a;
    }

    int getAge(){
        return this->age;
    }
};

int main(){

    Labrador *obj1=new Labrador(4);
    obj1->setColor("Gray");
    Bulldog *obj2=new Bulldog(5);
    obj2->setColor("Brown");

    cout<<obj1->getColor()<<endl;
    cout<<obj1->getAge()<<endl;
    cout<<obj2->getColor()<<endl;
    cout<<obj2->getAge()<<endl;
    return 0;
}