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

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << sum;
}