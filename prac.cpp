#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print(string str , string subset){

    if (str.size()==0)
    {
        cout<<subset<<endl;

        return;
    }

    char ch = str[0];

    print(str.substr(1,str.size()-1),subset +ch);

    print(str.substr(1,str.size()-1),subset );
    
}

int main(){

   string str = "abc";
   string subset = "";

print(str,subset);
    return 0;
}