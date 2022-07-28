#include <iostream>
using namespace std;

int main(){
    int T,N,K;
    cout << ":";
    cin >> T;
    while(T--){
        cin >> N >> K;
        int A[N];
        for(int i = 0 ; i <N ; i++)
            cin >> A[i];
        
        int waste = 0;
        int flag = -1;
        for(int i = 0;i<N;i++){
            if((A[i] + waste) < K){
                flag = i+1;
                break;
            }
            else
                waste = A[i] - K;
        }
        if(flag != -1)
            cout << "YES \n";
        else
            cout << "No " << flag << "\n";


    }
    return 0 ;
}