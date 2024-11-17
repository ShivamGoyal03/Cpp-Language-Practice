#include<iostream>
using namespace std;

int main(){
    int arr[5];

    int sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    
    cout << "sum is " << sum << endl;

    return 0;
}