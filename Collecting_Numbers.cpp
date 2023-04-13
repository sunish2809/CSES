#include<bits/stdc++.h>
using namespace std;
# define int long long
int32_t main()
{
    int n;
    cin >> n;
    int v[n+1]= {0};
    for(int i = 1; i<= n; i++)
    {
        int x;
        cin >> x;
        v[x] =i;
    }
    int ans = 1;
    int l = 1;
    for(int i = 1; i<= n ; i++)
    {
        if(l>v[i])
        {
            ans++;

        }
        l = v[i];

    }
    cout << ans;

    return 0;
}