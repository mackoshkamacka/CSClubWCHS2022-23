#include<iostream>
#include<math.h>
#include<utility>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; 
    cin>>n; 
    int count = 2;
    int factors = 0;
    
    while(n>1){
        while (n%count==0){
            n = n/count; 
            cout<<n<<endl;
            factors+=2;
        }
        count++; 
    }
    
        
    cout<<2+(factors*2)<<endl;
    return 0;
} 

 