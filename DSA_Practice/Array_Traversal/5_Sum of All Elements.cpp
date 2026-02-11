#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int totalCount = 0;
    for(int i = 0; i < n; i++)
        totalCount+= a[i];

    cout << totalCount << endl;

    return 0;
}