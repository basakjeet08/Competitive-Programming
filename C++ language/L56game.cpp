#include <iostream>
using namespace std;

int main(){
    int T,N;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N;
        int A[N];
        for(int i = 0;i<N;i++)
            cin >> A[i];

        int odd = 0;
        for(int i = 0;i<N;i++)
            if((A[i]%2 != 0))
                odd++;

        if(odd%2 == 0)
            cout << "1\n";
        else
            cout << "2\n";
    }
    return 0 ;
}