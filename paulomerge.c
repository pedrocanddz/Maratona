#include<stdio.h>  //ALUNO: Paulo Cesar dos Anjos - 801490

void MergeSort(int P[], int vaux[], int imin, int imaxP);//FUNCAO MERGESORT
void merge(int P[], int vaux[], int imin, int imid, int imaxP);//FUNCAO MERGE PARA ORDENACAO
// int buscaBinaria(int P[], int chave, int inicio, int meio, int fim);//FUNÇÃO DE BUSCA BINÁRIA

int main(){
int vaux[10000] = {0}, imin = 0, imaxP = 0, imaxG = 0;//NECESSARIAS PARA ENTRADAS/ORDENACAO
int contador = 1, chave = 0, inicio = 0, meio = 0, fim = 0;//NECESSARIAS PARA A BUSCA BINARIA

scanf("%d", &imaxP);//QUANTIDADE DE POCAO
int P[imaxP];

for(int i = 0; i < imaxP; i++){//RECEBENDO O VETOR
    scanf("%d", &P[i]);
}
scanf("%d", &imaxG);//QUANTIDADE DE GARRAFA
int G[imaxG];
for(int i = 0; i < imaxG; i++){//RECEBENDO O VETOR
    scanf("%d", &G[i]);
}

MergeSort(P, vaux, imin, imaxP);

for(int i = 0; i < imaxP; i++)
    printf("%d\n", P[i]);

// for(int j = 0; j < imaxG; j++){
//     inicio = 0;
//     fim = imaxP-1;
//     chave = G[j];//TAMANHO DE EMBALAGEM QUE DESEJO ENCONTRAR
//     // contador = buscaBinaria(P, chave, inicio, meio, fim);//BUSCAR UM TAMANHO DE EMBALAGEM PROXIMO
//     if(contador == -1 || contador == 0){//NÃO HÁ O VALOR
//         printf("descartar\n");
// }else{
//         printf("%d\n", contador);
// }
// }
return 0;

}
void MergeSort(int P[], int vaux[], int imin, int imaxP){
        if (imaxP <= imin){
            return;
        }
            int imid = imin + ((imaxP - imin) / 2);
                MergeSort(P, vaux, imin, imid);
                    MergeSort(P, vaux, imid+1, imaxP);

                        merge(P, vaux, imin, imid, imaxP);
}
void merge(int P[], int vaux[], int imin, int imid, int imaxP){
       int i = imin, j = imid+1;
    for(int k = imin; k <= imaxP; k++){
        vaux[k] = P[k];
    }
    for(int k = imin; k <= imaxP; k++){
        if(i > imid){
            P[k] = vaux[j++];
        }
        else if(j > imaxP){
            P[k] = vaux[i++];
        }
        else if(vaux[j] < vaux[i]){
            P[k] = vaux[j++];
        }
        else{
            P[k] = vaux[i++];
        }
    }
}