#include <bits/stdc++.h>
using namespace std;
using ll=long long;

// we can observe that no. of squares in a n*n chessboard is sigma(n^2)
// but i came up for the reason
// two square are different if they have different diagonal vertices i.e. a square can be uniquely identified by it diagonal vertices
// so for it being a square the 2 diagonal should at 45degree inclided to the sides of the original board

//     # * * * * *
//     * # * * * *
//     * * # * * *
//     * * * # * *
//     * * * * # *
//     * * * * * #

// we can select any 2 # to make a unique square so nC2 and n extra for single cell square so for main diagonal nC2+n=n*(n+1)/2

//     * * # * * *
//     * * * # * *
//     # * * * # *
//     * # * * * #
//     * * # * * *
//     * * * # * *

// so for either side (n-1)C2+(n-1) + (n-2)C2+(n-2) + .......1C2+1
// so for both sides 2times and subtracting once the diagonal as it has been counted twice
//    n                               n                          n
// 2*sigma(k*(k+1)/2)-n*(n+1)/2  =  sigma(k*(k+1))-n*(n+1)/2 = sigma(k^2)+sigma(k)-n*(n+1)/2= sigma(k^2) = n*(n+1)*(2*n+1)/6
//    1                               1                          1

// Hope this explanation is clear.

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<(n*(n+1)/2*(2*n+1)/3)<<"\n";
    }
    return 0;
}