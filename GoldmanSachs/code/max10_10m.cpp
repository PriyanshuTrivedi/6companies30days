#include <bits/stdc++.h>
using namespace std;
using ll=long long;
// We are making the size of q 10 so insertion nd pop is done in log10 so n*log10 is the time taken by it we also could have run 10 loop and found the max from and after each loop marking the max as visited so n*10 but it will take more time.
// this priority queue will be more beneficial when finding max 100 or max 1000 which will make it 7n for100 nd 11n for 1000,this was the best which i could think of
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll i,k;
    priority_queue<ll,vector<ll>,greater<ll>> q;
    for(i=1;i<=10;i++)
    {
        cin>>k;
        q.push(k);
    }
    for(i=11;i<=20;i++)
    {
        cin>>k;
        q.push(k);
        q.pop();
    }
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    return 0;
}