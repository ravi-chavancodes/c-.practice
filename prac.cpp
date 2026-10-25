#include <iostream>

using namespace std;

int main(){
int n ;

cout<<" enter no of array : ";
cin>>n;

int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i];
}
cout<<endl;

int max =arr[0];

for (int i = 0; i < n; i++)
{
    if (arr[i]>max)
    {
        max = arr[i];
    }
}


cout<<"max = "<<max<<endl;
    return 0;
}