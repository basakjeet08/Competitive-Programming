#include <iostream>
using namespace std ;

int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        long long int P1,P2,K;
        cin >> P1 >> P2 >> K ;

        long long int total = P1 + P2;
        if((total/K)%2 == 0)
            cout << "CHEF\n";
        else
            cout << "COOK\n";
    }

    return 0 ;
}