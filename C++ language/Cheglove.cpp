#include <iostream>
using namespace std; 
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        int N;
        cin >> N;
        long long int L[N],G[N];
        for(int i=0;i<N;i++)
            cin >> L[i];
        for(int i=0;i<N;i++)
            cin >> G[i];
        int flag_back,flag_front;
        flag_back = flag_front = 1;
        for(int i=0;i<N;i++)
            if(L[i] > G[i])
                flag_front = 0;
        for(int i=N-1;i>=0;i--)
            if(L[N-1-i] > G[i])
                flag_back = 0;

        if((flag_back) && (flag_front))
            cout << "both\n";
        else if((!flag_back) && (flag_front))
            cout << "front\n";
        else if((flag_back) && (!flag_front))
            cout << "back\n";
        else
            cout << "none\n";
    }
    return 0;
}