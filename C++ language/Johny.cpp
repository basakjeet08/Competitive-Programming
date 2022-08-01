#include <iostream>
#include <algorithm>
using namespace std ;
int main(){
    int T,N,K;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N ;
        int A[N];
        for(int i = 0;i<N;i++)
            cin >> A[i];
        cin >> K ;
        int pos = K-1;
        for(int i = 0;i<N-1;i++){
            for(int j = 0;j<N-1-i;j++){
                if(A[j] > A[j+1]){
                    swap(A[j],A[j+1]);
                if(j==pos)
                    pos = j+1;
                else if((j+1)==pos)
                    pos = j;
                }     
            }
        }
        cout << pos+1 << "\n";
    }
    return 0 ;
}