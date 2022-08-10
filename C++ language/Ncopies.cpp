#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T ;
    while(T--){
        int N,M;
        cin >> N >> M;
        string A,B;
        cin >> A;
        for(int i = 0;i<M;i++)
            B = B+A;
        int sum[N*M]= {};
        int sum2 = 0;
        for(int i=0;i<N*M;i++){
            sum2 = sum2 + (B[i] - '0');
            sum[i] = sum2;
        }
        int count = 0;
        int start = (sum[N*M-1]*N)/2;
        for(int i=start;i<N*M;i++)
            if(sum[i] == (sum[N*M-1]-sum[i]))
                count++;
            else if(sum[i] > (sum[N*M-1]-sum[i]))
                break;
        cout << count << endl;
    }
    return 0;
}