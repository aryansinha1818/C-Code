#include <iostream>
#include <string>
using namespace std;

string reverseString(string s, int i = 0)
{
    if (i == s.size() / 2)
        return s;
    swap(s[i], s[s.size() - i - 1]);
    return reverseString(s, i + 1);
}

int main()
{
    string s = "recursion";
    cout << reverseString(s) << endl; // Outputs "noisrucer"
}
