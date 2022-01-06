// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//  we can see that dp is used here as dp[i] means that first i elements are taken into consideration so dp[i] is processed we are talking about s[i-1] and if the before elment and this element constitutes between 10 and 26 then another way is added so we can include 1 3 or 13 but the before constituted is also added to dp[i]=(dp[i]+dp[i-2])%m 
class Solution {
	public:
		int CountWays(string s){
		    int m,i,n;
		    m=1000000007;
		    n=s.size();
		    int dp[n+1];
		    dp[0]=1;
		    dp[1]=1;
		    if(n==1 && s[0]!='0')
		    return 1;
		    if(s[0]=='0')
		    return 0;
		    for(i=2;i<=n;i++)
		    {
		        if(s[i-1]!='0')
		        dp[i]=dp[i-1];
		        else
		        dp[i]=0;
		        if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<='6'))
		        dp[i]=(dp[i]+dp[i-2])%m;
		    }
		    return dp[n];
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends