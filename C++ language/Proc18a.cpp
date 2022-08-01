#include <iostream>
using namespace std ;
int main(){
    int T,N,K;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N >> K ;
        int A[N];
        for(int i = 0;i<N;i++)
            cin >> A[i];
        int max = -1;
        for(int i = 0;i<=N-K;i++){
            int sum = 0;
            for(int j = 0;j<K;j++)
                sum += A[i+j];
            if(sum > max)
                max = sum ;
        }
        cout << max << "\n";
    }
    return 0 ;
}