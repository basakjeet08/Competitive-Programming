#include <iostream>
using namespace std ;
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        int N,A,B;
        cin >> N >> A >> B ;
        string S;
        cin >> S ;
        int no_0;
        no_0 = 0;
        for(int i=0;i<N;i++)
            if(S.at(i) == '0')
                no_0++;
        int ans = no_0*A + (N-no_0)*B;
        cout << ans << endl;
    }
    return 0;
}