#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;

    for ( int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int space = 0; space < (2*n-2*i); space++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout<<"*";
        }
        cout << endl;

    }
    for ( int i = n; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int space = 0; space < (2*n-2*i); space++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout<<"*";
        }
        cout << endl;

    }
    
    return 0;
}