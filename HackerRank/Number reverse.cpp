#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long n;
    cin>>n;
    int r;
    long long rem=0;
    while(n){
        r=n%10;
        rem=rem*10+r;
        n=n/10;
    }
    cout<<rem<<endl;
    
    return 0;
}
