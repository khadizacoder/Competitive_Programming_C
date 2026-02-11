#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int freq[9] = {0};
    for(int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    for(int i = 0; i < 9; i++)
    {
        if(freq[i] > 0)
            cout << i << " -> " << freq[i] << endl;
    }
    return 0;
}