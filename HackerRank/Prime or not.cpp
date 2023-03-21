#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isprime(long long n){
    if(n==1){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    long long n;
    cin>>n;
    int c;
    c=isprime(n);
    
    if(c==1){
        cout<<"Yes"<<endl;
    }
    else if (n==2) {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
    return 0;
}
