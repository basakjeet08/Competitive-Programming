#include <iostream>
using namespace std;
int main(){
    int T,N;
    cout << ":";
    cin >> T;
    while(T--){
        cin >> N ;
        long long A[N];
        for(int i = 0;i<N;i++)
            cin >> A[i];

        int count = 0;
        for(int i = 0;i<N;i++){
            for(int j = i;j<N;j++){
                int multiply = 1;
                int sum = 0;
                for(int k = i;k<=j;k++){
                    sum = sum + A[k];
                    multiply = multiply * A[k];
                }
                if(sum == multiply)
                    count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}