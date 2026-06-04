#include<iostream>
using namespace std;

/* // function 
void func(){
    cout <<" hey buddie ";

    func();  // function calling itself
}
int main(){
       func();  // function in main 

return 0;
}
*/

/*//  factorial

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

 /*// decreasing order

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

  //fibonacci no

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