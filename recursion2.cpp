#include <iostream>
#include <string>
using namespace std;

 /* // tiling problem

   int tile(int n ){

    if(n==0 || n==1){
    return 1;
   }
 return tile(n-1) + tile(n-2);
}
int main(){
    int n =3;
    cout<<tile(3)<<endl; //2 x 3
  
    return 0;
}
    */

    // remove duplicate in string

    void removeduplicates( string str , string ans , int i , int map[26]){
     
      if(i == str.size()){
    cout << "ans : " << ans << endl;
    return;
      }
      char ch = str[i];
      int mapidx = (int)(ch -'a');  // a=0 , b =1 
  

      if (map [mapidx] == true ) {
        removeduplicates(str,ans,i+1,map);  // duplicate 
      }
     else{
      map[mapidx] =true;
      removeduplicates(str,ans+str[i],i+1,map);  // not duplicate
     }
    } 

    int main(){
      string str = "appnacollege";
      string ans =" ";
      int map [26]={false};

      removeduplicates (str , ans , 0 ,map);

      return 0;
    }