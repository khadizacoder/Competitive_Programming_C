#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<long long, int> mp;

    long long prifix = 0;
    int cnt = 0;

    mp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        prifix += a[i];
        if (mp.find(prifix - k) != mp.end())
            cnt += mp[prifix - k];
        mp[prifix]++;
    }
    cout << cnt << endl;

    return 0;
}