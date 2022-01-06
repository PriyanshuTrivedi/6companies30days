// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//  first n+1 digits are taken and for a grp of d the digits for following grps are reversed
class Solution{   
public:
    string printMinNumberForPattern(string s){
        string ans="";
        int n,i,j;
        n=s.size();
        for(i=1;i<=n+1;i++)
        ans.push_back('0'+i);
        i=0;
        while(i<n)
        {
            if(s[i]=='D')
            {
                j=i;
                while(i<n && s[i]==s[i+1])
                i++;
                reverse(ans.begin()+j,ans.begin()+i+2);
            }
            i++;
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends