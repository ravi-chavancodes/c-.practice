#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int st,int mid ,int end){

    vector<int> temp;
    int i = st;
    int j = mid+1;

    while (i <= mid && j <=end)
    {
        if(arr[i]<arr[j]){
            temp.push_back(arr[i++]);
        }
        else
        temp.push_back(arr[j++]);
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=end){
        temp.push_back(arr[j++]);
    }

    for (int idx = st, x =0; idx <= end; idx ++)
    {
       arr[idx]=temp[x++];
    }
    

}

void mergesort(int arr[] ,int st , int end ){

    if(st>=end){
        return ;
    }

    int mid =(st+end)/2;
    mergesort(arr,st,mid);
    mergesort(arr,mid+1,end);

    merge(arr,st,mid,end);
}

void print(int arr[],int n){

    for (int i = 0; i < n-1; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main(){

    int arr[]={6,1,4,2,5,3};
    int n =6;
    mergesort(arr,0,n-1);
    print(arr,n);
    return 0;
}