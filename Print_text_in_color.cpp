#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    cout<<"Hello"<<endl;//Statment 1 in normal text
    SetConsoleTextAttribute(h,1);
    cout<<"My name is Shaun"<<endl;//Statement 2 in Blue color text
    SetConsoleTextAttribute(h,2);
    cout<<"I live in New Jersey "<<endl;//Statement 3 in Green color text
    SetConsoleTextAttribute(h,3);
    cout<<"I am an undergraduate student at Stevens Institute of Technology"<<endl;//Statement 4 in Cyan color text
    SetConsoleTextAttribute(h,4);
    cout<<"I like to play Tennis "<<endl;//Statement 5 in Red color text
    return 0;
}