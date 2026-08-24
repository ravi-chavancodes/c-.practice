#include<iostream>
using namespace std;

int main(){
int n =10829;
int sumdig = 0;

while (n>0)
{
   int lastdig = n % 10;
   cout<<lastdig;
if(lastdig % 2 != 0){
   sumdig += lastdig;
}
   n /= 10;
}
cout<<"sum of dig"<<sumdig<<endl;



return 0;
}