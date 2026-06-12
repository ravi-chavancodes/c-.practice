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

    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);

    merge(arr, si, mid, ei);
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