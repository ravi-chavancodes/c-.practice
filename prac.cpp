#include<iostream>
using namespace std;

int print(int a,int b ){ 
int max = a;
if(max<b){
    max =b;
}
return max;

}
int main(){

    int a ;
    int b ;
    cout<< "enter no 1  ="<<endl;
    cin>> a;
cout<< "enter no 2  ="<<endl;
 cin>> b;
 cout<<"max no : "<<print(a,b)<<endl ;
    return 0;
}