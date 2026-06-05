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

      // first occurence 

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
