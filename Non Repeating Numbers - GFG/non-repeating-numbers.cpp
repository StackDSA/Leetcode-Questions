// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Learnt about how to calculate the position of the right-most Set bit. 
        // See Pepcoding's video and GFG article on this question. 
        // The most optimal method isn't Easy to find.
         int a=0,b=0,n=nums.size();
       int xxor=0;
       
       for(int i=0;i<n;i++)
       xxor=xxor^nums[i];
       
       int rmsb=xxor &~(xxor-1);
       
       for(int i=0;i<n;i++)
       {
           if((rmsb &nums[i])==0)
           a=a^nums[i];
           
           else
           b=b^nums[i];
       }
       
       if(a>b)
       return{b,a};
       
       return{a,b};
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends