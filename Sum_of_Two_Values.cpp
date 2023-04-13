#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , sum;
    cin >> n >> sum;
    vector<int> v;
    map<int,int> m;
    for(int i= 0; i< n ;  i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        
    }
    bool f = true;
    
    for(int i = 0; i<  n ; i++)
    {
        int find = sum-v[i];
        if(m.find(find) != m.end())
        {
            cout << m[find] << " " << i+1;
            f = false;
            break;
        }
        else{
            m[v[i]]= i+1;
        }
    }
    if(f == true) cout << "IMPOSSIBLE";
    return 0;
}