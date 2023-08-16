#include<iostream>
#include<math.h>
using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, n1, n2, n3;
    int peak = 0; 
    
    cin>>n>>n1>>n2; 
    if(n1>n2){
        peak++;
    }
    for(int i = 0; i<n-2; i++){
        cin>>n3; 
        if (n2>n1&&n2>n3){
            peak ++;
        }
        if (i==n-3&&n3>n2){
            peak++;
        }
        n1=n2;
        n2=n3;


    }
    cout<<peak<<endl; 
    return 0;
} 

 