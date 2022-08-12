#include <iostream>
#include <cmath>
using namespace std;
int isCorrect(int n,int m){
    while(n<m){
        n*=2;
    }
    if(n==m)
        return 1;
    return 0;
}
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        long long int A,B;
        cin >> A >> B ;
        int flag = 0;
        if(A > B)
            flag = isCorrect(B,A);
        else if(B >= A)
            flag = isCorrect(A,B);
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}