#include<iostream>
using namespace std;

int main(){

    char arr[20];

    cin.getline(arr,20,'p');

    cout<<"word = "<<arr<<endl;
    cout<<strlen(arr)<<endl;

    return 0;
}