#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    char c;
    getline(cin,s);
    cin>>c;
    int a=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if( s[i] == c){
            a=a+1;
        }
    }
    cout<<a;
    
    return 0;
}
