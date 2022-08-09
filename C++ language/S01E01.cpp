#include <iostream>
using namespace std ;

int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        int N;
        cin >> N ;
        if(N>=21)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}