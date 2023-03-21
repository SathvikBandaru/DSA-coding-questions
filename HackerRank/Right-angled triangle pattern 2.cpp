#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,sum;
    cin>>n;
    k=n-1;
    for(int i=1;i<=n;i++){
        sum=i;
        for(int j=0;j<i;j++){
            cout<<sum<<" ";
            sum=sum+k;
            k--;
        }
        cout<<endl;
        k=n-1;
    }
    
    return 0;
}
