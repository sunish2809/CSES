#include<bits/stdc++.h>
using namespace std;
# define int long long
int32_t main()
{
    int n ;
    cin >> n;
    vector<int> v;
    int sum = 0;
    for(int i = 0; i< n ; i++)
    {
        int x ;
        cin >> x;
        sum+= x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    int curr = 0;
    bool f = true;
    for(int i = 0; i< n ; i++)
    {
        if(v[i] > curr+1)
        {
            cout << curr+1;
            f = false;
            break;
        }
        else
        {
            curr+= v[i];
        }
    }
    if(f == true) cout << sum+1 ;

    return 0;
}