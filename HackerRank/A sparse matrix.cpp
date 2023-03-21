#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                c++;
            }
        }
    }
    if(c>(n*m)/2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
