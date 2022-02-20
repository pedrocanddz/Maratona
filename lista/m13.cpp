#include <iostream>
 
using namespace std;
int sumNotDivisables(int start, int finish, int div);
 
int main() {
    int x,y;
    cin >> x >> y;
    
    sumNotDivisables(x, y , 13);

    cout << sumNotDivisables(x, y , 13) << endl;
 
    return 0;
}

int sumNotDivisables(int start, int finish, int div){
    int sum = 0;
    if (start < finish){
        for(int i = start; i <= finish; i++){
            if (i % div != 0)
                sum += i;    
        }
    }else{
        for(int i = finish; i <= start; i++){
            if (i % div != 0)
                sum += i;   
        }
    }
    return sum;
}