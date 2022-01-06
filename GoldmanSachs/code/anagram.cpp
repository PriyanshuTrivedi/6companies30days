// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Priyanshu Trivedi's code
//approach is simple jst sort all strings and compare with others
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& sl) {
        int i,j,n,ss,k;
        string s;
        n=sl.size();
        vector<string> vs;
        vector<bool> vis(n,false);
        vector<vector<string>> ans;
        for(i=0;i<n;i++)
        {
            s=sl[i];
            sort(s.begin(),s.end());
            vs.push_back(s);
        }
        k=0;
        for(i=0;i<n;i++)
        {
            if(!vis[i])
            {
                ans.push_back(vector<string>());
                ans[k].push_back(sl[i]);
                vis[i]=true;
                for(j=i+1;j<n;j++)
                {
                    if(vs[i]==vs[j])
                    {
                        ans[k].push_back(sl[j]);
                        vis[j]=true;
                    }
                }
                k++;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends