#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int G;
        cin >> G ;
        while(G--){
            int I,N,Q;
            cin >> I >> N >> Q ;
            if(Q == I)
                cout << N/2 << endl ;
            else
                cout << (N+1)/2 << endl ;
        }
    }
    return 0 ;
}