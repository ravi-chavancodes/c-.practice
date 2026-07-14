#include<iostream>
#include<vector>
using namespace std;

/*. // 2d dynamic array 
int main()
{
int rows , cols ;
cout << "enter rows : ";
cin >> rows;
cout <<"enter cols: ";
cin >>  cols;

int* *matrix = new int*[rows];
for(int i=0; i<rows; i++)
 {
matrix[i] = new int [cols];
}

//data store
int x = 1;
for(int i=0; i<rows; i++) {
for (int j=0; j<cols; j++) 
{
matrix[i][j] = x++;
cout << matrix[i][j] <<" ";
}
cout << endl;

  }
}
  */

 /* //pair sum

vector<int> pairsum (vector<int> arr , int target )
{
int st = 0 , end = arr.size() -1 ;
int currsum = 0;
vector<int> ans ;

while(st < end) {
      currsum = arr[st] + arr[end];
        if (currsum == target) {
            ans.push_back(st); 
            ans.push_back(end) ;
            return ans;
        }
        else if(currsum > target) {
         end -- ;
     }
        else {
         st++ ;
 
       }
    }
    return ans ;
}
int main()
{
vector<int> vec = {2,7,11,15};
int target = 9;
vector<int> ans = pairsum (vec,target);
cout<< ans[0] <<"," << ans[1]<<endl;


return 0;
}
*/

  /*  // 2d vector   
int main(){
     vector < vector<int>> matrix = {{1,2,3},
                                     {4,5,6},
                                     {7,8,9}};

          for (int i = 0; i < matrix.size(); i++) // row
          {
            for (int j = 0; j  < matrix[i].size(); j++) // column
            {
                cout<< matrix[i][j]<<" ";
            
            }
            cout<<endl;
          }
                                    
    return 0 ;
}
    */

    
int main()
{
    // Roof
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5 - i; j++)
            cout << " ";

        cout << "/";

        for(int j = 0; j < 2 * i; j++)
            cout << " ";

        cout << "\\" << endl;
    }

    // Roof base
    cout << " /________\\" << endl;

    // House
    for(int i = 1; i <= 6; i++)
    {
        cout << "|";

        for(int j = 1; j <= 8; j++)
        {
            // Window
            if((i == 2 || i == 3) && (j == 6 || j == 7))
                cout << "[]";

            // Door
            else if((i >= 3) && (j == 3 || j == 4))
                cout << "|";

            else
                cout << " ";
        }

        cout << "|" << endl;
    }

    // Bottom
    cout << "|__________|" << endl;

    return 0;
}