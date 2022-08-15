#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":" ;
    cin >> T ;
    while(T--){
        int N,X;
        cin >> N >> X ;
        if(N >= X)
            cout << X << endl ;
        else
            cout << (X-N-1) << endl ;
    }
    return 0 ;
}