#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int product = 1; int sum = 0;
    while (n != 0)
    {
        int rem;
        rem = n % 10;
        product = product * rem;
        sum = sum + rem;

        n = n/10;
    }
    int ans = product - sum;
    cout << ans << endl;
    return 0;
}