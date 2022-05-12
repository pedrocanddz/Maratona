#include <iostream>
#include <math.h>


using namespace std;
void sort(double v[], int n);

int main()
{
    double lados[3];
    double powCB;
    

    for(int i = 0;i < 3; i++)
        cin >> lados[i];

    sort(lados, 3);
    powCB = pow(lados[1], 2) + pow(lados[2], 2);
    
    double powA = pow(lados[0], 2);
    if(lados[0] >= lados[1] + lados[2]){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else{
    if (powA == powCB)
        cout << "TRIANGULO RETANGULO" << endl;
    if(powA > powCB)
        cout << "TRIANGULO OBTUSANGULO" << endl;
    if(powA < powCB)
        cout << "TRIANGULO ACUTANGULO" << endl;
    if(lados[0] == lados[1] || lados[0] == lados[2] || lados[1] == lados[2]){
        if(lados[1] == lados[2] && lados[0] == lados[1]){
            cout << "TRIANGULO EQUILATERO" << endl;
        }else{
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    }
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