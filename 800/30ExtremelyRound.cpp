#include <bits/stdc++.h>

#define int         long long int
#define pb          push_back
#define si          set<int>
#define vi          vector<int>
#define pii         pair<int, int>
#define vpi         vector<pii>
#define mii         map<int, int>
#define all(p)      p.begin(),p.end()
#define print(a)    for(auto x: a) cout << x << " "; cout << endl;
#define nmod        1000000007
#define input(a, n) for(int INP=0; INP<n; INP++) cin >> a[INP];

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int res = 0;
    while(n>0)
    {
        if(n>=10)
        {
            res += 9;
        }
        else
        {
            res += n;
        }
        n /= 10;
    }
    cout << res << endl;
}

int32_t main() {
	// your code goes here
	int t = 1;
	cin >> t;
	while(t--)
	{
	    solve();
	}
	return 0;
}