#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end(), greater<int>());

        int disPrice = 0, disIdx = 0;
        for (int i = 0; i < k; i++)
        {
            if (a[i] > 5)
            {
                disPrice += a[i];
                disIdx++;
            }
        }
        int disProfit = disPrice - (disIdx * 5);

        int noDisPrice = 0, noDisIdx = 0;
        for (int i = k; i < n; i++)
        {
            if (a[i] > 10)
            {
                noDisPrice += a[i];
                noDisIdx++;
            }
        }
        int noDisProfit = noDisPrice - (noDisIdx * 10);

        cout << disProfit + noDisProfit << '\n';
    }

    return 0;
}