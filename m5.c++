#include<iostream>
#include<math.h>
#include<utility>
#include<bits/stdc++.h>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
     
    int r; 
    cin>>r; 

    long long threes = (r/3)+1;
    long long upper = cbrt(r);

    cout<<threes+(2*upper/3)-(int(cbrt(r))%3 ==0)<<endl; 
    return 0;
    } 
