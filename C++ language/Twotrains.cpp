#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int N ;
        cin >> N ;
        int P[N-1];
        for(int i=0;i<N-1;i++)
            cin >> P[i];
        int wait = P[0];
        int sum = P[0];
        for(int i=1;i<N-1;i++){
            sum = sum + P[i];
            if(wait < sum)
                wait = wait + (sum - wait);
        }
        wait += P[N-2];
        cout << wait << endl;
    }
    return 0;
}