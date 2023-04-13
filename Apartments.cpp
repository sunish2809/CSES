#include<bits/stdc++.h>
using namespace std;
# define int long long
int32_t main()
{
    int n, r,k;
    cin >> n >> r>> k;
    vector<int> room, app;
    for(int i = 0; i< n ; i++)
    {
        int x;
        cin >> x;
        room.push_back(x);
    }
    for(int i = 0; i< r;i++)
    {
        int x;
        cin >> x;
        app.push_back(x);
    }
    sort(room.begin(), room. end());
    sort(app.begin(), app.end());
    int ans = 0;
    int i= 0, j = 0;
    while(i <n && j < r)
    {
        if(abs(room[i]-app[j]) <= k)
        {
            ans++;
            i++;
            j++;
        }
        else
        {
            if(room[i]-app[j] >k) j++;
            else{
                i++;
            }
            
        }
        
    }
    cout << ans;
    return 0;
}