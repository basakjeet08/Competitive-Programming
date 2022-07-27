#include <iostream>
using namespace std;

int main(){
    int T,N;
    cout << ":";
    cin >> T;
    while(T--){
        cin >> N;
        int B[N];
        for(int i = 0 ; i<N ; i++)
            cin >> B[i];

        int count = 0;
        for(int i = 0 ; i<N ; i++)
            if(B[i] == 1)
                count++;
                
        if(count%2 == 0)
            cout << "Yes \n";
        else
            cout << "No \n";
    }
    return 0 ;
}