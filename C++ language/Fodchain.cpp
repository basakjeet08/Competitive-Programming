#include <iostream>
using namespace std ;

int main(){
    int T,E,K;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> E >> K ;
        int count = 0;

        while(E>0){
            count++;
            E= E/K;
        }
        cout << count << "\n";
    }
    return 0 ;
}