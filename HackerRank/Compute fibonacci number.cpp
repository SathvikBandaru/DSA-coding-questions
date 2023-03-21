#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fab(int n){
    if(n==1 || n==0)
        return n;
    return fab(n-1)+fab(n-2);
}

int main() {
    int n;
    cin>>n;
    int a;
    a=fab(n);
    cout<<a<<endl;
    return 0;
}
