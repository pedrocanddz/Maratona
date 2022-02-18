#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 0, a[5], b[5], partida = 0;
    
    string jog1, jog2;

    do {
    cin >> n;
    if(n != 0){
        cin >> jog1 >> jog2;
        for(int i = 0; i < n; i++){   
            cin >> a[i] >> b[i];
        }
        cout << "Teste " << partida + 1 << endl;
        for(int i = 0; i < n; i++)
            if((a[i] + b[i]) % 2 == 0){
                cout << jog1 << endl;
            }else{
                cout << jog2 << endl;
            }
    }
    partida++;
    }while(n != 0);
    return 0;
}