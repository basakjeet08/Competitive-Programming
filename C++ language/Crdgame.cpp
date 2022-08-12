#include <iostream>
using namespace std ;
int Calculate(int num){
    int sum = 0;
    int rem;
    while(num > 0){
        rem = num%10;
        sum += rem;
        num /= 10;
    }
    return sum ;
}
int main(){
    int T;
    cout << ":";
    cin >> T ;
    while(T--){
        int N;
        cin >> N ;
        int A[N],B[N];
        int chef_point,smith_point;
        chef_point = smith_point = 0;
        for(int i=0;i<N;i++)
            cin >> A[i] >> B[i];
        for(int i=0;i<N;i++){
            if(Calculate(A[i]) > Calculate(B[i]))
                chef_point++;
            else if(Calculate(A[i]) < Calculate(B[i]))
                smith_point++;
            else{
                chef_point++;
                smith_point++;
            }
        }
        if(chef_point > smith_point)
            cout << 0 << " " << chef_point << endl;
        else if(chef_point < smith_point)
            cout << 1 << " " << smith_point << endl;
        if(chef_point == smith_point)
            cout << 2 << " " << chef_point << endl;
    }
    return 0 ;
}