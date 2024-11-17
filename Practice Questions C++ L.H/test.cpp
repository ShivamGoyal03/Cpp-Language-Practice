#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
        int ans = 0;
        while (x != 0)
        {
            int dig = x % 10;
            ans = (ans * 10) + dig;
            x = x / 10;
        }
        cout << ans;    
        
    return ans;
}