#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    cout<<a<<endl;
    
    return 0;
}
