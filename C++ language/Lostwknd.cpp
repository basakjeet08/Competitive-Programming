#include <iostream>
using namespace std;

int main(){
    int T,P;
    cout << ":";
    cin >> T ;
    while(T--){
        int A[5];
        for(int i=0;i<5;i++)
            cin >> A[i];
        cin >> P ;

        int sum = 0;
        for(int i=0;i<5;i++)
            sum += P*A[i];
        
        if(sum <= 120)
            cout << "No\n";
        else
            cout << "Yes\n";

    }
    return 0 ;
}