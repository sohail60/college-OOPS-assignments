#include<iostream>
using namespace std;

class Living{
    private:
    string specie;

    public:
    Living(){
        this->specie="";
    }

    Living(string s){
        this->specie=s;
    }

    void setSpecie(string s){
        this->specie=s;
    }

    string getSpecie(){
        return this->specie;
    }
};

class Dog:public Living{
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

    void run(){
        cout<<"Running"<<endl;
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

int main(){

    Labrador *obj=new Labrador(4);
    obj->setSpecie("Canis familiaris");
    obj->setColor("Brown");

    cout<<obj->getSpecie()<<endl;
    cout<<obj->getColor()<<endl;
    cout<<obj->getAge()<<endl;
    obj->run();
    return 0;
}