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
        for(int i=0;i<N;i++)
            cin >> A[i];
        int flag = 0 ;
        for(int i=0;i<N;i++){
            total += A[i];
            if(A[i] == 1){
                flag = 1 ;
                break;
            }
        }
        if(flag)
            cout << "CHEF \n";
        else if(total%2 == 0)
            cout << "CHEFINA \n" ;
        else
            cout << "CHEF \n";   
    }
    return 0 ;
}