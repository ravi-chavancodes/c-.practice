#include<iostream>
using namespace std;

int sum(int a,int b){
int sum = a+b;
return sum;
}
int main(){
int s = sum(2,5);
cout<<"sum ="<<s <<endl;
    return 0;
}