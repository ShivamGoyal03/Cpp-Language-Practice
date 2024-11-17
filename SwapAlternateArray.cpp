#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    for (int i = 0; i < n; i+=2)
    {
        if (i+1 <= n)
        {
            swap(arr[i] , arr[i+1]);
        }   
    }
}

void printArray(int arr[], int m){
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr1[6] = {4,2,1,5,7,3};
    int arr2[8] = {3,2,6,8,3,6,7,9};

    swapAlternate(arr1, 6);
    swapAlternate(arr2, 8);

    printArray(arr1,6);
    printArray(arr2,8);
    return 0;
}