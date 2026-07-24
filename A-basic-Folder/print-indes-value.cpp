#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the size: ";
    cin >> n;

    int arr[n];

    cout << "Enter your array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index;
    cout << "Enter your index: ";
    cin >> index;
 
     cout<<"this is your element "<<arr[index];

    return 0;
}