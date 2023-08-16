#include<iostream>
#include<math.h>
#include<utility>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
     
    int n; 
    cin>>n; 
    int y = 0; 
    long long exp; 
    
    for(int i=1; i<n+1; i++){
    exp = pow(i,i);
    if(cbrt(exp)==floor(cbrt(exp))){
        y++; 
    }
    }
    cout<<y<<endl;
    return 0;
    } 

 