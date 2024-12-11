#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    unordered_map<int, int> freq;
    for(int i : arr){
        freq[i]++;
    }
    for(auto ele : freq){
        if(ele.second > n/3){
            result.push_back(ele.first);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main()
{
    vector<int> arr={2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
    
}