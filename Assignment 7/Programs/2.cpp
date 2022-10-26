#include<iostream>
using namespace std;

class Person{
    private:
    string name;
    int age;

    public:
    Person(){
        name="";
        age=0;
    }

    Person(string n,int a){
        this->name=n;
        this->age=a;
    }

    void setName(string n){
        this->name=n;
    }

    void setAge(int a){
        this->age=a;
    }

    string getName(){
        return this->name;
    }

    int getAge(){
        return this->age;
    }
};

class Employee{
    private:
    int salary;

    public:
    Employee(){
        this->salary=0;
    }

    Employee(int s){
        this->salary=s;
    }

    void setSalary(int s){
        this->salary=s;
    }

    int getSalary(){
        return this->salary;
    }
};

class Teacher:public Person, public Employee{
    private:
    string branch;

    public:
    Teacher(){
        this->branch="";
    }

    Teacher(string b){
        this->branch=b;
    }

    void setBranch(string b){
        this->branch=b;
    }

    string getBranch(){
        return this->branch;
    }
};

int main(){

    Teacher *obj=new Teacher();
    obj->setName("ABC");
    obj->setAge(30);
    obj->setSalary(60000);
    obj->setBranch("CSE");
    
    cout<<obj->getName()<<endl;
    cout<<obj->getAge()<<endl;
    cout<<obj->getSalary()<<endl;
    cout<<obj->getBranch()<<endl;
    return 0;
}