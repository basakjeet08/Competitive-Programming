#include <stack>
#include <queue>
#include <deque>
#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<int> s;
    s.push_back(0);
    s.push_back(10);
    s.push_back(20);
    s.push_back(30);
    s.push_back(40);
    s.push_back (50);
    for(int i :  s)
        cout << i << endl ;
}