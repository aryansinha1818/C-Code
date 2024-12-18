#include <bits/stdc++.h>
using namespace std;

void printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n, int &ans)
{
    if (ind == n)
    {
        if (s == sum)
        {
            ans = ans + 1;
        }
        return;
    }

    ds.push_back(arr[ind]);
    s += arr[ind];
    printS(ind + 1, ds, s, sum, arr, n, ans);
    s -= arr[ind];
    ds.pop_back();

    // not pick
    printS(ind + 1, ds, s, sum, arr, n, ans);
}

int main()
{

    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    int ans = 0;
    printS(0, ds, 0, sum, arr, n, ans);
    cout << ans;

    return 0;
}
