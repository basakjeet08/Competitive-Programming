#include <iostream>
using namespace std ;

int main(){
    int T;
    cout << ":";
    cin >> T;
    while(T--){
        int N;
        cin >> N ;
        int A[N];
        for(int i =0;i<N;i++)
            cin >> A[i];
        int mul = 1;
        for(int i=0;i<N;i++)
            mul *= A[i];
        
        if(mul%2 == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0; 
}