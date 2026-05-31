#include<iostream>
using namespace std;

/* //1. bubble sort algorith (putting largest in last index)
// for printing sorted array in a manner
void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int arr[], int n){
    bool isswap = false;           //if sorted then print as itself
// for sorting 
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)      // for n-1,n-2 ....
        {
            if (arr[j]>arr[j+1])        
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    print(arr,n);
}

int main(){
int arr[]={5,4,1,3,2};
bubblesort(arr,5);

    return 0;
}
    */

/* //2. selection sort (putting minimum to first)
void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionsort(int arr[], int n){
    for (int i = 0; i < n-1 ; i++)          // till n-1 cause n is greatest already 
    {
        int minidx = i;
// loop fpr finding minimum
        for ( int j = i+1; j < n; j++)      // i+1 cause i is consider minimum
        {
            if (arr[j] < arr[minidx])      // for descending (>) 
            {
                minidx =j;
            }
            
        }
        swap(arr[i],arr[minidx]);
    }
    print(arr,n);
}

int main(){
          int arr[5]={5,4,1,3,2};
          selectionsort(arr,5);
    return 0;
}
*/

/* //3. insertion sort (put unsorted element directly to sorted)
void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionsort(int arr[], int n){
for (int i = 1; i < n; i++)
{
    int curr = arr[i];
    int prev = i-1;

    while (prev >=0 && arr[prev]>curr)  // for descinfing < curr..
    {
        swap(arr[prev],arr[prev + 1]);
        prev--;
    }
    arr[prev+1]=curr;
}
print(arr,n);

}

int main(){
        int arr[5]={5,4,2,1,3};
        insertionsort(arr,5);
    return 0;
}
    */

/* //4. counting sort (put repeated no in ascending order )

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void countingsort(int arr[],int n){
int freq [100000]={0};
int minval = INT_MAX , maxval = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        minval = min(minval , arr[i]);
        maxval = max(maxval , arr[i]);
    }
    // step 1   
    for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;   // for freq[1]= 2 1 is 2 time then 1++ ,...
        }
    //step 2
    for (int i = minval, j=0 ;i <=maxval; i++)
    {
        while (freq[i]>0)   // freq[1]=2 means > 0 print 
        {
            arr[j++]=i;    // put no in sorted and move forward
            freq[i]--;    // 
        }    
    }
    print(arr,n);
}
int main(){
       
     int arr[8]={1,4,1,3,2,4,3,7};
    countingsort(arr,8);
    return 0;
}
    */

/* //5.  inbuilt sort ascending order .... 
void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {1,4,1,3,2,3,7};
    int n = sizeof(arr) / sizeof(arr[0]);   // automatic size calculation

    sort(arr, arr + n);   //  Inbuilt sort

    print(arr, n);

    return 0;
}
*/

/* //6. inbuilt sort descinding order .....
void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {1,4,1,3,2,3,7};
    int n = sizeof(arr) / sizeof(arr[0]);   // automatic size calculation

    sort(arr, arr + n,greater<int>());   //  Inbuilt sort

    print(arr, n);

    return 0;
}
*/

/* //  practice Q. descending order in char arr insertion ...
void print(char ch[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl;
}

void sortchar(char ch[], int n){
    for (int i = 1; i < n; i++)
    {
        char curr = ch[i];   // use char (not int)
        int prev = i - 1;

        // For descending order
        while (prev >= 0 && ch[prev] < curr)
        {
            ch[prev + 1] = ch[prev];  // shifting
            prev--;
        }

        ch[prev + 1] = curr;  // correct position
    }

    print(ch, n);
}

int main(){
    char ch[6] = {'f','d','a','c','e','b'};
    sortchar(ch, 6);
    return 0;
}
*/

