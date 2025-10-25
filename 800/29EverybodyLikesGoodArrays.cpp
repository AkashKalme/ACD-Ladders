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
#define loop(a, n)  for(int london=0; london<n; london++);
#define input(a, n) for(int paris=0; paris<n; paris++) cin >> a[paris];
int expo(int x, int y) { int res = 1; while (y) {if (y % 2) res = (res * x % nmod) % nmod; x = (x * x) % nmod; y /= 2; } return res;}
int inv(int x) {return expo(x, nmod - 2);}
int add(int a, int b) {a = a % nmod; b = b % nmod; return (((a + b) % nmod) + nmod) % nmod;}
int sub(int a, int b) {a = a % nmod; b = b % nmod; return (((a - b) % nmod) + nmod) % nmod;}
int mul(int a, int b) {a = a % nmod; b = b % nmod; return (((a * b) % nmod) + nmod) % nmod;}
int m_div(int a, int b) {a = a % nmod; b = b % nmod; return (mul(a, inv(b)) + nmod) % nmod;}

using namespace std;

void solve()
{
    int n; 
    cin >> n;
    int a[n];
    input(a, n);
    int res = 0;
    for(int i=0; i<n-1; i++)
    {
        if((a[i+1]-a[i])%2==0)
        {
            res++;
        }
    }
    cout << res << endl;
;
}

int32_t main() {
	// your code goes here
	int tt = 1;
	cin >> tt;
	while(tt--)
	{
	    solve();
	}
	return 0;
}