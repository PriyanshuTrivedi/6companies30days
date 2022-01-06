#include <bits/stdc++.h>
using namespace std;
using ll=long long;

// lets say ans= ss so s1= ss|ss|ss|ss|ss and s2=ss|ss|ss so if we concate s1+s2 or s2+s1 it would be same nd gcd of substring will be
// substr(0,__gcd(n1,n2))
class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        if(s1+s2!=s2+s1)
            return "";
        return s1.substr(0,__gcd(s1.size(),s2.size()));
    }
};
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}