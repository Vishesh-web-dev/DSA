//Squares of primes are T primes --> Figured out mself
//So find primes till sqrt(N)
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
#define N 1000002
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
void _print(float a){cerr << a;}
void _print(double a){cerr << a;}
template<class T> void _print(vector<T> v1){cerr << "[ ";for(T i : v1){_print(i);cerr <<" ";}cerr << "]";}
template<class T> void _print(set<T> s1){cerr << "[ ";for(T i : s1){_print(i);cerr <<" ";}cerr << "]";}
template<class T,class V> void _print(pair<T,V> p1){cerr << "[ ";_print(p1.ff);cerr <<" ";_print(p1.ss);cerr<<" ";cerr << "]";}
template<class T,class V> void _print(unordered_map<T,V> m1){cerr << "\n[ ";for(auto i : m1){_print(i.ff);cerr <<" ";_print(i.ss);cerr<<" \n";}cerr << "]";}
template<class T,class V> void _print(map<T,V> m1){cerr << "\n[ ";for(auto i : m1){_print(i.ff);cerr <<" ";_print(i.ss);cerr<<" \n";}cerr << "]";}
template<class T> void _print(vector<vector<T>> v1){cerr << "\n";for(vector<T>&  i : v1){_print(i);cerr <<"\n";}}
vb primes(N,1);
void generatePrimes(){
    primes[0]=0;
    primes[1]=0;
    for(int i = 2; i <= (N);i++){
        if(primes[i]){
            //uske multiple non prime krdo
            for(int j = i*2 ;j < N;j = j+i){
                primes[j] = 0;
            }
        }
    }
}

void solve() {
    ll n;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        ll x;
        cin>>x;
        ll sqrtX = sqrt(x);
        if ( sqrtX * sqrtX == x && primes[sqrtX]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
    
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("out.txt", "w", stdout);
    freopen("Error.txt","w", stderr);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    generatePrimes();
    solve();
    return 0;
}