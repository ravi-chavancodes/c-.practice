#include <iostream>
using namespace std;

int sum(int a , int b){
    cout<<(a+b)<<endl;
    return a+b;
}
float sum1(float a , float b){
    cout<<(a+b)<<endl;
    return a+b;
}

int main(){
 sum (2,3);
 sum1(1.5,2.5);
    return 0;
}