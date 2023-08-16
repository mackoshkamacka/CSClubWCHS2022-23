#include<iostream>
#include<math.h>
using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, n1, n2;
    cin>>n>>n2;  

    int max = n2;
    int n0 = n2;
    
    for(int i = 0; i < n; i++){
        cin>>n1; 
        
        if(max<n1)
            max = n1;
    }
    int nrg = max - n0; 

    cout<<nrg<<endl;
    return 0;
} 

