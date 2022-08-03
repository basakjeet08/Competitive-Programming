#include <iostream>
using namespace std ;
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        int N,X;
        cin >> N >> X;
        int high_gcd =(2*N)-1;
        int start = N - (high_gcd-X);
        if((X<N) || (X>high_gcd))
            cout << "-1";
        else{
            cout << start << " ";
            for(int i = 1;i<=N;i++)
                if(i!=start)
                    cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}