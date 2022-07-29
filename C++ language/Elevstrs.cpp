#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    int N,T,V1,V2;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N >> V1 >> V2;
        float T1 = (float)(N*sqrt(2))/V1;
        float T2 = (float)N*2/V2;
        if(T1<T2)
            cout << "Stairs\n";
        else
            cout << "Elevator\n";

    }
    return 0 ;
}