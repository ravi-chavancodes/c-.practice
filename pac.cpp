#include <iostream>
using namespace std;

int pro(int a , int b ){
   return a*b;
}
int iseven(int n){
    if(n%2==0){
       return true;
    }
    else{
        return false;
    }
}

int main(){
 cout<<iseven(6)<<endl;
}