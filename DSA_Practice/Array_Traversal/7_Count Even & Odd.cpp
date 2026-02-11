#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int cntOdd = 0, cntEven = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0) cntEven++;
        if(a[i] % 2 != 0) cntOdd++;
    }

    cout << "Odd -> " << cntOdd << "\n" << "Even -> " << cntEven << endl;

    return 0;
}