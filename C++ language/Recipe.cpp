#include <iostream>
using namespace std;

int main(){
    int T,N;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N ;
        int I[N];
        int max = -1;
        for(int i = 0 ; i<N; i++ ){
            cin >> I[i];
            if(max < I[i])
                max = I[i];
        }

        int flag = 1;   
        for(int i = max; i>=2;i--){
            int count = 0;
            for(int j = 0;j<N;j++)
                if((I[j]%i == 0))
                    count++;
            
            if(count == N){
                flag = i;
                break;
            }        
        }
        for(int i = 0;i<N;i++)
            cout << (I[i]/flag) << " ";
        cout << "\n";
    }
    return 0;
}