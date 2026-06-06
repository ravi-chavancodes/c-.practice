#include <iostream>
using namespace std;

  // tiling problem

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