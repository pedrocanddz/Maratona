#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string nome;
    int value;
    
    cin >> nome >> value;
    map <string, int> dict;
    dict.insert(nome, value);
    cout << dict.find("oi")
    return 0;
}

