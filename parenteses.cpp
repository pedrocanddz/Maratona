#include <iostream>

using namespace std;

int pilhavazia( int *t);
void empilha(char pilha[], int *t, char c);
int desempilha(char pilha[], int *t);
int pilha(char c[]);

int main()
{
    char s[1000];
    
    while((scanf("%s", &s[0])) != EOF )   {
        if(pilha(s))
            cout << "correct\n";
        else
            cout << "incorrect\n";
    }

    return 0;
}

int pilha(char c[])
{
    char pilha[1000];
    int t = 0;

    for(int i = 0; c[i] != '\0'; i++)
    {
        char p;
        switch (c[i])
        {
        case ')':
            if (pilhavazia(&t))
                break;
            p = desempilha(pilha, &t);
            if(p != '(')
                return 0;
            break;
        case '(':
         empilha(pilha, &t, c[i]);
            break;
        default:
        break;

        }
    }
    return pilhavazia(&t);

}

int desempilha(char pilha[], int *t)
{
    return pilha[*t--];
}

void empilha(char pilha[], int *t, char c)
{
    pilha[++(*t)] = c;
}

int pilhavazia( int *t)
{
    return *t <= 0;    
}