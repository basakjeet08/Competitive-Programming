#include <iostream>
using namespace std;
int main(){
    int Q,N;
    cout << ":";
    cin >> N >> Q;
    long long int A[N];
    for(int i= 0;i<N;i++)
        cin >> A[i];
    long long int max,min;
    max = min = A[0];
    for(int i=0;i<N;i++){
        if(max < A[i])
            max = A[i];
        if(min > A[i])
            min = A[i];
    }
    while(Q--){
        long long int t;
        cin >> t;
        if((t<=max) && (t>=min))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0 ;
}