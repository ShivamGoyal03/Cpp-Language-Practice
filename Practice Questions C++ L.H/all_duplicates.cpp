// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    int arr[size], ans[6];
    if (size <= 1)
    {
        cout << "[]" << endl;
        return 0;
    }
    
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+size);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i+1])
        {
           cout << arr[i] << " "; 
        }
    }
    return 0;
}