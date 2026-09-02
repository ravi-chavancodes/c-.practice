#include <iostream>
using namespace std;

int subs(int a , int b ){
   
     int subs = a-b;
     return subs;
}


int main(){

    int n = subs(2,5);
    cout<<"mius = "<<n<<endl;
    return 0;
}