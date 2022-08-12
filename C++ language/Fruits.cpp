#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int N,M,K;
        cin >> N >> M >> K;
        int ini_diff = abs(M-N);
        int ans;
        if(K<ini_diff)
            ans = ini_diff - K;
        else if(K>ini_diff){
            K = K - ini_diff;
            ans = K%2;
        }
        else if(K==ini_diff)
            ans = 0;
        cout << ans << endl;

    }
    return 0;
}