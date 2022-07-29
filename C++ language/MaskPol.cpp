#include <iostream>
using namespace std;

int main(){
    int T,A,N;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N >> A;

        if((N-A)>=A)
            cout << A << "\n";
        else
            cout << (N-A) << "\n";
    }
    return 0 ;
}