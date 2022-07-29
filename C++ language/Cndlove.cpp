#include <iostream>
using namespace std;

int main(){
    int T, N;
    cout << ":";
    cin >> T;
    while (T--){
        cin >> N;
        int A[N];
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            count += A[i];
        }
        if (count % 2 == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}