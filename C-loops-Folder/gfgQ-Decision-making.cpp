#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout<<"enter nums "<<endl;
    cin >> n >> m;

    // code here
    if(n<m){
        cout<<"less";
    }
    else if(n==m){
        cout<<"equal";
    }
     else if(n>m){
        cout<<"greater";
    }
    return 0;
}