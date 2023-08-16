#include<iostream>
#include<math.h>
#include<utility>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int l, r; 
    cin>>l>>r; 
    if(l%3==1){
        l+=2;
    }
    else if(l%3==2){
        l++;
    }
    
    int range = (r-l)/3 + 1;
    cout<<range<<endl;

    return 0;
} 

 