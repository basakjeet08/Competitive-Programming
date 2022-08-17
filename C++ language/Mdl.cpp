#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int N;
        cin >> N ;
        int A[N];
        for(int i=0;i<N;i++)
            cin >> A[i];
        int max = A[0];
        int min = A[0];
        for(int i=0;i<N;i++){
            if(max < A[i])
                max = A[i];
            if(min > A[i])
                min = A[i];
        }
        for(int i=0;i<N;i++){
            if(A[i] == min)
                cout << min << " ";
            if(A[i] == max)
                cout << max << " ";
        }
        cout << endl;
    }
    return 0 ;
}