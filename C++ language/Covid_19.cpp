#include <iostream>
using namespace std ;
int main(){
    int T,N,M;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N >> M ;
        int row,column;
        if(N%2 == 0)
            row = N/2;
        else
            row = N/2 + 1;

        if(M%2 == 0)
            column = M/2;
        else
            column = M/2 + 1;
        cout << row*column << "\n";
    }
    return 0 ;
}