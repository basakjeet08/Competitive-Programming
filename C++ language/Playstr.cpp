#include <iostream>
using namespace std ;
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        int N;
        cin >> N ;
        string S,R;
        cin >> S;
        cin >> R;

        int S_0s,R_0s;
        S_0s = R_0s = 0;
        for(int i=0;i<N;i++){
            if(S.at(i) == '0')
                S_0s++;
            if(R.at(i) == '0')
                R_0s++;
        }
        if(S_0s == R_0s)
            cout << "YES\n";
        else
            cout << "NO\n";
    }


    return 0;
}