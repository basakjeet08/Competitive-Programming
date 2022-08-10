#include <iostream>
#include <cmath>
using namespace std;
long long int Calculate(int N){
    int count = 0;
    for(int i=1;i<=sqrt(N)+1;i++){
        if(pow(2,i) <= N)
            count++;
        else
            break;
    }
    return (N-(pow(2,count)));
}
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        long long int N;
        cin >> N;
        int count = 0;
        while(N!=0){
            N = Calculate(N);
            count++;
        }
        cout << (count-1) << endl;
    }
    return 0;
}