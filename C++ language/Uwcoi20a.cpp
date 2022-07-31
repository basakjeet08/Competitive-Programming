#include <iostream>
using namespace std;

int main(){
    int T,N;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N ;
        int A[N];
        int max = -1;
        for(int i = 0;i<N;i++){
            cin >> A[i];
            if(max < A[i])
                max = A[i];
        }
        cout << max << "\n";        
    }
    return 0 ;
}