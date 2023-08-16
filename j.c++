#include<iostream>
#include<math.h>
using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, n1, n2;
    int counter = 1; 
    
    cin>>n>>n1; 
    for(int i = 0; i<n-1; i++){
        cin>>n2;
        if(n2==n1){
            counter++;
        }
        
        else{
            cout<<n1<<" "<<counter<<" ";
            counter = 1; 
        }
        n1 = n2;
    }
    cout<<n1<<" "<<counter<<endl; 

    return 0;
} 

