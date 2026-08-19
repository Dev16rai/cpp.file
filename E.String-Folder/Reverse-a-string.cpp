#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter your number "<<endl;
    cin>>s;
     
    int left = 0;
    int right = s.length() -1;

    while(left<right){
        int temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;

    }

    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }

    return 0;

}