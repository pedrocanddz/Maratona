#include <iostream>

using namespace std;
void fib(int n);
int main() {
    int n, result;
    cin >> n;

    fib(n);
    cout << endl;
    return 0;
}
void fib(int n)
{
    int a = 1, b = 1, c = 0;
    cout << "0";
    for(int i = 1; i < n; i++){
        cout << " " << a ; //resolver isso ultimo nao printar  " "
        c = a + b;
        a = b;
        b = c;
    }
}