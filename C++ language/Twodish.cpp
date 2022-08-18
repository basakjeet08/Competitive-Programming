#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int N,A,B,C,D;
        cin >> N >> A >> B >> C ;
        if((B >= N) && (A+C >= N))
            cout << "YES\n";            
        else
            cout << "NO\n";
    }
    return 0;
}