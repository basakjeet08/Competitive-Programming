#include <iostream>
using namespace std ;
int main(){
    int T ;
    cin >> T ;
    while(T --){
        int N, X ;
        cout << ":";
        cin >> N >> X ;
        int A[N];
        int total = 0 ;
        int min = 100;
        for(int i=0;i<N;i++){
            cin >> A[i];
            total = total + A[i];
            if(min > A[i])
                min = A[i];
        }
        int left = total%X;
        if(left >= min)
            cout << "-1" << endl ;
        else 
            cout << (total/X) << endl;
    }
    return 0 ;
}