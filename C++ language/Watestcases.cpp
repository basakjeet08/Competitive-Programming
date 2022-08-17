#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int N ;
        cin >> N ;
        int A[N];
        for(int i=0;i<N;i++)
            cin >> A[i];
        string V ;
        cin >> V ;
        int min = A[0];
        for(int i=0;i<N;i++)
            if((V.at(i) == '0') && (min > A[i]))
                min = A[i];

        cout << min << endl ;
    }
    return 0 ;
}