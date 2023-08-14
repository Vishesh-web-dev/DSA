// https://codeforces.com/problemset/problem/295/A

#include <bits/stdc++.h>
using namespace std;
//macros
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pair<int, int>>
#define vb vector<bool>
#define vs vector<string>
#define forn(n) for (int i = 0; i < int(n); i++)
#define pb push_back
#define mkp make_pair
#define ff first 
#define ss second 
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define mod 100000007
#define N 1000009
#define all(v) v.begin(),v.end();
#define srt(v)  if(!v.empty())sort(v.begin(),v.end())
#define rev(v)  if(!v.empty())reverse(v.begin(),v.end())

//inline functions and macros
int expo(int a,int n){ int res=1; while(n){ if(n&1) {res *= a;--n;} else {a *= a;n >>= 1;}} return res;}
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;} 
 

//Debug
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " => ";_print(x);cerr << endl;
#else
#define debug(x)
#endif
void _print(int a){cerr << a;}
void _print(ll a){cerr << a;}
void _print(char a){cerr << a;}
void _print(string a){cerr << a;}
void _print(bool a){cerr << a;}
template<class T> void _print(vector<T> v1){cerr << "[ ";for(T i : v1){_print(i);cerr <<" ";}cerr << "]";}
template<class T> void _print(set<T> s1){cerr << "[ ";for(T i : s1){_print(i);cerr <<" ";}cerr << "]";}
template<class T,class V> void _print(pair<T,V> p1){cerr << "[ ";_print(p1.ff);cerr <<" ";_print(p1.ss);cerr<<" ";cerr << "]";}
template<class T,class V> void _print(map<T,V> m1){cerr << "\n[ ";for(auto i : m1){_print(i.ff);cerr <<" ";_print(i.ss);cerr<<" \n";}cerr << "]";}

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vll arr(n);
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    debug(arr);
    //operation's queries
    ll querry[m][3];
    for(int i = 0 ; i<m ; i++){
        cin>>querry[i][0]>>querry[i][1]>>querry[i][2];
    }
    //range for op using differnce array method
    vll times(m+1,0);
    for(int i = 0 ; i < k ; i++){
        int l,r;
        cin>>l>>r;
        times[l-1] += 1;
        times[r+1-1] -= 1;
    }
    //prefix of times
    for(int i = 1 ; i < m ;i++){
        times[i] += times[i-1];
    }
    debug(times);
    //for each query range on array of n+1 size
    vll dummy(n+1,0);
    for(int i = 0 ; i < m; i++){
        int l = querry[i][0] - 1;
        int r = querry[i][1] - 1;
        int d = querry[i][2];
        dummy[l] += (d*times[i]);
        dummy[r+1] -= (d*times[i]);
    }
    //take prefix of dummy
    for(int i = 1 ; i < n ; i++){
        dummy[i] += dummy[i-1];
    }
    debug(dummy);
    //answer
    for(int i = 0 ; i < n ;i++){
        arr[i] += dummy[i];
        cout<<arr[i]<<" ";
    }
    debug(arr);
}
    
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("out.txt", "w", stdout);
    freopen("Error.txt","w", stderr);
#endif
    solve();
    return 0;
}