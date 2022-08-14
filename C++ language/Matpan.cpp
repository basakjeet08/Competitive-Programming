#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int price [26];
        for(int i=0;i<26;i++)
            cin >> price[i];
        string S ;
        cin >> S ;
        int sum = 0 ;
        for(int i = 97;i<=122 ; i++){
            int flag = 0;
            for(int j = 0;j<S.length();j++){
                if(S.at(j) == i)
                    flag = 1 ;
            }
            if(flag == 0)
                sum = sum + price[i-97];
        }
        cout << sum << endl ;
    }
    return 0 ;
}