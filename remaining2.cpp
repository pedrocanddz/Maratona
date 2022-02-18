#include <iostream>

using namespace std;
void somaRemaining2(int n);

int main()
{
    int n = 0;
    cin >> n;
    somaRemaining2(n);

    return 0;
}

void somaRemaining2(int n)
{
    for(int i = 1; i < 10000; i++)
        if(i % n == 2)
            cout << i << endl;   
}