#include <iostream>
using namespace std ;

int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        long long int N;
        if(N == 1)
            cout << N << endl;
        else if(N == 2)
            cout << 1 << endl;
        else if(N == 3)
            cout << 2 << endl;
        else
            cout << N << endl;
    }
    return 0;
}