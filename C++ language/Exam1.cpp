#include <iostream>
using namespace std ;
int main(){
    int T ;
    cout << ":";
    cin >> T ;
    while(T--){
        int N;
        cin >> N ;
        string chef,ans;
        cin >> ans >> chef ;
        int count = 0 ;
        for(int i=0;i<N;i++){
            if(chef.at(i) == ans.at(i))
                count++ ;
            else if((chef.at(i) != ans.at(i)) && (chef.at(i) != 'N'))
                i++;
        }
        cout << count << endl ;
    }
    return 0 ;
}