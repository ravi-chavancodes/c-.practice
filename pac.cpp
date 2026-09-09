#include <iostream>
using namespace std;

bool isprime(int n){

    for(int i =2 ; i <= n-1; i++){
        if(n%i){
            return false;
        }
    }
    return true;
}

int main(){
 
    cout<<isprime(4)<<endl;
    return 0;
}