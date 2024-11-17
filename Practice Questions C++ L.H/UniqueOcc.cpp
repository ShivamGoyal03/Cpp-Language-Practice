#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void init(int arr[], int size)
{
    cout << "Enter number of elements :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void Check(int arr[], int n)
{
    int temp[10];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "Value of j" << j << endl;
          if ((arr[i] ^ arr[j])== 0)
          {
            temp[arr[j]]++;
          }
          
        }
        cout <<  "COUNT" << temp[i] << endl;
    }
}

void printArray(int arr[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    init(arr, size);
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    Check(arr,size);
    printArray(arr, size);
    return 0;
}