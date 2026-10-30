#include <iostream>
using namespace std;

/*  // input 
int main (){

char sentence [30]; 
cin.getline(sentence, 30);

cout << "your word was :" <<sentence << endl; 
cout << "length: " << strlen(sentence) << endl;
return 0;
}
*/

/*  // convert to upper case

void toupper (char word[], int n){

for (int i=0; i<n; i++) {
char ch = word[i];

if (ch>='A' && ch<='Z') { // uppercase
continue;
}
else
  { //lowercase
word [i] = ch - 'a' + 'A';
      }
   }
}

int main(){
    char word[]= "ApPlE";
    toupper (word , strlen(word));

    cout<< word<<endl;
    return 0 ; 
}
*/

/* // reverse  a char array 
void reverse(char word [], int n) 
{
int st = 0, end = n-1;
while(st < end)
{
swap(word [st++], word[end--]);
   }
}

int main(){ 

char word [] = "code";
reverse(word, strlen(word));
cout << "reverse = " << word <<  endl; 
return 0;
}
*/

 /* // valid palindrone 
  
bool isPalindrome(char str [], int n) 
{
int st = 0, end = n-1;
while(st < end) {
if(str[st++] != str[end--]) {
cout << "not valid palindrome\n";
return false;
   }
}
cout << "valid palindrome\n";
return true;
}

int main()
{
char word [] = "racer";
isPalindrome(word, strlen(word) );
return 0;

}
*/

/*  // max element

int main() {
    int arr[] = {4, 2, 9, 1, 7};
    int n = 5;

    int maxi = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > maxi)
            maxi = arr[i];
    }

    cout << maxi;
}
    */

/*    // counting vowela

int main() {
    string s = "education";
    int count = 0;

    for(char ch : s) {
        if(ch=='a' || ch=='e' || ch=='i' ||
           ch=='o' || ch=='u')
            count++;
    }

    cout << count;
}
*/
