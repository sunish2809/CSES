#include<bits/stdc++.h>
using namespace std;
# define int long long
int32_t main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr;
    for(int i = 0; i< n ; i++)
    {
        int s, e;
        cin >> s >> e;
        arr.push_back({s,e});

    }
    
    sort(arr.begin(), arr.end());
    priority_queue<int, vector<int>, greater<int>> pq;
 
    int id = 1;
    int ans = 1;
    pq.push(arr[0].second);
 
    while (id < arr.size()) {
        while (!pq.empty() && pq.top() < arr[id].first) {
            pq.pop();
        }
 
        pq.push(arr[id].second);
        ans = max(ans, (int)pq.size());
        id++;
    }
    cout <<ans;

    return 0;
}