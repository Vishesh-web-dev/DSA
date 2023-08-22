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
#define N 100003
#define all(v) v.begin(),v.end();
#define srt(v)  if(!v.empty())sort(v.begin(),v.end())
#define rev(v)  if(!v.empty())reverse(v.begin(),v.end())

//inline functions and macros
int expo(int a,int n){ int res=1; while(n){ if(n&1) {res *= a;--n;} else {a *= a;n >>= 1;}} return res;}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;} 
ll inv(ll a){return pwr(a,mod-2);}
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
ll mod_div(ll a,ll b){return mod_mul(a,inv(b));}

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
template<class T> void _print(vector<vector<T>> v1){cerr << "\n";for(vector<T>&  i : v1){_print(i);cerr <<"\n";}}

vi spf(N,-1);

void factors(vi &facts,int n){
    if(n == 1){
        return;
    }
    facts.push_back(spf[n]);
    factors(facts,n/spf[n]);
}
void solve() {
    vector<int> facts;
    int n,k;
    cin>>n>>k;
    factors(facts,n);
    debug(facts);
    if(k > facts.size()){
        cout<< -1 <<"\n";
        return;
    }
    for(int i = 0 ; i < k-1 ; i++){
        cout<<facts[i]<<" ";
    }
    ll prod = 1;
    for(int i = k-1; i < facts.size() ;i++){
        prod *= facts[i];
    }
    cout<<prod;
}
    
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("out.txt", "w", stdout);
    freopen("Error.txt","w", stderr);
#endif
    //
    for(int i = 2; i < N;i++){
        if(spf[i] == -1){
            int mul = 1;
            while(mul*i < N){
                //if not updated then only update
                if(spf[i*mul] == -1){
                    spf[mul*i] = i;
                }
                mul++;
            }
        }
    }
    solve();
    return 0;
}