#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int N;
        cin >> N ;
        long long A[N];
        long long total = 0 ;
        for(int i=0;i<N;i++){
            cin >> A[i];
            total += A[i];
        }
        if(total%2 == 0)
            cout << "CHEF \n" ;
        else
            cout << "CHEFINA \n";
        
    }


    return 0 ;
}