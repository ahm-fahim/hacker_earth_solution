#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        int sz = unique(arr.begin(), arr.end()) - arr.begin();

        if (sz == x)
            cout << "Good\n";
        else if (sz < x)
            cout << "Bad\n";
        else
            cout << "Average\n";
    }
    return 0;
}
