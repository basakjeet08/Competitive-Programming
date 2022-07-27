#include <iostream>
using namespace std;
int main(){
    int T,N;
    cout << ":";
    cin >> T;
    while(T--){
        cin >> N ;
        int A[N];
        for(int i = 0; i<N ; i++)
            cin >> A[i];

        int count[N] = {};
        for(int i = 0;i<N;i++){
            count[(A[i])-1]++;
        }
        int flag,min;
        flag = 0;
        min = 10000000;
        for(int i = 0;i<N;i++)
            if((count[i]<=min)&&(count[i] !=0 ))
                min = count[i];
        for(int i = 0;i<N;i++)
            if(count[i]==min)
                flag++;


        for(int i = 0;i<N;i++)
            



        cout << flag << "\n";
        if(flag>1)
            cout << min << "\n";
        else
            cout << (min- min/2) << "\n";
    }
    return 0 ;
}