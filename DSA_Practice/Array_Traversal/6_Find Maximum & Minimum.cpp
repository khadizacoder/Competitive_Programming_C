#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // int mx = INT_MAX;
    // int mn = INT_MIN;

    int mx = a[0];
    int mn = a[0];
    for (int i = 0; i < n; i++){
        if(a[i] > mx)
            mx = a[i];
        if(a[i] < mn)
            mn = a[i];
    }

    cout << mx << '\n' << mn << '\n';

    return 0;
}