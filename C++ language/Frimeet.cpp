#include <iostream>
using namespace std ;
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        long long int X1,X2;
        cin >> X1 >> X2 ;

        if(X1<=X2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0 ;
}