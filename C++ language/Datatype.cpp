#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int T;
  cout << ":";
  cin >> T;
  while(T--){
      int N,X;
      cin >> N >> X;
      int ans=X%(N+1);
      cout<<ans<<endl;
  }
	return 0;
}