#include<bits/stdc++.h>
using namespace std;
# define int long long
int32_t main()
{
    int n, maxi;
    cin >> n >> maxi;
    vector<int> arr;
    for(int i = 0; i< n ; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    int ans = 0;
    int l = 0;
    for(int r = n-1; r >= l; r--){
        if(arr[l] + arr[r] <= maxi)
            l++;
        ans++;
    }
    
    cout << ans;
    return 0;
}