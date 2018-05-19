        /*  Solution to: https://www.hackerrank.com/challenges/diagonal-difference/problem */
int diagonalDifference(vector<vector<int>> a) {
    int rem=0;
    int s=a.size();
    for(int i=0;i<s;i++)
    {
        rem+=a[i][i];
        rem-=a[s-i-1][i];
    }
    
    return (rem<0?-rem:rem);

}
