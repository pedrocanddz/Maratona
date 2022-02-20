#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
 
int fibonacci(int n, int calls);
int main() {

    cout << fibonacci(5, 1) << endl;

    return 0;
}
int fibonacci(int n, int calls)
{
    calls++;
    if(n <= 1){
        cout << calls << " ";
        return n;
    }
    calls++;
    return fibonacci(n - 1, calls) + fibonacci(n - 2, calls);
}