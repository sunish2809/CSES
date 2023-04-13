#include<bits/stdc++.h>
using namespace std;
# define int long long
int32_t main()
{
    int n;
    cin >> n;
    // if(n<=24)
    // {
    //     cout << n/5;
    // }
    // else{
    //     cout << (n/5)+1;
    // }
    int count = 0;
    while(n>=5)
    {
        count+= n/5;
        n = n/5;
    }
    cout << count;
    return 0;
}