#include <iostream>
using namespace std ;
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        int N,X,Y;
        // cin >> N >> X >> Y;
        
        // int A[N];
        // for(int i =0;i<N;i++)
        //     cin >> A[i];



        cin >> X ;
        for(int i=1;i<100;i++){
            cout << (i^X) << " ";
        }
    }





    return 0;
}