#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int N;
        string A ;
        cin >> N >> A ;
        int count = 0 ;
        for(int i = 0;i<N/2;i++)
            if(A.at(i) != A.at(N-1-i))
                count++;
        cout << (count+1)/2 << endl;
    }
    return 0 ;
}