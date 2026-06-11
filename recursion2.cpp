#include <iostream>
#include <string>
using namespace std;

 /*    // tiling problem

   int tile(int n ){

    if(n==0 || n==1){
    return 1;
   }
 return tile(n-1) + tile(n-2);
}
int main(){
    int n =3;
    cout<<tile(3)<<endl; //2 x 3
  
    return 0;
}
    */

 /*   // remove duplicate in string

    void removeduplicates( string str , string ans , int i , int map[26]){
     
      if(i == str.size()){
    cout << "ans : " << ans << endl;  // base class 
    return;
      }
      char ch = str[i];
      int mapidx = (int)(ch -'a');  // a=0 , b =1 
  

      if (map [mapidx] == true ) {
        removeduplicates(str,ans,i+1,map);  // duplicate 
      }
     else{
      map[mapidx] = true;
      removeduplicates(str,ans+str[i],i+1,map);  // not duplicate
     }
    } 

    int main(){
      string str = "appnacollege";
      string ans =" ";
      int map [26]={false};

      removeduplicates (str , ans , 0 ,map);

      return 0;
    }
      */

 /*  // friend pairing problem

    int friends (int n ){
      if(n ==1 || n==2){
        return n;
      } 

      return friends(n-1) + (n-1) * friends(n-2);  // singl + pair 
    }

    int main(){
      cout<<friends(4)<<endl;
    }
      */

/*    // binary string problem

    void binstring (int n , int lastplace , string ans ){
      if(n==0){
        cout<<ans<<endl;
        return;
      }
      if(lastplace!=1){
        binstring(n-1,0,ans + '0');  // place 0 in last 
        binstring(n-1,1,ans + '1');  // place 1 in last 
      }
      else{
        binstring(n-1,0,ans + '0');  // place 0 if previous is 1
      }
    } 

    int main(){
      string ans = "";
      binstring (3,0,ans);
      return 0;
    }
      */
     
      // practice 

      
 /*   // fast expotention

int power(int a, int n) {
    if (n == 0) {
        return 1;
    }

    if (n % 2 == 1) {
        return power(a, n / 2) * power(a, n / 2) * a;
    }
    else {
        return power(a, n / 2) * power(a, n / 2);
    }
}

int main() {
    int a, n;

    cout << "a = ";
    cin >> a;

    cout << "n = ";
    cin >> n;

    cout << "Output = " << power(a, n) << endl;

    return 0;
}
    */

 /*  // print the index of key 

void search(int arr [], int n , int idx , int key){
  if(idx == n){
    return;
  }
  if(arr[idx]== key){
    cout<<idx<<endl;
  }
  search(arr,n , idx +1 , key);
}

int main() {

    int arr[] = {1, 2, 3, 2, 5, 2};
    int n = 6;
    int key = 2;

    search(arr, n, 0, key);

    return 0;
}
    */

/*   // binary search mid 

int binarySearch(int arr[], int si, int ei, int key) {
    // Base Case
    if (si > ei) {
        return -1;
    }

    int mid = (si + ei) / 2;

    if (arr[mid] == key) {
        return mid;
    }

    if (arr[mid] < key) {
        return binarySearch(arr, mid + 1, ei, key);  // right half
    } else {
        return binarySearch(arr, si, mid - 1, key);  // left half
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int key = 5;

    cout << binarySearch(arr, 0, n - 1, key);

    return 0;
}
    */ 

 /*   // We are given a string S, we need to find the count of all contiguous substrings
    // starting and ending with the same character. [Leetcode Premium Qs]

int count(string s, int start, int end) {
    if (start == end) {
        return 1;
    }

    if (start > end) {
        return 0;
    }

    int sum = 0;

    if (s[start] == s[end]) {
        sum++;
    }

    sum += count(s, start + 1, end)
         + count(s, start, end - 1)
         - count(s, start + 1, end - 1);

    return sum;
}

int main() {
    string s = "aba";

    cout << count(s, 0, s.length() - 1);

    return 0;
}
    */
    
 /*   // Tower of Hanoi is a mathematical puzzle 

    #include <iostream>
using namespace std;

int sum = 0;

void towerOfHanoi(int n, string source, string dest, string helper)
{
    if (n == 0)
    {
        return;
    }

    towerOfHanoi(n - 1, source, helper, dest);

    cout << "Move " << n
         << "th disc from "
         << source << " to "
         << dest << endl;

    sum++;

    towerOfHanoi(n - 1, helper, dest, source);
}

int main()
{
    int n = 2;
    sum = 0;

    towerOfHanoi(n, "A", "C", "B");

    cout << "Total moves = " << sum;

    return 0;
}
    */

    
 