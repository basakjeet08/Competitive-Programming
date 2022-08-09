#include <iostream>
using namespace std;
int main(){
    int N;
    cout << ":";
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++)
        cin >> A[i];
    int sum_mem = 0;
    int sum_stamp = 0;
    for(int i=0;i<N;i++){
        sum_stamp += A[i];
        sum_mem +=(i+1); 
    }
    if(sum_mem == sum_stamp)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0 ;
}