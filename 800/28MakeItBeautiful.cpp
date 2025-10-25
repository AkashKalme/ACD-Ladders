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
#define vinp(a, n)  for(int delhi=0; delhi<n; delhi++) {int x=0; cin >> x; a[delhi]=x;}
#define input(a, n) for(int paris=0; paris<n; paris++) cin >> a[paris];
int m_expo(int x, int y) { int res = 1; while (y) {if (y % 2) res = (res * x % nmod) % nmod; x = (x * x) % nmod; y /= 2; } return res;}
int m_inv(int x) {return m_expo(x, nmod - 2);}
int m_add(int a, int b) {a = a % nmod; b = b % nmod; return (((a + b) % nmod) + nmod) % nmod;}
int m_sub(int a, int b) {a = a % nmod; b = b % nmod; return (((a - b) % nmod) + nmod) % nmod;}
int m_mul(int a, int b) {a = a % nmod; b = b % nmod; return (((a * b) % nmod) + nmod) % nmod;}
int m_div(int a, int b) {a = a % nmod; b = b % nmod; return (m_mul(a, m_inv(b)) + nmod) % nmod;}

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vi a(n, 0);
    vinp(a, n);
    si s(a.begin(), a.end());
    if(s.size()==1)
    {
        cout << "NO" << endl;
        return;
    }
    int sum = 0;
    bool flag = 1;
    for(int i=0; i<n; i++)
    {
        sum += a[i];
        if(sum != 2*a[i])
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        cout << "NO" << endl;
        return;
    }
    sort(a.rbegin(), a.rend());
    if(a[0]==a[1])
    {
        swap(a[1], a[n-1]);
    }
    cout << "YES" << endl; 
    print(a);
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