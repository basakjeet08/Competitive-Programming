#include <iostream>
using namespace std;
int main(){
   int T,S,A,B,C;
   cout << ":";
   cin >> T ;
   while(T--){
    cin >> S >> A >> B >> C ;
    int new_prize = S + (float)S*C/100;
    if((new_prize <= B) && (new_prize >= A))
        cout << "YES\n";
    else
        cout << "NO \n";
   }
   return 0; 
}