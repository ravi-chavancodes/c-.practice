#include <iostream>
using namespace std;

/* // single loop TC: O(n) , SC: O(1)

int main()
{
    int n = 5;
    for(int i = 0; i < n; i++)  // Loop runs n times. * No extra data structure.

    {
        cout << i << " ";
    }
    return 0;
}
 */

 /* // Find Sum of Array TC: O(n) , SC: O(1)
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum += arr[i];  // The loop visits every element once. Only one extra variable (sum) is used.
    }
    cout << sum;
}
    */

/* // O(n^2) Time ,  O(1) Space

void printPairs(vector<int>& arr) {

    for(int i = 0; i < arr.size(); i++) {  // outer loop n 

        for(int j = 0; j < arr.size(); j++) { // inner loop n

            cout << arr[i] << " " << arr[j] << endl;  // n * n = n²
        }
    }
}
    */

/* // O(log n) Time , O(1) Space

int binarySearch(vector<int>& arr, int target) {

    int low = 0;
    int high = arr.size() - 1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
            return mid;

        else if(arr[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}
    */

    