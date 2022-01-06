// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// if n is odd then pairs cannot be made the no. of elements with remainder 0 should be even as they would be paired with some which has also remainder 0 and if remainder is r so to compensate it will be paired with someone with k-r remainder if it is not satisfied for any one element then false else true
class Solution {
  public:
    bool canPair(vector<int> a, int k) {
        int n,i,t;
        map<int,int> m;
        n=a.size();
        if(n%2)
        return false;
        for(i=0;i<n;i++)
        m[a[i]%k]++;
        for(i=0;i<n;i++)
        {
            t=a[i]%k;
            if(t==0)
            {
                if(m[0]%2)
                return false;
            }
            else 
            {
                if(m[t]!=m[k-t])
                return false;
            }
        }
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends