#include <iostream>

using namespace std;
int somaResto(int v[], int n);

int main() 
{
    int N = 0, divs[1000];
    int resto = 0;
    cin >> N;

    for(int i = 0; i < N;i ++)
        cin >> divs[i];

    resto = somaResto(divs, N);
    cout << resto << endl;

    return 0;
}

int somaResto(int v[], int n)
{
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += v[i] - 1;
    }
    return soma;
}