// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s)
    {
        stack<char> stk;
        int i,j,n,number;
        string st,st2,str,ans;
        n=s.size();
        for (i=0;i<n;i++) 
        {
            if (s[i] == ']') 
            {
                st="";
                while (!stk.empty() && stk.top()!='[') 
                {
                    st=stk.top()+st;
                    stk.pop();
                }
                stk.pop();
                st2="";
                while (!stk.empty() && isdigit(stk.top())) 
                {
                    st2=stk.top()+st2;
                    stk.pop();
                }
                number=stoi(st2);
                str="";
                for (j=0;j<number;j++)
                    str+= st;
                for (auto c:str)
                    stk.push(c);
            }
            else
                stk.push(s[i]);
        }
        ans="";
        while (!stk.empty()) 
        {
            ans=stk.top()+ans;
            stk.pop();
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends