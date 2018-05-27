// Complete the miniMaxSum function below.

    /*
        Solution to:  https://www.hackerrank.com/challenges/mini-max-sum/problem
    */
void miniMaxSum(vector<int> arr) {
    sort(arr.begin(),arr.end());
    long long res=0;
    for(auto A:arr)
        res+=A;
    cout << res-arr[arr.size()-1]<<" "<< res-arr[0];

}
