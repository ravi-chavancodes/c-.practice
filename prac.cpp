#include<iostream>
using namespace std;

void print(int n){

    if (n==0) 
    {
        return ;/* code */
    }
    cout<<n<<" "<<endl;
    print(n-1);
    
}

int main(){

    print(10);
    return 0;
}