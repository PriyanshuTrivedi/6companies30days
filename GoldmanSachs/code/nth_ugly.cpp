// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
//My solution,it took me too time to analyse that erasing is important otherwise it gives tle  got it right on 4th attempt
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    set<ull> s;
        ull i,k;
        s.insert(1);
        for(i=0;i<n;i++)
        {
            k=*s.begin();
            s.erase(s.begin());
            s.insert(k*2);
            s.insert(k*3);
            s.insert(k*5);
        }
        return k;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends