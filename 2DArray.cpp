      /*
          Solution to:  https://www.hackerrank.com/challenges/2d-array/problem
      */
using namespace std;

// Complete the array2D function below.
int hoursum(vector<vector<int>> A, int i,int j)
{
    int res=A[i][j]+
            A[i+1][j]+
            A[i-1][j]+
            A[i+1][j+1]+
            A[i-1][j+1]+
            A[i+1][j-1]+
            A[i-1][j-1];
    return res;
}
