#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(i%2!=0)
            cout<<s[i]<<"";
    }
    for(int i=0;i<n;i++){
        if(i%2==0)
            cout<<s[i]<<"";
    }
    
    return 0;
}
