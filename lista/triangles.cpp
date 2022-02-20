#include <iostream>
#include <math.h>


using namespace std;
void sort(double v[], int n);

int main()
{
    double lados[3];
    double resultRight;
    

    for(int i = 0;i < 3; i++)
        cin >> lados[i];

    sort(lados, 3);
    resultRight = lados[1] + lados[2];

    if(lados[0] >= resultRight){
        cout << "NAO FORMA TRIANGULO" << endl;
    }    
    else if (pow(lados[1], 2) == pow(resultRight, 2))
    {
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if (pow(lados[1], 2) > pow)
    
    // cout << lados[0] << " " << resultRight << " " << lados[1] << " " << lados[2] << endl;

    return 0;
}

void sort(double v[], int n){
    int aux = 0;
    for(int i = 0; i < n - 1 ; i++){
        int index_maior = i;
        for(int j = i + 1; j < n ; j++){
            if (v[j] > v[index_maior]){
                index_maior = j;
            }
        }
        aux = v[i];
        v[i] = v[index_maior];
        v[index_maior] = aux;
    }
}