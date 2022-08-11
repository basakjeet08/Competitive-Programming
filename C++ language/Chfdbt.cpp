#include <iostream>
using namespace std ;

int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        long long int N;
        cin >> N ;
        if(N%2 == 0)
            cout << N/2 << endl;
        else
            cout << (N/2)+1 << endl;
    }
    return 0;
}