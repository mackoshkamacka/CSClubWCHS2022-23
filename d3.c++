#include<cmath>
#include<iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
 
    int ones = 0;
    int onezeroes = 0;
    int onezeroones = 0;

    for (int i = 0; i < n; i++) {
        bool b;
        cin >> b;
        //take in b as input n times
        if (b) {
            ones++;
            //trailing ones 
            onezeroones += onezeroes;
            //arithmetic series - addition 
        }
        else
            onezeroes += ones;
    }
    cout << onezeroones;
    return 0;
}