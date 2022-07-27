#include <iostream>
using namespace std ;

int main(){
    int T,N;
    cout << ":";
    cin >> T;
    while(T--){
        cin >> N;
        char result[N];
        for(int i = 0 ;i<N;i++)
            result[i] = '0';

        if(N%2==0)
            result[0] = result[(N-1)] = '1';
        else
            result[N/2] = '1';

        for(int i = 0;i<N;i++)
            cout << result[i];
        cout<<"\n";
    }
    return 0 ;
}