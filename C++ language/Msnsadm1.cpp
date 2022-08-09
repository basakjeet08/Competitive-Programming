#include <iostream>
using namespace std ;

int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        int N;
        cin >> N;
        int A[N],B[N];
        for(int i=0;i<N;i++)
            cin >> A[i];
        for(int i=0;i<N;i++)
            cin >> B[i];

        int max = (A[0]*20) - (B[0]*10);
        for(int i=0;i<N;i++)
            if(max < ((A[i]*20) - (B[i]*10)))
                max = (A[i]*20) - (B[i]*10);
        
        if(max < 0)
            max = 0;
        cout << max << endl;
    }
    return 0 ;
}