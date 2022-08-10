#include <iostream>
using namespace std;
int main(){
    int T;
    cout << ":";
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int A[N];
        int frequency[N] = {};
        for(int i=0;i<N;i++){
            cin >> A[i];
            frequency[A[i] - 1]++;
        }
        int max = frequency[0];
        for(int i = 0;i<N;i++)
            if(max < frequency[i])
                max = frequency[i];
        int count = 0;
        for(int i=0;i<N;i++)
            if(max == frequency[i])
                count++;
        if(count > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
        
    }
    return 0;
}