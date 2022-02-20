#include <iostream>

using namespace std;

long int fac(int n);

int main()
{
    int n;
    cin >> n;

    cout << fac(n) << endl;
    return 0;
}

long int fac(int n)
{
    if (n <= 1)
        return n;
    return n * fac(n - 1);    
}