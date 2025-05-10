#include <iostream>
using namespace std;
namespace first
{
    void fun()
    {
        cout << "a";
    }
}
namespace second
{
    void fun()
    {
        cout << "b";
    }
}
using namespace first;
int main()
{
    fun();
    return 0;
}