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

    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if(x >= 50 && y >= 50)
            cout << "Yes\n";
        else if(y >= 50 && z >= 50)
            cout << "Yes\n";
        else if(x >= 50 && z >= 50)
            cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}