#include<bits/stdc++.h>
using namespace std;
# define int long long
int32_t main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i< n ; i++)
    {
        int s, e;
        cin >> s >> e;
        v.push_back({e,s});
 
    }
    sort(v.begin(), v.end());
    int ans = 1;
    int endtime = v[0].first;
    for(int i = 1; i< n ; i++)
    {
        if(endtime <= v[i].second)
        {
            ans++;
            endtime = v[i].first;
        }
    }
    cout << ans;
    return 0;
}