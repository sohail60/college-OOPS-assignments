#include<iostream>
#include<ctime>
using namespace std;
int main(){
    for (int i = 1; i <= 6; i++){
        if(i==1 || i== 6){
        for (int j = 1; j <= 4; j++){   
            cout<<"5 ";
        }
        } else {
            for (int j = 1; j <= 4; j++){
                if(j==1 || j==4){
            cout<<"5 ";
                } else {
            cout<<"  ";        
                }
        }
        }
        cout<<endl;
    }
}