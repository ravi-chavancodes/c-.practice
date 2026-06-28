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

  /* // find subset

void printSubsets(string str, string subset) {

    // Base case

    if (str.size() == 0) {

        cout << subset << endl;

        return;

    }

    char ch = str[0];

    // Yes choice (include current character)

    printSubsets(str.substr(1), subset + ch);

    // No choice (exclude current character)

    printSubsets(str.substr(1), subset);

}

int main() {

    string str = "abc";     // No commas

    string subset = "";     // Empty string

    printSubsets(str, subset);
    return 0;

}
    */

    // permutation
void permutation(string str , string ans){
     
   int n = str.size();

   if(n==0){
        cout<<ans<<"\n";
        return;
   }
   for (int i = 0; i < str.size(); i++)
   {
    char ch = str[i];
    string nextStr = str.substr(0, i) + str.substr(i+1, n-i-1);
    permutation(nextStr, ans + ch);
   }
   
}
    int main(){
      string str = "abc";
      string ans =" ";
      
      permutation(str,ans);
      return 0;
    }