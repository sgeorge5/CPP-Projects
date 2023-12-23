#include <iostream>
#include <Windows.h>
using namespace std;

int main (){
    int array1[10];
    int sum = 0;
    int max = array1[0];
    int min = array1[0];
    cout<<"Enter 10 integer values: \n";

    for(int i = 0; i < 10; i++){
        cin>>array1[i];
    }

    cout<<"You have entered the following numbers: ";

    for(int i = 0; i < 10; i++){
        cout<<array1[i]<<",";
    }

    for(int i = 0; i < 10; i++){
        sum += array1[i];
    }

    cout<<"\nSum of the given integers is: "<<sum<<endl;

    for(int i = 0; i < 10; i++){
        if(array1[i] > max){
            max = array1[i];
        }
    }
    cout<<"The Maximum value from the given integers would be: "<<max<<endl;

    for(int i = 0; i < 10; i++){
        if(array1[i] < min){
            min = array1[i];
        }
    }

    cout<<"The Minimum value from the given integers would be: "<<min<<endl;
    
    return 0;
}
