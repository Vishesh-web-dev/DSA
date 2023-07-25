#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pair<int, int>>
#define vb vector<bool>
#define rep(n) for (int i = 0; i < int (n); ++i)
#define rep1(n) for (int i = 1; i <= int (n); ++i)
#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define pb push_back
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
#define oset tree<pair<int,int>,null_type,less<pair<int,int> >,rb_tree_tag,tree_order_statistics_node_update>
 
int expo(int a,int n){ int res=1; while(n){ if(n&1) {res *= a;--n;} else {a *= a;n >>= 1;}} return res;}
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;} 
void find(int& a,int& b,int& c,int x,int y,int z){
    b = (x-y + z)/2;
    a = x-b;
    c = z-b;
} 
void solve() {
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    int a,b,c;
    find(a,b,c,x1,x2,x3);
    if(a+b+c == x4){
        cout<<a<<" "<<b<<" "<<c<<nl;
        return;
    } 
    find(a,b,c,x1,x2,x4);
    if(a+b+c == x3){
        cout<<a<<" "<<b<<" "<<c<<nl;
        return;

    } 
    find(a,b,c,x1,x4,x3);
    if(a+b+c == x2){
        cout<<a<<" "<<b<<" "<<c<<nl;
        return;

    } 
    find(a,b,c,x4,x2,x3);
    if(a+b+c == x1){
        cout<<a<<" "<<b<<" "<<c<<nl;
        return;
    } 
}
    
int main() {
 
// #ifndef ONLINE_JUDGE
//     freopen("in.txt" , "r" , stdin);
//     freopen("out.txt", "w", stdout);
// #endif
 
    solve();
    return 0;
}