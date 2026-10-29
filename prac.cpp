#include<iostream>
using namespace std;

void subarray(int arr[], int n ){
    int maxsum =INT_MIN;

     for (int start = 0; start < n; start++)
     {
        int currsum =0;
        for (int end = start; end < n; end++)
        {
            currsum += arr[end];
            maxsum = max(maxsum,currsum);
          
        }
        cout<<endl;
     }
     

}

int main(){

    int arr[]={1,-2,3,-4,5};
    int n = 5;


    subarray(arr,n);
    return 0;
}