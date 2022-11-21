#include <iostream>
using namespace std;

class Vehicle{
   public:
      void vehicle(){
         cout<<"I am a vehicle";
      }
};

class FourWheeler : public Vehicle{
   public:
      void fourWheeler(){
         cout<<"I have four wheels";
      }
};

class Car : public FourWheeler{
   public:
      void car(){
         cout<<"I am a car";
      }
};
int main(){
   Car obj;
   obj.car();
   obj.fourWheeler();
   obj.vehicle();
   return 0;
}