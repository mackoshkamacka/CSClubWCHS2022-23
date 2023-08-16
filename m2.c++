#include<iostream>
#include<math.h>
#include<utility>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int l, r; 
    cin>>l>>r; 
    
    long long lower = (cbrt(l));  
    long long upper = floor(cbrt(r));


    cout<<upper-lower+(lower==cbrt(l))<<endl;
    return 0;
} 

 