
/*  // I/O of 2D array
int main(){
    int arr[3][4];  // 3 is no of sttudent in row and 4 is the subject for all student in column
    int n = 3 , m = 4 ;

    for (int i = 0; i < n; i++)   // no of row 0 - n-1
    {
        for ( int j = 0; j < m; j++)   // no of column 0 - m-1 
        {
            cin>>arr[i][j];  
        } 
    }
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        } 
     cout<<endl;   
    }
    return 0; 
}
*/

/*  // spiral metrix  
void spiral(int matrix [][4], int n,int m){
    int srow = 0 , scol = 0;
    int erow = n-1 , ecol = m-1 ; 

    while (srow <= erow && scol <= ecol )  // for odd we use <= otherwise it will not print the middle part
    {
        
    
    // top
    for (int j= scol; j <= ecol ; j++)
    {
        cout<< matrix[srow][j]<<" ";
    }
    // right
    for ( int i = srow+1; i <= erow; i++)
    {
        cout<< matrix[i][ecol]<<" ";
    }
    //bottom
    for ( int j = ecol-1; j >= scol ; j--)
    {
        if (srow == erow){
            break;  // for the odd one 
        }
        cout<<matrix[erow][j]<<" ";
    }
    //left
    for (int i = erow - 1; i >= srow + 1; i--)
    {
        if (scol == ecol){
            break;
        } // for the odd one 
        cout<< matrix [i][scol]<<" ";
    }
    srow ++ , scol++;
    erow -- , ecol --;
}
  cout<<endl;  
};
int main(){
int matrix[4][4] = {{1,2,3,4},
                    { 5,6,7,8},
                    { 9,10,11,12},
                    { 13,14,15,16}  };

    spiral (matrix , 4 , 4);
    return 0;
}
    */

/* // diaognal
int diagonal( int mat[][4],int n) {
int sum = 0;

for (int i = 0; i < n; i++)  // row
{
    sum += mat[i][i];  // primary diagonal
     if (i!= n-i-1)   //  secondry diagonal
        {
            sum += mat[i][n-i-1];
        }
}

cout<<"sum = "<<sum<<endl;
return sum ; 
}

int main(){
int mat[4][4]={{1, 2, 3, 4},
               {5, 6, 7, 8},
               {9, 10, 11, 12},
               {13, 14,15,16 }};


diagonal(mat , 4 );

    return 0 ;
}
    */

/*  // sorted matreix 
    
    bool search(int mat [][4] , int n ,  int m , int key ){
        int i = 0 , j = m -1;  // row and col 

        while( i < n && j >= 0 ){
             if ( mat [i][j] == key ) {
                cout<< " key found at ("<<i<<","<<j<< ")"<< endl;
                return true ;
             }
             else if (mat [i][j] > key ) // left
             {
                j--;
             }
             else{
                i++;  // down 
             }
        }
        cout<< " key not found \n ";
        return false ; 
    }

int main(){
    int matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};
                    
    search (matrix , 4 , 4 , 33 );
    return 0;
}
    */

/* // matrix pointer
int main(){

int mat [4] [4]
= {{1, 2, 3, 4},
  {5,6, 7, 8},
  {19,10, 11, 12},
  {13, 14, 15, 16}};

cout << mat <<"=" << &mat [0][0] << endl;
cout << mat+1 << " != " << &mat [0] [1] <<endl;
cout <<  mat+1 << " = " << &mat [1] [0] <<endl;
return 0;
}
*/


  