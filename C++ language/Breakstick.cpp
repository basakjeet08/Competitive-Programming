#include <iostream>
using namespace std;

int main(){
    int T,N,X;
    cout << ":";
    cin >> T;
    while(T--){
        cin >> N >> X ;
        if(X%2 == 1 || N%2 == 0)
            cout << "YES \n";
        else
            cout << "NO \n";
    }
    return 0;
}