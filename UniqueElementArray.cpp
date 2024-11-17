// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.

// CODE STUDIO

#include<iostream>
using namespace std;

void init(int arr[], int size){
    cout << "Enter number of elements :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main(){
    int ans = 0;
    int size;
    cin >> size;
    int arr[size];
    init(arr,size);

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "Answer is " << ans << endl;
    return 0;
}