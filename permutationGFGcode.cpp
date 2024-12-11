#include <bits/stdc++.h>
using namespace std;

// Generates all permutations
void permutations(vector<vector<int>>& res, vector<int>& curr, 
                  int idx);

// Function to get the next permutation
void nextPermutation(vector<int>& arr) {
  
    int n=arr.size();
    int pivot=-1;
    int index=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            pivot=arr[i];
            index =i;
            break;
        }
    }
    cout<<pivot<<endl;
    cout<<index<<endl;
    if(pivot==-1)
    {
        reverse(arr.begin(),arr.end());
        return;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>pivot)
        {
            swap(arr[index],arr[i]);  
            break;
        }
        
    }
   reverse(arr.begin()+index+1,arr.end());
}

// Function to generate all possible permutations
void permutations(vector<vector<int>>& res, vector<int>& arr, 
                  int idx) {
  
    // Base case: if idx reaches the end of the array
    if (idx == arr.size() - 1) {
        res.push_back(arr);
        return;
    }

    // Permutations made by swapping each element
    // starting from index `idx`
    for (int i = idx; i < arr.size(); i++) {
      
        // Swapping
        swap(arr[idx], arr[i]);

        // Recursive call to create permutations
        // for the next element
        permutations(res, arr, idx + 1);

        // Backtracking
        swap(arr[idx], arr[i]);
    }
}

int main() {
    vector<int> arr = { 1,4,3,2 };
    nextPermutation(arr);
  
      for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}