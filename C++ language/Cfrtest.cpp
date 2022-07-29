#include <iostream>
using namespace std;

int main(){
    int T,n;
    cout << ":";
    cin >>T ;
    while(T--){
        cin >> n;
        int A[n];
        int frequency[101] = {};
        for(int i = 0;i<n;i++){
            cin >> A[i];
            frequency[A[i]]++;
        }
        int count = 0;
        for(int i = 1;i<101;i++)
            if(frequency[i] != 0)
                count++;

        cout << count << "\n";
    }
    return 0 ;
}