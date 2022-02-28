#include <iostream>

using namespace std;

void fib(long long int fib[], int n);

int main()
{
    long long int fibarray[61] = {0};
    int n, t[10000] = {0};
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> t[i];
    }
    fib(fibarray, 60);

    for (int i = 0; i < n; i++){
        // cout << "Number " << t[i] + 1 << " " << fibarray[t[i] +1 ] << endl;
        cout << "Fib(" << t[i] << ") = " << fibarray[t[i]] << endl;
    }

    return 0;
}

void fib(long long int fib[], int n)
{
    long long int a = 0, b = 1, c = 0;
    for(int i = 1; i <= n; i++){
        c = a + b;
        a = b;
        b = c;        
        fib[i] = a;
    }
}