#include <iostream>


using namespace std;
int calls = 0;
int fib(int n);

int main()
{
    int n, x[40];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i];

    for (int i = 0; i < n; i++){
        int result = fib(x[i]);
        cout << "Fib(" << x[i] << ") = " << calls - 1 << " calls = " << result << endl;
        calls = 0;
    }
    return 0;
}

int fib(int n)
{
    calls ++;
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
