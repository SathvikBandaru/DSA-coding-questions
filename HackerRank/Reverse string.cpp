#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    char temp;
    int n = s.length();
    for(int i=0;i<n/2;i++){
        temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
    cout<<s;
    return 0;
}
