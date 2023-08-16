#include<iostream>
#include<math.h>
#include<utility>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
     
    int n; 
    cin>>n; 
    long long exp = pow(n,n);
    if(cbrt(exp)==floor(cbrt(exp))){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
} 

 