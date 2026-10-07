#include<iostream>
using namespace std;

/*  // array storing
int main()
{
    int marks[50]={1,2,3,4,5};        // array is the linear collection of same type of element that stored together in contiguous memory spaces
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
cout<<marks[4]<<endl;

    return 0;
}
*/


 /* // length of an array
    
int main(){

  

    int arr[10]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int); // n=length

    for (int i = 0; i < n ; i++)
    {
      cout<<arr[i] <<" "; 
    }
    cout<<endl;

    return 0;
    */

/* // input size of an element
   int main(){

int n;
cout<<"enter the length of arr : ";
cin>>n;

int arr[n];
for (int i = 0; i < n; i++)
{
cin>>arr[i];
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";

}
cout<<endl;

    return 0;
}
*/

/* // largest in array
int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    int max=arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i]> max)
        {
            max = arr[i];
        }
        
    }
    cout<<"max = "<<max<<endl;

    return 0;
}
    */

/* //linear search key O(n)
int linearsearch(int *arr,int n,int key){
for (int i = 0; i < n; i++)
{
    if (arr[i]==key)
    {
        return i;
    }
}
return -1;
}

int main(){
int arr[]={0,1,2,4,6,7,10};
 int n =sizeof(arr)/sizeof(int);

cout<<linearsearch(arr,n,10)<<endl;
    return 0;
}
    */

 /* // reverse array with space
void printarr(int*arr , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
int main(){
int arr[]={5,4,3,9,2};
int n=sizeof(arr)/sizeof(int);

int copyarr[n];
for (int i = 0; i < n; i++)
{
    int j=n-i-1;
    copyarr[i]=arr[j];
}
for (int i = 0; i < n; i++)
{
    arr[i]=copyarr[i];
}

printarr(arr,n);
    return 0;
}
    */

/* //reverse without space. 0 (1)
void printarr(int *arr,int n){
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<",";
}
  cout<<endl;
}
int main(){
int arr[]={5,4,3,9,2};
int n = sizeof(arr)/sizeof(int);

int start=0 , end=n-1;

while (start < end)
{
    swap(arr[start],arr[end]);

start++;
end--;
}
printarr(arr,n);

    return 0;
}
    */

/* //binary search
    int binsearch(int *arr ,int n ,int key){

        int st=0 ,  end = n-1;

        while (st<=n)
        {
            int mid = (st+end)/2;
            if (arr[mid] == key )
            {
            return mid ;
            }
            else if (arr[mid]<key)
            {
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);

    cout<<binsearch(arr,n,12)<<endl;

    return 0;
}
    */

/* //subarray
void printsubarray(int *arr,int n){
for (int st = 0; st < n; st++)
{
    for (int end = st; end < n; end++)
    {
        for (int i = st; i <=end; i++)
        {
            cout<<arr[i];
        }
        cout<<",";
    }
    cout<<endl;
}
}
    int main(){
    int arr[]={1,2,3,4};
    int n=4;

    printsubarray(arr,n);
        return 0;
    }
        */

/*   // brute force max subarray
void maxsubarraysum1(int *arr,int n){
    int maxsum= INT_MIN;

    for (int st = 0; st<n; st++)
    {
        for (int end = st; end < n; end++)
        {
         int currsum = 0;
         for (int i = st; i <= end; i++)
         {
            currsum+=arr[i];
         }
         cout<<currsum<<",";
        maxsum = max(maxsum , currsum);
        
    }
    cout<<endl;
    }
    cout<<"maximum subarray sum = "<<maxsum<<endl; 
}
int main(){
int arr[]={2,-3,6,-5,4,2};
int n = sizeof(arr)/sizeof(int);

    maxsubarraysum1(arr,n);
    return 0 ;
 }
 */

 /* // kadanes algorith for sum of maxsubarray
 void maxsubarray2(int *arr , int n){
int maxsum = INT_MIN;
int currsum=0;

for (int i = 0; i < n; i++)
{
    currsum +=arr[i];
    maxsum = max(currsum,maxsum);

    if (currsum <0)
    {
        currsum = 0;
    }
}
cout<<"maximum subarray sum = "<<maxsum<<endl;
}
int main(){
int arr[]={2,-3,6,-5,4,2};
int n = sizeof(arr)/sizeof(int);

    maxsubarray2(arr,n);
    return 0 ;

}
    */

    