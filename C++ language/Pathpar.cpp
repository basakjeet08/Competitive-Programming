#include <iostream>
using namespace std; 

int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        long long int N,K;
        cin >> N >> K ;
        if(N%2==0)
            cout << "Yes\n";
        else if((N%2 != 0) && (K == 1))
            cout << "Yes\n";
        else if((N%2 != 0) && (K == 0))
            cout << "No\n";
    }
    return 0 ;
}