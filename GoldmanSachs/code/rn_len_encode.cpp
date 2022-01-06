// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */
//code by Priyanshu Trivedi
//easy using while loop
string encode(string s)
{     
  int n,i,j,k;
  string ans="";
  n=s.size();
  j=0;
  while(j<n)
  {
      k=1;
      ans+=s[j];
      while(j<n-1 && s[j]==s[j+1])
      {
        j++;
        k++;
      }
      ans+=to_string(k);
      j++;
  }
  return ans;
}     
 
