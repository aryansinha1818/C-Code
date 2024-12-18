#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
void reverse(string &s, int i, int n)
{
    if (i > n / 2)
        return;
    swap(s[i], s[n - i - 1]);
    reverse(s, i + 1, n);
}
int main()
{
    string s = "rat