#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        for (int i = m; i <= n; i++){
            bool flag=true;
            if(i==1)
                i++;
            for (int j = 2; j <= sqrt(i); j++){
                if(i%j==0){
                    flag=false;
                    break;
                }  
                if(flag==true)
                    cout<<i<<endl;
            }
        }

      }
      return 0 ;     
}