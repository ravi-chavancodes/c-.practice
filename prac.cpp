#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5};
    {
    int n = sizeof(arr)/sizeof(int);

    int max = 0;
    for (int i = 0; i < n; i++)
    {
       if (max < arr[i])
       {
        max =arr[i];
       }
       
    }
    
cout<<"max = "<<max<<endl;
}
    

    return 0;
}