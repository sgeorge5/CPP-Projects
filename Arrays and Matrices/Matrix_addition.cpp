#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
    int A[2][2];
    int B[2][2];
    int C[2][2];

    cout<<"Enter 4 integer values for Matrix A: \n";

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin>>A[i][j];
        }
    }

    cout<<"Enter 4 integer values for Matrix B: \n";
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin>>B[i][j];
        }
    }

    cout<<"Sum of Matrix A and Matrix B: \n";

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            C[i][j] = A[i][j] + B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }

}