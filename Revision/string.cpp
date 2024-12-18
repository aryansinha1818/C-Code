/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1 = "tat1";
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    if (s1 == s2)
        cout << "this";
    else
        cout << "that";
}
