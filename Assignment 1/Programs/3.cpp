#include<iostream>
using namespace std;

int main(){
    cout<<"-----Menu-----"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Substraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;

    cout<<"Enter Choice: ";
    int choice=0;
    cin>>choice;


    cout<<"Enter Two Numbers: ";
    float a=0;
    cin>>a;

    float b=0;
    cin>>b;

    float c=0;

    switch (choice)
    {
    case 1:
        c=a+b;
        cout<<"Answer= "<<c<<endl;
        break;

    case 2:
        c=a-b;
        cout<<"Answer= "<<c<<endl;
        break;

    case 3:
        c=a*b;
        cout<<"Answer= "<<c<<endl;
        break;

    case 4:
        c=a/b;
        cout<<"Answer= "<<c<<endl;
        break;
    
    default:
        break;
    }

}