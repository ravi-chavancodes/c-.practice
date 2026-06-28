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

  /* // permutation
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
      */

   /*   // n queens

bool isSafe(vector<string> &board, int row, int col, int n) {

    // Check upper column
    for (int i = row - 1; i >= 0; i--) {
        if (board[i][col] == 'Q')
            return false;
    }

    // Check upper left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q')
            return false;
    }

    // Check upper right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q')
            return false;
    }

    return true;
}

void solve(vector<string> &board, int row, int n) {

    // Base Case
    if (row == n) {

        for (int i = 0; i < n; i++) {
            cout << board[i] << endl;
        }
        cout << endl;

        return;
    }

    // Try placing queen in every column
    for (int col = 0; col < n; col++) {

        if (isSafe(board, row, col, n)) {

            board[row][col] = 'Q';     // Place Queen

            solve(board, row + 1, n);  // Recursive Call

            board[row][col] = '.';     // Backtracking
        }
    }
}

int main() {

    int n = 4;

    vector<string> board(n, string(n, '.'));

    solve(board, 0, n);

    return 0;
}
    */
   