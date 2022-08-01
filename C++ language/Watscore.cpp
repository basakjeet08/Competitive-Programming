#include <iostream>
using namespace std ;
int main(){
    int T,N;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N;
        int p[N],s[N];
        for(int i = 0;i<N;i++)
            cin >> p[i] >> s[i];
        
        int frequency[11] = {};

        for(int i = 0;i<N;i++)
            if((frequency[p[i]-1] < s[i]) && (p[i] <= 8))
                frequency[p[i]-1] = s[i];

        int sum = 0;
        for(int i = 0;i<11;i++)
            sum += frequency[i];

        cout << sum << "\n";
    }
    return 0 ;
}