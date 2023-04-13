#include<bits/stdc++.h>
using namespace std;
# define int long long
int32_t main()
{
    int n;
    cin >> n;
    int reqsum = n*(n+1)/2;
    int req = reqsum/2;
    if(reqsum%2 == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        
        cout << "YES" <<endl;
        unordered_set<int> s;
        int i = n;
        int sum = 0;
        while(sum < req)
        {
            s.insert(i);
            sum+= i;
            i--;

        }
        if(sum > req)
        {
            sum-=(i+1);
            s.erase(s.find(i+1));
            s.insert(req-sum);

        }
        cout << s.size() << endl;
        for(auto x : s)
        {
            cout << x << " ";
        }
        cout << endl;
        cout << n-s.size() << endl;
        for(int j = 1; j<= n; j++)
        {
            if(s.find(j) == s.end())
            {
                cout << j << " ";
            }
        }


    }
    return 0;
}