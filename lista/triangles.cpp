#include <iostream>
#include <math.h>


using namespace std;
void sort(double v[], int n);

int main()
{
    double a, b, c;
    double powCB;
    cin >> a >> b >> c;

    if(a < b){
        double aux = a;
        a = b;
        b = aux;
    }
    if(a < c){
        double aux = a;
        a = c;
        c = aux;
    }
    if(b < c){
        double aux = b;
        b = c;
        c = aux;
    }

    powCB = pow(b, 2) + pow(c, 2);
    
    double powA = pow(a, 2);
    if(a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else{
    if (powA == powCB)
        cout << "TRIANGULO RETANGULO" << endl;
    if(powA > powCB)
        cout << "TRIANGULO OBTUSANGULO" << endl;
    if(powA < powCB)
        cout << "TRIANGULO ACUTANGULO" << endl;
    if(a == b || a == c || b == c){
        if(b == c && a == b){
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