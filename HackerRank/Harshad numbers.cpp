#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    int k=0;
    cin>>a;
    int s=a;
    while(s>0){
        k=k+1;
        s=s/10;
        
    }
    if(a%k==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
