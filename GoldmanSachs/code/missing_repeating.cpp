// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// this took me too time coz I was writing the ans array as int ans[2] and then I tried to find b using the eq that n*(n+1)/2-s+ans[0] but it was something that int cout not hold so i took hint
 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *a, int n) {
        int *ans=new int[2];
        int i;
        for(i=0;i<n;i++)
        {
            if(a[abs(a[i])-1]<0)
            ans[0]=abs(a[i]);
            else
            a[abs(a[i])-1]=-a[abs(a[i])-1];
        }
        for(i=0;i<n;i++)
        if(a[i]>0)
        {
            ans[1]=i+1;
            break;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends