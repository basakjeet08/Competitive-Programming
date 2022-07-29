#include <iostream>
using namespace std ;
int main(){
    int T,K;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> K;
        cout << (52%K) << "\n";    
    }
    return 0 ;
}