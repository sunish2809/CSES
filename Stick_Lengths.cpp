#include<bits/stdc++.h>
using namespace std;
# define int long long
int32_t main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i<n ; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int median =0 ;
    if(n %2 ==0)
    {
        int left = v[n/2];
        int right = v[(n/2)+1];
        if( left <= right) median = left;
        else{
            median = right;
        } 
    }
    else
    {
        median = v[n/2];

    }
    int ans = 0;
    for(int i = 0; i< n ; i++)
    {
        ans+= abs(v[i]-median);

    }
    cout << ans;
    return 0;
}