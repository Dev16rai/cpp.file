#include<iostream>
using namespace std;
int main(){
 //taking input size from the user 

    int n;
    cout<<"enter your number "<<endl;
    cin>>n;

//taking input array from the user 

    int arr[n];
    cout<<"enter your array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

//first element i put largest and secondlargest with this i will compare the entire array 

   int largest = 0;
   int secondlargest = 0;

//this is the logic of the code where it can compare with current largest element value 
//if it is true then it will update the secondlargest value and after that largest value 

   for(int i=0;i<n;i++){
    if(arr[i]>largest){
        secondlargest = largest;
        largest = arr[i];

    }
    else if(arr[i]>secondlargest){
        secondlargest = arr[i];
    }
   }

   cout<<"Largest value is "<<largest<<endl;
   cout<<"secondlargest value is "<<secondlargest;
    return 0;
}