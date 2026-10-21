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

/*  // find subset

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

/*  // permutation
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

/*  // n queens

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

/*  // grid ways
int gridways(int r, int c , int m , int n){

    if (r == n-1 && c == m-1)
    {
        return 1;
    }
    if (r >= n || c >=m)
    {
        return 0;
    }
    //right
    int right = gridways(r,c+1,n,m);
    //down
    int down = gridways(r+1,c,n,m);

    return right + down ;
}

int main(){
    int n = 3;
    int m = 3; // 3x3

    cout<<gridways(0,0,n,m);
    return 0;
}
    */

 /*   // sudoku solver

// Print Sudoku
void printSudoku(int sudoku[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }
}

// Check if placing digit is safe
bool isSafe(int sudoku[9][9], int row, int col, int digit) {

    // Vertical Check (Column)
    for (int i = 0; i < 9; i++) {
        if (sudoku[i][col] == digit) {
            return false;
        }
    }

    // Horizontal Check (Row)
    for (int j = 0; j < 9; j++) {
        if (sudoku[row][j] == digit) {
            return false;
        }
    }

    // 3 x 3 Grid Check
    int sr = (row / 3) * 3;
    int sc = (col / 3) * 3;

    for (int i = sr; i < sr + 3; i++) {
        for (int j = sc; j < sc + 3; j++) {
            if (sudoku[i][j] == digit) {
                return false;
            }
        }
    }

    return true;
}

// Sudoku Solver
bool sudokuSolver(int sudoku[9][9], int row, int col) {

    // Base Case
    if (row == 9) {
        printSudoku(sudoku);
        return true;
    }

    // Calculate Next Cell
    int nextRow = row;
    int nextCol = col + 1;

    if (col + 1 == 9) {
        nextRow = row + 1;
        nextCol = 0;
    }

    // If cell already filled
    if (sudoku[row][col] != 0) {
        return sudokuSolver(sudoku, nextRow, nextCol);
    }

    // Try digits 1 to 9
    for (int digit = 1; digit <= 9; digit++) {

        if (isSafe(sudoku, row, col, digit)) {

            sudoku[row][col] = digit;

            if (sudokuSolver(sudoku, nextRow, nextCol)) {
                return true;
            }

            // Backtracking
            sudoku[row][col] = 0;
        }
    }

    return false;
}

int main() {

    int sudoku[9][9] = {
        {0,0,8,0,0,0,0,0,0},
        {4,9,0,1,5,7,0,0,2},
        {0,0,3,0,0,4,1,9,0},
        {1,8,5,0,6,0,0,2,0},
        {0,0,0,0,2,0,0,6,0},
        {9,6,0,4,0,5,3,0,0},
        {0,3,0,0,7,2,0,0,4},
        {0,4,9,0,3,0,0,5,7},
        {8,2,7,0,0,9,0,1,3}
    };

    if (!sudokuSolver(sudoku, 0, 0)) {
        cout << "No solution exists.";
    }

    return 0;
}
    */

    