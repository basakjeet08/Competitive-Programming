#include <iostream>
using namespace std;
int main(){
    int T ;
    cin >> T ;
    while(T--){
        int N;
        cin >> N;
        int A[N];
        int frequency[11] = {0};
        for(int i=0;i<N;i++)
            cin >> A[i];
        for(int i=0;i<N;i++)
            frequency[A[i]]++;
        int max = frequency[0];
        int flag = 0;
        for(int i=1;i<11;i++)
            if(max < frequency[i]){
                max = frequency[i];
                flag = i;
            }
        int count = 0;
        for(int i=1;i<11;i++)
            if(frequency[i] == max)
                count++;

        if(count > 1)
            cout << "CONFUSED\n";
        else
            cout << flag << endl;
    }
    return 0 ;
}