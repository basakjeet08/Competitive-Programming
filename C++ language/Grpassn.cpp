#include <iostream>
using namespace std ;
int main(){
    int T,N;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N;
        int P[N];
        for(int i = 0 ;i<N ;i++)
            cin >> P[i];
        int frequency[N+1] = {};

        for(int i = 0;i<N;i++)
            frequency[P[i]]++;
        int flag = 0;
        for(int i = 1;i<=N;i++)
            if(frequency[i]%i != 0)
                flag = 1;

        if(flag == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0 ;
}