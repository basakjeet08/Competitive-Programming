#include <iostream>
#include <algorithm>
using namespace std ;
int main(){
    int T;
    long long maxT , sumN , maxN ;
    cout << ":";
    cin >> T;
    while(T--){
        cin >> maxT >> maxN >> sumN ;
        long long iteration = 0;
        for(int i = maxT;i>0;i--){
            if(sumN>0){
                long long N = min(maxN,sumN); 
                iteration = iteration + (N*N);
                sumN = sumN - N ;
            }
            else
                break;
        }
        cout << iteration << "\n";
    }
    return 0 ;
}