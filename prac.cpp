#include<iostream>
using namespace std;

int print(int a ){ 

return a*a;
}
int main(){

    int a ;
    cout<< "enter no ="<<endl;
    cin>> a;

   cout<< print(a)<<endl;
    return 0;
}