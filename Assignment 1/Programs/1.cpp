#include <iostream>
using namespace std;

int main(){
    int arr[5]={5,15,6,77,10};

// Taking Input
    // for(int i=0;i<5;i++){
    //     cin>>arr[i];
    // }

// a) Displaying the Elements
    cout<<"Displaying Array"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"     ";
    }

// b,c) Sum,Max and Min
    int sum=0;
    int maximum=0;
    int minimum=0;

    for(int i=0;i<5;i++){
        sum=sum+arr[i];

        if (arr[i]>maximum){
            maximum=arr[i];
        }

        if (arr[i]<minimum){
            minimum=arr[i];
        }
    }

    cout<<endl;
    cout<<"Sum= "<<sum<<endl;
    cout<<"Largest= "<<maximum<<endl;
    cout<<"Smallest= "<<minimum<<endl;
    cout<<endl;

// d) Bubble Sort
    for (int i = 0; i < 5; i++) {
            int flag=0;
            for (int j = 1; j < 5-i; j++) {
                if(arr[j]<arr[j-1]) {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                    flag=1;
                }
            }
            if(flag==0){
                break;
            }
        }

    cout<<"Sorted Array"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"     ";
    }
    cout<<endl;
    cout<<endl;

// Reverse
        int end=5-1;
        int start=0;
        while(start<end) {
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }

    cout<<"Reversed Array"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"     ";
    }
}