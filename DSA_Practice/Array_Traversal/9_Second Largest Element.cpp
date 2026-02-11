#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] < largest)
            secondLargest = a[i];
    }

    if(secondLargest == INT_MIN)
        cout << "Second largest element নেই \n";
    else cout << "Second largest element: " << secondLargest << "\n";

    return 0;
}