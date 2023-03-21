#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    int c=0;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='u' or s[i]=='o' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U')
            continue;
    
    else{
        c=1;
        break;
    }
    }
    if(c==1)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}
