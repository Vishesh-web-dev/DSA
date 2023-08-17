/*
A very simple solution is as follows. Initialize c with all zeroes. For recipe that recommends temperatures between li and ri, we should increment cli and decrement cri + 1.

Cumulate all values. That is, set ci to c1 + c2 + c3 + ... + ci. This can be done with one pass through the array.

Now, magically, ci is now the number of recipes that recommend temperature i. If ci is at least k, set it to 1, otherwise, set it to 0.

Cumulate all values again.

Now, every query that asks for the number of admissible temperatures between a and b can be answered simply as cb - ca - 1.
*/

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
    int n,k,q;
    cin>>n>>k>>q;
    vi pre(N,0);
    for(int i = 0 ; i < n ; i++){
        int a,b;
        cin>>a>>b;
        pre[a] += 1;
        pre[b+1] -= 1;
    }
    //prefix and make it binary
    for(int i = 1 ; i < N ;i++){
        pre[i] += pre[i-1];
    }

    for(int i = 0 ; i < N ;i++){
        if(pre[i] >= k){
            pre[i] = 1;
        }else{
            pre[i] = 0;
        }
    }
    //now count number of admissible/1's between given temp range and output it
    //in nlogn or lesser time for all queries how???
    //take prefix of binary array and it tell us hoe many temp
    //are admissible from 0 to that temp and to get between
    //just subtract number of temp at l to number of temp at r
    for(int i = 1 ; i < N ; i++){
        pre[i] += pre[i-1];
    }
    for(int i = 0 ; i < q ; i++){
        int l,r;
        cin>>l>>r;
        cout<<pre[r]-pre[l-1]<<"\n";
    }
}
    
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("out.txt", "w", stdout);
    freopen("Error.txt","w", stderr);
#endif

    // int t;
    // cin>>t;
    // while (t--)
    // {
        solve();
    // }
    return 0;
}