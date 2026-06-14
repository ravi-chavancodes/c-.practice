#include <iostream>
#include <vector>
using namespace std;


/*  // merge sort 

void printArr(vector<int>& arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(vector<int>& arr, int si, int mid, int ei)
{
    vector<int> temp;

    int i = si;
    int j = mid + 1;

    while(i <= mid && j <= ei)
    {
        if(arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= ei)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int k = 0; k < temp.size(); k++)
    {
        arr[si + k] = temp[k];
    }
}

void mergeSort(vector<int>& arr, int si, int ei)
{
    if(si >= ei)
    {
        return;
    }

    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid);  // left half
    mergeSort(arr, mid + 1, ei);  // right half

    merge(arr, si, mid, ei);  // conquer
}

int main()
{
    vector<int> arr = {8, 3, 5, 4, 7, 6, 1, 2};

    cout << "Original Array: ";
    printArr(arr);

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";
    printArr(arr);

    return 0;
}
    */

    // quick soort

/* // print the array
void printarr (int arr[],int n ){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[], int si, int ei)
{
    int pivot = arr[ei];

    int i = si - 1;

    for(int j = si; j < ei; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[ei]);

    return i;
}


void quicksort(int arr[], int si , int ei) // O(n * logn)
{
    if (si >= ei){
        return ;
    }
    int pivotidx = partition(arr,si,ei);  // less no in left greater in right 
    
    quicksort(arr , si , pivotidx -1);  // left half
    quicksort(arr ,pivotidx + 1 , ei ); // right half
}

int main() {
    int arr [6] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    quicksort (arr , 0 , n-1);
    printarr (arr,n); 
return 0;
}
*/

