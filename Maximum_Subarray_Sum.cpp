#include<bits/stdc++.h>
using namespace std;
# define int long long
int32_t main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int  i = 0; i< n ; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int currsum = 0, tmxi = INT_MIN;
    for(int i = 0; i< n ; i++)
    {
        currsum+= v[i];
        if(tmxi < currsum) tmxi = currsum;
        if(currsum <0)
        {
            currsum = 0;
        }

    }
    cout << tmxi;

    return 0;
}


