#include <iostream>
using namespace std ;

int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        int N,X,S,A,B;
        cin >> N >> X >> S;
        while(S--){
            cin >> A >> B;
            if(A == X)
                X = B;
            else
                X = A;
        }
        cout << X << "\n";
    }
    return 0 ;
}