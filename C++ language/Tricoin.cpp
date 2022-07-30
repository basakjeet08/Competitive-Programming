#include <iostream>
using namespace std ;

int main(){
    int T,N;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N ;
        int i = 1;
        while(N>0){
            if((N-i)>=0){
                N-=i;
                i++;
            }
            else
                break;
        }
        cout << (i-1) << "\n";
    }
    return 0;
}