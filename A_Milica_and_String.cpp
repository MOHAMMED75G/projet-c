// hi it's me , Enigma
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
typedef         vector<ll>vl;
typedef         deque<ll>dq;
typedef         pair<ll,ll>pl;
#define pll pair<long long ,long long >
#define vpl vector<pll >
#define         yes {cout<<"YES"<<endl;}
#define         no {cout<<"NO"<<endl;}
#define         CR(_) {cout<<_<<endl;}
#define endl '\n'
#define testanswer if(test){cout<<"YES"<<endl;}  else {cout<<"NO"<<endl}
#define lfs cout<<fixed<<setprecision(10)
#define cinto(x) cin>>x;v.PB(x)
#define ALL(a)  (a).begin(),(a).end()
#define ALLR(a)  (a).rbegin(),(a).rend()
#define UNIQUE(a) (a).erase(unique((a).begin(),(a).end()),(a).end())
#define spa << " " <<
#define F first
#define S second
#define MP make_pair
#define MT make_tuple
#define PB push_back
#define EB emplace_back
#define aff(v) for(auto e:v) cout<<e<<" ";cout<<endl;
#define rep(i,n,m) for(ll i = (n); i < (ll)(m); i++)
#define rrep(i,n,m) for(ll i = (ll)(m) - 1; i >= (ll)(n); i--)
#define ar array
const ll MOD = 1e9+7;
const ll MOD9 = 998244353;
const ll INF = 1e18;
// freopen("input.txt,"r",stdin);
// freopen("output.txt,"w",stdout);
string to_bin(ll n){
    string ch="";
    ll i = 0;
    while (n>0) {
        char a=n%2+'0';
        ch=a+ch;
        n = n / 2;
        i++;
    }
    return ch;
}
long long rechercheDichotomique(const vector<long double>& v, long double valeur) {
    long long debut = 0;
    long long fin = v.size() - 1;

    while (debut <= fin) {
        long long milieu = (debut + fin) / 2;

        if (v[milieu] == valeur) {
            return milieu;
        } else if (v[milieu] < valeur) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }

    return -1;
}
ll nCr(ll n,ll k)
{
  ll res = 1;

      // Since C(n, k) = C(n, n-k)
      if ( k > n - k )
          k = n - k;

      // Calculate value of
      // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
      for (ll i = 0; i < k; ++i)
      {
          res *= (n - i);
          res /= (i + 1);
      }

      return res;
}
ll ToInt(char ch)
{
  return ch-'0';
}
char ToChar(ll a)
{
  return a+'0';
}
bool pairCompare2(const std::pair<ll, int>& a, const std::pair<ll, int>& b) {
    if (a.first != b.first) {
        return a.first > b.first; // Sort in descending order based on the first key (ll)
    } else {
        return a.second < b.second; // If first keys are equal, sort in increasing order based on the second key (int)
    }
}
bool compar(string s,string c){
     bool test=false;
    rep(i,0,s.size()){
    if ((int)s[i]>(int)c[i]) {test=true;break;}
    else if ((int)s[i]==(int)c[i])continue;
    else break;}
    return test;
}
int isSubstring(string s1, string s2)
{
    int M = s1.size();
    int N = s2.size();

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;

        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return 1;
    }

    return 0;
}

void solve(){
  ll n;cin>>n;
  ll k;cin>>k;
  string s;cin>>s;
  map<char,ll>m;
  rep(i,0,n)m[s[i]]++;

  if(m['B']==k){cout<<0<<endl;return;}
  else if(m['B']<k){
    cout<<1<<endl;
    ll j=0;
    rep(i,0,n){
        if(s[i]=='A') {m['B']++;}
        if(m['B']==k){j=i;break;}
    }
    cout<<j+1<<" "<<"B"<<endl;
  }
  else{
    cout<<1<<endl;
    ll j=0;
    rep(i,0,n){
        if(s[i]=='B') {m['B']--;}
        if(m['B']==k){j=i;break;}
    }
    cout<<j+1<<" "<<"A"<<endl;
  }



}




int main(){
        ios_base::sync_with_stdio(false);cin.tie(0);
        	cout<<fixed<<setprecision(4);

  ll t;cin>>t;while(t--)
   solve();
}