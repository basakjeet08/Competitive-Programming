#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cout << ";";
    cin>>t;
	while(t--){
	    int n,x,y;
        cin>>n>>x>>y;
	    string s;
        cin>>s;
	    int cnt_0=0;
        int cnt_1=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1') 
                cnt_1++;
	        else 
                cnt_0++;
	    }
	    if(cnt_0==0 || cnt_1==0) 
            cout<<"0\n";
	    else{
            cout<<min(x,y)<<"\n";
        }
	        
	    
	}
	return 0;
}
