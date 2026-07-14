#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your table Number "<<endl;
    cin>>n;

    for(int i=1;i<=10;i++){
      int result = n*i;
        cout<<n<< "x" <<i<< "=" <<result<<endl;
    }
  
 
    return 0;
}