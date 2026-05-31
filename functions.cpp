#include<iostream>
using namespace std;


 /* //  binomial factorial
int factorial (int n){
int facto =1;
for (int i = 1; i<=n; i++)
{
   facto*=i;
}

return facto;
}

int binomial(int n,int r){
   int val1 = factorial(n);
   int val2 = factorial(r);
   int val3 = factorial(n-r);

   int result = val1/ (val2*val3);
   return result;
}


int main(){

cout<<binomial(4,2)<<endl;
   return 0 ;
} 
*/

/*  // a2 

int calculate(int a,int b){
return (a*a) + (b*b) + (2*a*b);

}
int main (){
int a ,b;
cout<<"2 number : "<<endl;
cin>>a>>b;

cout<<"result "<<calculate(2,4)<<endl;
   return 0 ;
}     */

/*  // largest no
int largest(int a,int b, int c){
int max=a;
if (max<b) max = b;
if (max<c) max =c;
return max;
}
int main(){
int a,b,c;
cout<<"enter no "<<endl;
cin>>a>>b>>c;

cout<<"largest no "<<largest(a,b,c)<<endl;
   return 0;
}
*/

/*  // palindrom
bool ispalindrom(int num){

   int orignal = num;
   int reverse = 0;

   while (num>0)
   {
      int digit= num%10;
      reverse = reverse * 10 + digit;

      num = num/10;
   }
   return (orignal == reverse);
}

int main(){
int num;
cin>>num;
if (ispalindrom(num))
{
  cout<<num<<" is a palindrom"<<endl;
}
else{
   cout<<num<<" is not a palindrom"<<endl;
}

   return 0;
} */

/* //  sum of digit

int sum_of_digit( int num ){
int sum=0;
while (num > 0)
{
  int digit = num%10;//get last digit
  sum+=digit;        //add digit to sum
  num = num/10;      //remove last digit
}
return sum;
}

int main(){
int num;
cout<<"enter num ";
cin>>num;

cout<<"sum of digits"<<num<<"="<<sum_of_digit(num)<<endl;
   return 0;
}*/

/* //  next char

char nextchar(char ch){
   if (ch=='z') return 'a';
   if (ch=='Z') return 'A';

   return ch+1;
}

int main()
{
char ch;
cin>>ch;
cout<<"enter any character "<<nextchar(ch)<<endl;
   return 0;
}*/