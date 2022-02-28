#include <iostream>

using namespace std;

int main()
{
    int par[4] = {0}, impar[4] = {0};
    int n = 0, value = 0;
    //cin >> n;
    int kp = 0, ki = 0;
    for(int i = 0; i < 15; i++)
    {
        cin >> value;
        if (value % 2 == 0)
        {
            par[kp] = value;
            cout << par[kp] << "em i = " << i << endl;
            kp++;
        }else{
            impar[ki] = value;
            ki++;
        }
        if(kp == 5)
        {
            for(int j = 0; j < kp; j++)
            {
                cout << "par[" << j << "] = " << par[j] << endl;
                par[j] = 0;
            }
            kp = 0;
        }
        if(ki == 5)
        {
            for( int j = 0; j < ki; j++)
            {
                cout << "impar[" << j << "] = " << impar[j] << endl;
                impar[j] = 0;
            }
            ki = 0;
        }
    }
    for(int i = 0; i < 5 ; i++)
    {
        if(impar[i] != 0)
        {
            cout << "impar[" << i << "] = " << impar[i] << endl;
            
        }
    }
    for(int i = 0; i < 5 ; i++)
    {
        if(par[i] != 0)
        {
            cout << "par[" << i << "] = " << par[i] << endl;
            
        }
    }

}
