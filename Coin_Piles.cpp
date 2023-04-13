#include<bits/stdc++.h>
using namespace std;
# define int long long
// bool solve(int a, int b)
// {
//     if(a==0 && b==0) return true;
//     if(a<=0 && b>0) return false;

//     if(a>0 && b<=0) return false;

//     bool left, right;
//     left = solve(a-1,b-2);
//     right = solve(a-2, b-1);
//     return left||right;

// }

int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        // if(solve(a,b)== true)
        // {
        //     cout << "YES" << endl;
        // }
        // else{
        //     cout << "NO" << endl;
        // }
        if((a+b) %3 ==0 && abs(a-b) <= (a+b)/3)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}