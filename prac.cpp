#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<" enter ";
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<"," ;
    }

    cout<<endl;
    

    return 0;
}