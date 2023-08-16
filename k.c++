#include<iostream>
#include<math.h>
#include<utility>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; 
    cin>>n; 
    
    pair<int, int> prevrook;
    cin>>prevrook.first>>prevrook.second;
    
    for (int i =0; i<n-1; i++){
        pair<int, int> rook;
        cin>>rook.first>>rook.second; 
        if(prevrook.first!=rook.first && prevrook.second!=rook.second){
            cout<<"NO"<<endl; 
            return 0;
        }
        prevrook = rook;
    }
    cout<<"YES"<<endl;
    return 0;
} 

 