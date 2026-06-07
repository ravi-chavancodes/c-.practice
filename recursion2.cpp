#include <iostream>
#include <string>
using namespace std;

 /*    // tiling problem

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

 /*   // remove duplicate in string

    void removeduplicates( string str , string ans , int i , int map[26]){
     
      if(i == str.size()){
    cout << "ans : " << ans << endl;  // base class 
    return;
      }
      char ch = str[i];
      int mapidx = (int)(ch -'a');  // a=0 , b =1 
  

      if (map [mapidx] == true ) {
        removeduplicates(str,ans,i+1,map);  // duplicate 
      }
     else{
      map[mapidx] = true;
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
      */

 /*  // friend pairing problem

    int friends (int n ){
      if(n ==1 || n==2){
        return n;
      } 

      return friends(n-1) + (n-1) * friends(n-2);  // singl + pair 
    }

    int main(){
      cout<<friends(4)<<endl;
    }
      */

    // binary string problem

    void binstring (int n , int lastplace , string ans ){
      if(n==0){
        cout<<ans<<endl;
        return;
      }
      if(lastplace!=1){
        binstring(n-1,0,ans + '0');
        binstring(n-1,1,ans + '1');
      }
      else{
        binstring(n-1,0,ans + '0');
      }
    } 

    int main(){
      string ans = "";
      binstring (3,0,ans);
      return 0;
    }