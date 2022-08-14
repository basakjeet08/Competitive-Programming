#include <iostream>
using namespace std ;
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        long long int N ;
        cin >> N;
        long long int pos = 0;
        if(N%2 == 0)
            pos = N/2;
        else
            pos = -(N/2 + 1);
        cout << pos << endl ;
    }
    return 0 ;
}