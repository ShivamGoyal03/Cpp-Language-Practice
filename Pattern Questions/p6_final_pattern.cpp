#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int count = n;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= (n - i); j++)
        {
            cout << j;
        }
        for (int star = 0; star <= (2 * i - 1); star++)
        {
            cout << "*";
        }
        for (int last = 1; last <= (n - i); last++)
        {
            j--;
            cout << j;
        }

        cout << endl;
    }
    return 0;
}