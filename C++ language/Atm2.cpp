#include <iostream>
#include <string>
using namespace std;

int main(){
    int T,N,K;
     cout << ":";
     cin >> T;
     while(T--){
        cin >> N >> K ;
        int A[N];
        for(int i = 0;i<N ; i++)
            cin >> A[i];

        string s = "";
        for(int i = 0;i<N;i++){
            if(A[i] <= K){
                s = s + "1";
                K = K - A[i];
            }
            else
                s = s + "0";
                
        }
        cout << s << "\n";
    }
    return 0;
}