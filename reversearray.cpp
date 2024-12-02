#include <bits/stdc++.h>
#include <vector>
using namespace std;

// function to reverse an array
void reverseArray(vector<int> &arr) {
    // vector<int> temp;
    int low=0,high=arr.size()-1;
        if(arr.size()>1)
        {
            for(int i=0;i<high;i++)
            {
                swap(arr[i],arr[high]);
                
                high--;
            }
        }
        // arr=temp;
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}
