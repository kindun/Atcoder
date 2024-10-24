#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int n,c;cin >> n >> c;
    int t[n];
    int ame=1;
    
    for(int i=0;i<n;i++)cin >> t[i];

    int flag=t[0];
    for(int i=1;i<n;i++){
        if(c<=t[i]-flag){ame++;flag=t[i];}
    }
    cout << ame << endl;

    return 0;
}