#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
   
   int sum = 0;
   int min;
   int max;
   int value;

   cout<<"Enter an Integer: ";
   cin>>value;
   min = value;
   max = value;
    
    while(value != -1){
      if(min > value){
         min = value;
      }

      if(max < value){
         max = value;
      }
      
      sum += value;
      cout<<"Enter an Integer: ";
      cin>>value;
   }

   cout<<"The minimum number was: "<<min<<endl;
   cout<<"The maximum number was: "<<max<<endl;
   cout<<"The sum of values entered was: "<<sum<<endl;

   return 0;
}