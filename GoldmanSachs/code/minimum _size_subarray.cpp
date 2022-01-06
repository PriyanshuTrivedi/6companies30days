#include <bits/stdc++.h>
using namespace std;
using ll=long long;

class Solution {
public:
    int minSubArrayLen(int K, vector<int>& v) {
        int i,j,n,ans;
        n=v.size();
        for(i=1;i<n;i++)
            v[i]+=v[i-1];
        if(v[n-1]>=K)
            ans=n;
        else
            return 0;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                j=(lower_bound(v.begin(),v.end(),K)-v.begin()+1);
                ans=min(ans,j);
            }
            else
            {
                if(lower_bound(v.begin()+i,v.end(),v[i-1]+K)!=v.end())
                {
                    j=(lower_bound(v.begin()+i,v.end(),v[i-1]+K)-v.begin()-i+1);
                    ans=min(ans,j);
                }
            }
        }
        return ans;
    }
};
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}