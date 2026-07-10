#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    //this is the if codition where with the help of this we can check 
    if(age>18){
        cout<<"yes, you can vote (brother)or(sister) ";
    }
    else{
        cout<<"sorry, you cannot vote ";
    }
    return 0;
}