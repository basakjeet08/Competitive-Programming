#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int N,X;
        cin >> N >> X ;
        string S;
        int pos[N+1] = {};
        cin >> S ;
        int ans = 0;
        pos[0] = X ;
        for(int i=0;i<N;i++){
            if(S.at(i) == 'L')
                X--;
            else
                X++;
            pos[i+1] = X;
            int count = 0;
            for(int j=0;j<=i+1;j++)
                if(pos[j] == X)
                    count++;
            if(count == 1)
                ans++;
        }
        cout << ans+1 << endl;
    }
    return 0;
}