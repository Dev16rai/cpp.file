#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number ";
    cin>>n;

    int first = 0;
    int second = 1;

    cout<<"This your fibonacci series - ";

    for(int i=1;i<=n;i++){

        cout<<first<<" ";

        int next = first + second;
        first = second;
        second = next;

    }
    return 0;
}