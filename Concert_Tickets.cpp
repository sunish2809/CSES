// #include<bits/stdc++.h>
// using namespace std;
// # define int long long
// int32_t main()
// {
//     int n, c;
//     cin>> n >> c;
//     vector<int>  maxp;
//     multiset<int> p;
//     for(int i = 0; i< n ; i++)
//     {
//         int x;
//         cin >> x;
//         p.insert(x);
//     }

//     for(int i = 0; i< c; i++)
//     {
//         int x;
//         cin >> x;
//         maxp.push_back(x);
//     }
    

//     vector<int> ans;
//     for(int i = 0; i< c; i++)
//     {
//         int index=  lower_bound(p.begin(), p.end(), maxp[i])-p.begin();
//         if(index >= 0 && p[index] == maxp[i])
//         {
//             cout << p[index] << endl;
//             p.erase(p.begin()+index);
//         }
//         else
//         {
//             index--;
//             if(index >= 0)
//             {
//                 cout << p[index] << endl;
//                 p.erase(p.begin()+index);

//             } 
//             else{
//                 cout << -1 << endl;
//             }
            
//         }
        
//     }
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

// variables used for the current problem
int n, m, h, t;
multiset<int> tickets;

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> h;
		tickets.insert(h);
	}
	for (int i = 0; i < m; ++i) {
		cin >> t;
		auto it = tickets.upper_bound(t);
		if (it == tickets.begin()) {
			cout << -1 << "\n";
		} else {
			cout << *(--it) << "\n";
			tickets.erase(it);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}