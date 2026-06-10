#include<iostream>
using namespace std;

/*    // function 
void func(){
    cout <<" hey buddie ";

    func();  // function calling itself
}
int main(){
       func();  // function in main 

return 0;
}
*/

/*    //  factorial

int factorial (int n){
    if(n==0){
        return 1;
    }
    return n* factorial(n-1);
}
   int main () {
int ans = factorial(5);
cout << ans <<endl;

   return 0;
   }
   */

 /*  // decreasing order

   void print (int n){
        if (n==0){
        return ;
    }
    cout<< n <<" ";
    print (n-1);
}
int main(){
    print(5);
    return 0;
}
    */

  /*  // sum of n natural no 

    int sum (int n){
        if (n==1){
            return 1;
        }
    return n + sum(n-1);
    }

    int main(){
        cout<< sum(5)<<endl;
        return 0;
    }
*/

 /*  // fibonacci no


  int fibo(int n){
    if (n==0 || n==1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
  }

  int main(){
    cout<<fibo(4)<<endl;

    return 0;
  }
    */

  /*  // check sorted array

    bool issorted (int arr [], int n, int i ){

        if (i== n-1){
            return true;
        }
        if(arr[i] > arr[i+1]){

        return false;
    }
    return issorted(arr , n , i+1);
    }

    int main(){

        int arr1[5] = {1,2,3,4,5};
        int arr2[5] = {1,2,4,3,5};

        cout<< issorted(arr1 , 5 ,0)<< "\n" ;
        cout<< issorted(arr2 , 5 ,0) << endl;


    return 0;
    }
    */

 /*  // first occurence 

int occur ( vector<int> arr , int  i , int target){
    if (arr[i]== target){
    return i;
    }
    return occur(arr , i+1 ,target);
}

int main(){
    vector<int>arr = {1,2,3,3,3,4,5};
    cout<<occur(arr,0,3)<<endl;
}
*/

 /*  // last occurence

int lastoccur(vector<int> arr , int target, int i){
    if (i == arr.size()){
        return -1;
    }

    int idxfound(lastoccur(arr , target ,i+1));

    if(idxfound == -1 && arr[i] == target ){
        return i;
    }
    return idxfound;
}
int main(){

    vector<int> arr ={1,2,3,3,3,4};
    cout<<lastoccur(arr , 3 ,0)<<endl;
}
    */

  /*  // print x to the power n

    int power(int x ,int n){
        if(n==0){
    return 1;
}
 int halfpower = power(x,n/2);
 int halfsquare =  halfpower * halfpower ;

 if (n%2 != 0){

    return x * halfsquare ;
 }
 return halfsquare;
    }
    int main(){
        cout<<power(2,10)<<endl;
        return 0;
    }
        */
       
/*      // print no 1 to n

void printInc(int n) {
    if (n == 1) {
        cout << 1 << " ";
        return;
    }

    printInc(n - 1);
    cout << n << " ";
}

int main() {
    printInc(5);
}
    */
   