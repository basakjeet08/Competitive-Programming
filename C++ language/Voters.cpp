#include <iostream>
using namespace std ;

int main(){
    int N1,N2,N3;
    cin >> N1 >> N2 >> N3;
    int A[N1+N2+N3];
    int max = 0;
    int count;
    for(int i=0;i<(N1+N2+N3);i++){
        cin >> A[i];
        if(max < A[i])
            max = A[i];
    }
    int freq[max] = {};
    for(int i=0;i<N1+N2+N3;i++)
        freq[A[i]-1]++;
    int ans[max];
    for(int i=0;i<=max;i++){
        if(freq[i] > 0){
            ans[count] = i+1;
            count++;
        }
    }
    cout << count << endl;
    for(int i=0;i<max;i++)
        cout << ans[i] << endl;
    return 0 ;
}