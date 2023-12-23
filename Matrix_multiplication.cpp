#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int row1, column1, row2, column2;

    cout<<"Enter number of rows for first matrix: ";
    cin>>row1;
    cout<<"Enter number of columns for first matrix: ";
    cin>>column1;
    cout<<"Enter number of rows for second matrix: ";
    cin>>row2;
    cout<<"Enter number of columns for second matrix: ";
    cin>>column2;

    while (column1 != row2)
    {
        cout<<"Enter number of rows for first matrix: ";
        cin>>row1;
        cout<<"Enter number of columns for first matrix: ";
        cin>>column1;
        cout<<"Enter number of rows for second matrix: ";
        cin>>row2;
        cout<<"Enter number of columns for second matrix: ";
        cin>>column2;

    }

    cout << endl << "Enter elements of matrix 1:" << endl;
    for(int i = 0; i < row1; i++)
        for(int j = 0; j < column1; j++)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

 
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(int i = 0; i < row2; i++)
        for(int j = 0; j < column2; j++)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }


    for(int i = 0; i < row1; i++){
        for(int j = 0; j < column2; ++j)
        {
            c[i][j]=0;
        }
    }
        

    for(int i = 0; i < row1; ++i){
        for(int j = 0; j < column2; ++j){
            for(int k = 0; k < column1; ++k){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
        

    cout << endl << "Output Matrix: " << endl;
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < column2; j++)
        {
            cout << " " << c[i][j];
            if(j == column2-1){
                cout << endl;
            }
        }
    }

    return 0;
}