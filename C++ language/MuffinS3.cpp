#include <iostream>
using namespace std;

int main(){
    int N,T,A;
    cout << ":";
    cin >> T;
    while(T--){
        cin >> N;
        N = (N/2) + 1;
        cout << N << "\n" ;
    }
    return 0;
}