#include <iostream>
using namespace std;
int digitSum(int );
int main(){
    int T,N;
    cout << ":";
    cin >> T ;
    while(T--){
        cin >> N ;
        bool isTrue = true;
        if((digitSum(N)%2 == 0) && (digitSum(N+1)%2 == 0))
            cout << (N+2) << "\n";
        if((digitSum(N)%2 == 0) && (digitSum(N+1)%2 == 1))
            cout << (N+1) << "\n";
        if((digitSum(N)%2 == 1) && (digitSum(N+1)%2 == 1))
            cout << (N+2) << "\n";
        if((digitSum(N)%2 == 1) && (digitSum(N+1)%2 == 0))
            cout << (N+1) << "\n";  
    }
    return 0 ;
}
int digitSum(int num){
    int sum = 0;
    while(num>0){
        int rem;
        rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    return sum;
}