#include <iostream>



int main () 
{
    using namespace std;
    int l;
    char f;
    int m[12][12];
    
    cin >>  l >> f;
    
    for(int i = 0 ; i < 12; i++)
        for(int j = 0; j < 12; j++)
            cin >> m[i][j];

    double sum = 0;
    for(int i = 0; i < 12; i++)
        sum += m[l][i];    
    if(f == 'S'){
        cout << printf("%.1f\n", sum);
    }else{
        sum = sum / 12.0;
        cout << printf("%.1f\n", sum);
    }

    
    return 0;   
}