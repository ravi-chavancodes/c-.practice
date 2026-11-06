#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print(string str , string ans ){

    int n = str.size();

    if (n==0)
    {
       cout<<ans<<endl;
       return;
    }
    
    for (int i = 0; i < n; i++)
    {
        char ch = str[i];
    
    string newstr = str.substr(0,i)+ str.substr(i+1,n-i-1);
    print(newstr,ans + ch);

    }
}


int main(){

   string str = "abc";
   string ans = "";

print(str,ans);
    return 0;

}
