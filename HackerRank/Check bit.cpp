#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    n=n>>m;
    if(n&1)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
}
