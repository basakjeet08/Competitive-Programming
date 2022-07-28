#include <iostream>
#include <string>
using namespace std;
int main(){
    int T,N;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N;
        string S;
        cin.ignore();
        cin >> S;
        int frequency[27] = {};
        for(int i = 'a';i<='z';i++)
            for(int j = 0;j<N;j++)
                if(S[j] == i)
                    frequency[i-96]++;
                
        int flag = 0;
        for(int  i = 1;i<=26;i++){
            if(frequency[i]%2 !=0){
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}