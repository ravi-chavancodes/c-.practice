#include<iostream>
#include<string>
#include<vector>
 using namespace std;

  /* // backtracking on arr 

  void printarr(int arr[], int n){ // print 0-n
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
  }

  void changearr(int arr[],int n , int i){
    if (i==n)
    {
        printarr(arr,n);
        return ;
    }
    
    arr[i]=i+1;  // print curr
    changearr(arr,n,i+1);  // fill the next 
    arr[i]-= 2;
  }
  
  int main (){
    int arr[5]={0};
    int n = 5;

    changearr(arr,n,0);
    printarr(arr,n);
    return 0;
  }
    */

  // find subset

void printsubsets(string str , string subset){
  if (str.size()==0)
  {
    cout<<subset<<"\n";
    return;
  }
  char ch = str[0];  
  printsubsets(str.substr(1,str.size()-1),subset+ch); // yes cjhoice

  printsubsets(str.substr(1,str.size()-1),subset); // no choice
  
}

  int main(){
    string str = "a,b,c";
    string subset = " ";

    printsubsets(str,subset);
    return 0;
  }