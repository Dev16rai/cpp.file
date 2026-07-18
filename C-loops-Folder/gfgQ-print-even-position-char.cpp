#include<iostream>
using namespace std;
int main() {

     string s;
    cout<<"enter your name "<<endl;
    cin>>s;
    
    
    for(size_t i=0;i<s.length();i++){
        if(i%2==0){
    
        cout<<s[i];
    }
}
  
}