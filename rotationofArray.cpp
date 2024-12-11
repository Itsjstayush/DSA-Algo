#include <bits/stdc++.h>
using namespace std;


void rotateArr(vector<int>& arr, int d) {
   int n=arr.size();
   vector<int> temp;
   d=d%n;
   for(int i=0;i<n-d;i++)
   {
    temp[i]=arr[d+i];
   }
   for(int i=0;i<d;i++)
   {
    temp[d+i]=arr[i];
   }
   arr=temp;
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 2;

    rotateArr(arr, d);

    
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}