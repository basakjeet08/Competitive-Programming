#include <iostream>
#include <algorithm>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int N ;
        cin >> N ;
        int V[N];
        for(int i= 0;i<N;i++)
            cin >> V[i];
        sort(V,V+N);
        long long diff = abs(V[0] - V[1]);
        for(int i=1;i<N-1;i++){
            if(diff == 0)
                break;
            else if(diff > (abs(V[i] - V[i+1])))
                diff = abs(V[i] - V[i+1]);
        }
        cout << diff << endl ;
    }
    return 0 ;
}