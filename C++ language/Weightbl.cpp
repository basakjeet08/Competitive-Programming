#include <iostream>
using namespace std;
int main(){
    int T,w1,w2,x1,x2,M;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> w1 >> w2 >> x1 >> x2 >> M ;
        w2 = w2 - w1 ;

        if(w2 < M*x1)
            cout << "0\n";
        else if(w2 > M*x2)
            cout << "0\n";
        else
            cout << "1\n";
    }
    return 0 ;
}