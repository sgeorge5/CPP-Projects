#include <iostream>
using namespace std;

void printGreeting(){
    cout << "Hope you're having a good day"<<endl;
}

void divideNumbers(float x, float y){
    if(y != 0){
        cout<< x / y;
    }
    else{
        cout<<"Cannot Perform Division"<<endl;
    }
}

int factorial(int num){
    if (num < 0){
        return 0;
    }
    else{
        int y = 1;
        for(int i = 1; i <= num; i++){
            y *= i;
        }
        return y;
    }
}

void fibonacci(int x){

   int a = 0, b = 1, c;
   cout << "Fibonacci Series of " << x << " : ";
    for(int i = 1; i <= x; ++i) {
        if(i == 1){
            cout << a;
        } 
        else if(i == 2){
            cout << ", " << b;
        } 
        else{
            c = a + b;
            a = b;
            b = c;
            cout << ", " << c;
        }
    }
    cout <<endl;
}

int main(){
    printGreeting();
    divideNumbers(2.0,4.0);
    cout<<endl;
    divideNumbers(2.0, 0);
    int x = 5;
    int result = factorial(x);
    cout << "Factorial of " << x << " is: " << result <<endl;
    fibonacci(10);

}