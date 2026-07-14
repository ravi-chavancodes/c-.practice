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

    
#include <iostream>
using namespace std;

int main() 
{
    cout << "             /\\\n";
    cout << "            /  \\\n";
    cout << "           /    \\\n";
    cout << "          /      \\\n";
    cout << "         /________\\\n";
    cout << "        |          |\n";
    cout << "        |      []  |\n";
    cout << "        |   __     |\n";
    cout << "        |  |  |    |\n";
    cout << "        |  |  |    |\n";
    cout << "        |__|__|____|\n";

    return 0;
}