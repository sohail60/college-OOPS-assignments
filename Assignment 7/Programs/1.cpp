#include<iostream>
using namespace std;

class Car{
    private:
    int milage;
    int seat;

    public:
    Car(){
        milage=0;
        seat=0;
    }

    Car(int m,int s){
        this->milage=m;
        this->seat=s;
    }

    void setMilage(int m){
        this->milage=m;
    }

    void setSeat(int s){
        this->seat=s;
    }

    int getMilage(){
        return this->milage;
    }

    int getSeat(){
        return this->seat;
    }
};

class Hyundai: public Car{
    private:
    int price;

    public:
    Hyundai(){
        price=0;
    }

    Hyundai(int p){
        this->price=p;
    }

    void setPrice(int p){
        this->price=p;
    }

    int getPrice(){
        return this->price;
    }

};


int main(){

    Hyundai *obj=new Hyundai(50);
    obj->setMilage(25);

    cout<<obj->getPrice()<<endl;
    cout<<obj->getMilage()<<endl;

    return 0;
}