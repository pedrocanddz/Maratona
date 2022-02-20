#include <stdio.h>
void mark(int x, int h){
    for(int i = 0; i < h; i++)
        printf("-");
    printf("\n");
}

void rule(int p, int r, int h)
{ 
    int m = (p + r)/2;
    if (h > 0) { 
       rule(p, m, h-1);
       mark(m, h);
       rule(m, r, h-1);
    }
}
void Rule(int n) {
    int i, p = 1;
    for (i = 0; i < n; i++)
       p *= 2; 
    rule(0, p, n);
}


int main()
{
    Rule(3);

    return 0;
}