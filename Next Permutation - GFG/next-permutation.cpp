// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        for(int i=N-1;i>0;i--){
           if(arr[i]>arr[i-1]){
               for(int j=N-1;j>=i;j--){
                   if(arr[i-1]<arr[j]){
                       swap(arr[i-1],arr[j]);
                       break;
                   }
               }
               sort(arr.begin()+i,arr.end());
               return arr;
               break;
           }
       }
       sort(arr.begin(),arr.end());
       return  arr;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends