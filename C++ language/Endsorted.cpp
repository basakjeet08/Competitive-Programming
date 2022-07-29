#include <iostream>
using namespace std;
int main(){
    int T,N;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N;
        int P[N];
        int iN,i1;
        for(int i = 0;i<N;i++){
            cin >> P[i];
            if(P[i] == 1)
                i1 = i;
            else if(P[i] == N)
                iN = i;
        }
        int sum = i1 + (N-1)-iN;
        if(i1 < iN)
            cout <<sum<< "\n";
        else
            cout << sum-1<< "\n";
    }
    return 0 ;
}