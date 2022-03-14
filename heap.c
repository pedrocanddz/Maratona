/* Atividade 8, Porcas e Parafusos
Nome: Pedro Henrique Candido de Sousa
RA: 800863*/

#include <stdio.h>

void pareia(int A[], int B[], int n);
int partition(int v[], int vb[], int imin, int imax);
void quickSort(int v[], int vb[], int imin, int imax);

void insereEmHeap(int m, int v[]);
void sacodeHeap(int m, int v[]);
void HeapSort( int n, int v[]);
int main()
{
    int i=0;
    int parafuso[200000]={0}, porcas[200000]={0};
    int nTotal=0;

    scanf("%d", &nTotal);
    
    for(i = 0; i < nTotal; i++)
        scanf("%d", &porcas[i]);
    for(i = 0; i < nTotal; i++)
        scanf("%d", &parafuso[i]);

    // pareia(porcas, parafuso, nTotal);
    // quickSort(porcas, parafuso, 0 ,nTotal - 1);
    HeapSort( nTotal - 1, parafuso);
    for(i = 0; i < nTotal; i++){
        printf("%d - %d\n", porcas[i], parafuso[i]);
    }

    return 0;
}

void pareia(int A[], int B[], int n)//faz os pares com os dois vetores
{
  int aux;
  for(int i = 0; i < n; i ++){
    int k = i;
    while (B[i] != A[k]){
      k++;
    }
    aux = A[i];
    A[i] = A[k]; 
    A[k] = aux;
  }
}
void insereEmHeap(int m, int v[]){
    int f = m + 1;
    while (f > 1 && v[f/2] < v[f]){
        int t = v[f/2];
        v[f/2] = v[f];
        v[f] = t;
        f = f/2;
    }
}

void sacodeHeap(int m, int v[]){
    int t, f = 2;
    while (f <= m) {
        if(f< m && v[f] < v[f+1])
            ++f;
        if (v[f/2] >= v[f])
            break;
        t = v[f/2];
        v[f/2] = v[f];
        v[f] = t;
        f *= 2;
    }
}
void HeapSort( int n, int v[])
{
    int m;
    for (m = 1; m < n; m++){
        insereEmHeap(m , v);
    }
    for(m = n; m > 1; m--){
        int t = v[0];
        v[0] = v[m];
        v[m] = t;
        sacodeHeap(m - 1, v);
    }
}