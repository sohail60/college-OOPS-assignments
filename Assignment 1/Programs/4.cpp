#include <iostream>
using namespace std;

int main(){
    int arr[5];

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int sum=0;
    int largest=0;
    int smallest=0;

    for(int i=0;i<5;i++){
        sum=sum+arr[i];

        if (arr[i]>largest){
            largest=arr[i];
        }

        if (arr[i]<smallest){
            smallest=arr[i];
        }
    }

    cout<<"Sum= "<<sum<<endl;
    cout<<"Largest= "<<largest<<endl;
    cout<<"Smallest= "<<smallest<<endl;
}