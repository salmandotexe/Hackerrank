#include <string>

        /*
                Solution to: https://www.hackerrank.com/challenges/sparse-arrays/problem
        */


// Complete the matchingStrings function below.

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> res;
    for(auto a:queries)
    {
        int count=0;
        for(auto b:strings)
        {
            if(a==b)
                count++;
        }
        res.push_back(count);
    }
    return res;
}
