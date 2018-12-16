#include <iostream>
using namespace std;
 
void reverse()
{
    double x;
    if (cin >> x)
    {

        reverse();
        cout << x << "\n";
    }
}
 
int main()
{
    reverse();
    return 0;
}
