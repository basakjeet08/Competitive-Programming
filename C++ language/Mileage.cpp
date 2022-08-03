#include <iostream>
using namespace std ;
int main(){
    int T;
    cout << ";";
    cin >> T;
    while(T--){
        float N,X,Y,A,B;
        cin >> N >> X >> Y >> A >> B;
        float petrol,diesel;
        petrol = (N/A)*X;
        diesel = (N/B)*Y;
        if(petrol < diesel)
            cout << "PETROL\n";
        else if(diesel < petrol)
            cout << "DIESEL\n";
        else
            cout << "ANY\n";
    }
    return 0;
}