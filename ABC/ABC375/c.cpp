#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i=0;i<n;i++){cin >> a[i];}
    vector<string> b = a;
  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int ni=i,nj=j;
            int k=min({i+1,j+1,n-ni,n-nj})%4;
            while(k>0){
             swap(ni,nj);
             nj=n-nj-1;
             k--;
            }
            b[ni][nj]=a[i][j];
        }
    }

    cout << '\n';
    for(int i=0;i<n;i++){
        cout << b[i] << '\n';
    }
    return 0;
}