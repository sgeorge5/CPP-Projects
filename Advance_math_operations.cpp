#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    string operation;
    string calculation;
    cout<<"Enter type of Problem (String, Integer, Float, Trignometry, Power, Sqrt)"<<endl;
    cin>>calculation;
    if (calculation == "String"){
        string a;
        string b;
        cout<<"Enter a word or a statment:"<<endl;
        cin>>a;
        cout<<"Enter a word or a statment:"<<endl;
        cin>>b;
        cout<<a + " " + b;
    }
    else if (calculation == "Integer"){
        int num1, num2;
        cout<<"Enter an integer:"<<endl;
        cin>>num1;
        cout<<"Enter an operation (+, -, *, /, Power, Sqrt)"<<endl;
        cin>>operation;
        cout<<"Enter a second integer:"<<endl;
        cin>>num2;
        if (operation == "+"){
            cout<<num1 + num2;
            }
        else if (operation == "-"){
            cout<<num1 - num2;
            }
        else if (operation == "*"){
            cout<<num1 * num2;
            }
        else if (operation == "/"){
            cout<<num1 / num2;
            }
    }
    else if (calculation == "Float"){
        float num3, num4;
        cout<<"Enter a float value:"<<endl;
        cin>>num3;
        cout<<"Enter an operation (+, -, *, /)"<<endl;
        cin>>operation;
        cout<<"Enter a float value:"<<endl;
        cin>>num4;
        if (operation == "+"){
            cout<<num3 + num4;
            }
        else if (operation == "-"){
            cout<<num3 - num4;
            }
        else if (operation == "*"){
            cout<<num3 * num4;
            }
        else if (operation == "/"){
            cout<<num3 / num4;
            }
    }
    else if (calculation == "Power"){
            int num5, num6;
            cout<<"Enter an integer:"<<endl;
            cin>>num5;
            cout<<"Enter the power:"<<endl;
            cin>>num6;
            cout<<pow(num5, num6);
            }
    else if (calculation == "Sqrt"){
        float num7;
        cout<<"Enter a number:"<<endl;
        cin>>num7;
        cout<<sqrt(num7);
    }
    else if (calculation == "Trignometry"){
        string function;
        cout<<"Enter Trignometric Function:"<<endl;
        cin>>function;
        if (function == "sin"){
            float num8;
            cout<<"Enter number:"<<endl;
            cin>>num8;
            cout<<sin(num8);
        }
        else if (function == "cos"){
            float num9;
            cout<<"Enter number:"<<endl;
            cin>>num9;
            cout<<cos(num9);
        }
        else if (function == "tan"){
            float num10;
            cout<<"Enter number:"<<endl;
            cin>>num10;
            cout<<tan(num10);
        }
        else if (function == "cot"){
            float num11;
            cout<<"Enter number:"<<endl;
            cin>>num11;
            cout<<1/tan(num11);
        }
        else if (function == "sec"){
            float num12;
            cout<<"Enter number:"<<endl;
            cin>>num12;
            cout<<1/cos(num12);
        }
        else if (function == "csc"){
            float num13;
            cout<<"Enter number:"<<endl;
            cin>>num13;
            cout<<1/sin(num13);
        }
    }
    return 0;

}
