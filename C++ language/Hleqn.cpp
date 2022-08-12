#include <iostream>
#include <cmath>
using namespace std;
int satisfyTheEqn(long long int X){
    for(long long int i=1;i<=sqrt(X);i++){
        double value = ((double)X-(2*i))/(2+i);
        if((value == floor(value)) && (value >= 1))
            return 1;
        else if(value < 1)
            return 0;
    }
    return 0;
}
int main(){
    int T;
    cout << ":" ;
    cin >> T ;
    while(T--){
        long long int X ;
        cin >> X ;
        int flag = 0;
        if(X < 3)
            flag = 0;
        else
            flag = satisfyTheEqn(X);
            
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}