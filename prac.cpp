#include<iostream>
using namespace std;

void print(int a ){ 

    if (a%2==0)
    {
        cout<<"even"<<endl;
    }
    else
    cout<<"odd"<<endl;
}
int main(){

    int a ;
    cout<< "enter no ="<<endl;
    cin>> a;

    print(a) ;
    return 0;
}