#include <bits/stdc++.h>
#include <sys/time.h>

using namespace std;

#ifdef ATCODER
#include <atcoder/all>
using namespace atcoder;
template <int m>
ostream &operator<<(ostream &os, const atcoder::static_modint<m> &a) { os << a.val(); return os; }
#else
#endif

#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

using ull = unsigned long long;
using ll = long long;
using ld = long double;
const ld EPS=1e-14;
const int INF = 1001001001; // 1e+9
const ll LINF = 1001001001001001001; // 1e+18
// pair
using pii = pair<int, int>;
using pll = pair<ll,ll>;
// vector
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vl = vector<long>;
using vvl = vector<vl>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vvvll = vector<vvll>;
using vs = vector<string>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using vb = vector<bool>;
using vvb = vector<vb>;
// unordered set
using usi = unordered_set<int>;
using usll = unordered_set<ll>;
using uss = unordered_set<string>;

#define pb push_back
#define mp make_pair
#define um unordered_map
#define YESNO(bool) if(bool){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define yesno(bool) if(bool){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define SUM(v) accumulate(all(v),0LL) 
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define SORT(v) sort(all(v));
#define REV(v) reverse(all(v));
#define SIZ(v) int(v.size());
#define pf push_front
#define pb push_back
#define ef emplace_front
#define eb emplace_back
#define ppf pop_front
#define ppb pop_back
#ifdef __LOCAL
#define debug(...) { cout << #__VA_ARGS__; cout << ": "; print(__VA_ARGS__); cout << flush; }
#else
#define debug(...) void(0);
#endif
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
#define itn int
#define stirng string
#define pritn print

// キーボードの1~4キーが壊れた
#define one 1
#define two 2
#define three 3
#define four 4

/* REP macro */
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i,n) for(ll i=n-1;i>=0;i--)
#define rrepd(i,n) for(ll i=n;i>=1;i--)
#define repv(i,v) for(const auto& i:v)

/* func */
inline int ctoi(char c) {return c - '0';}
template <typename T> inline int lb_itr(vector<T> v,T a){return lower_bound(all(v),a)-v.begin();}
template <typename T> inline int ub_itr(vector<T> v,T a){return upper_bound(all(v),a)-v.begin();}

// 第一引数と第二引数を比較し、第一引数(a)をより大きい/小さい値に上書き
template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}

void Main();
int main() {std::cin.tie(nullptr);std::ios_base::sync_with_stdio(false);std::cout << std::fixed << std::setprecision(15);Main();return 0;}

//標準入出力
template <typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) { os << "(" << p.first << "," << p.second << ")"; return os; }
template <typename T1, typename T2>
istream &operator>>(istream &is, pair<T1, T2> &p) { is >> p.first >> p.second; return is; }
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v) { for (int i = 0; i < (int)v.size(); i++) { os << v[i] << (i + 1 != (int)v.size() ? " ": "");}return os;}
template <typename T>
ostream &operator<<(ostream &os, const vector<vector<T>> &v) { for (int i = 0; i < (int)v.size(); i++) { os << v[i] << endl;} return os;}
template <typename T>
ostream &operator<<(ostream &os, const vector<vector<vector<T>>> &v) { for (int i = 0; i < (int)v.size(); i++) { os << "i = " << i << endl; os << v[i];}return os;}
template <typename T>
istream &operator>>(istream &is, vector<T> &v) { for (T &in : v) is >> in; return is; }
template <typename T, typename S>
ostream &operator<<(ostream &os, const map<T, S> &mp) { for (auto &[key, val] : mp) { os << key << ":" << val << " ";} return os;}
template <typename T>
ostream &operator<<(ostream &os, const set<T> &st) { auto itr = st.begin(); for (int i = 0; i < (int)st.size(); i++) {os << *itr << (i + 1 != (int)st.size() ? " ": "");itr++;}return os;}
template <typename T>
ostream &operator<<(ostream &os, const multiset<T> &st){ auto itr = st.begin(); for (int i = 0; i < (int)st.size(); i++) { os << *itr << (i + 1 != (int)st.size() ? " ": "");itr++;}return os;}
template <typename T>
ostream &operator<<(ostream &os, queue<T> q){ while (q.size()) { os << q.front() << " ";q.pop(); }return os;}
template <typename T>
ostream &operator<<(ostream &os, deque<T> q) { while (q.size()) { os << q.front() << " "; q.pop_front();} return os;}
template <typename T>
ostream &operator<<(ostream &os, stack<T> st) { while (st.size()){ os << st.top() << " "; st.pop();} return os;}
template <class T, class Container, class Compare>
ostream &operator<<(ostream &os, priority_queue<T, Container, Compare> pq) { while (pq.size()) {os << pq.top() << " ";pq.pop();}return os;}
template <typename T> inline void print(const T& a){cout << a << '\n';return;}
#define priturn(i) {print(i);return;}
/*
OK、ACゲット。
                  ∧＿∧
       ∧＿∧   （´<_`   ）  流石だよな俺ら。
      （  ´_ゝ`）  /     ⌒i
     ／      ＼         |  |
____/       /￣￣￣￣/  |
___(__ﾆつ/   FMV   / .| .|________
       ＼/_______/  （u  ⊃
           ｶﾞｶﾞｶﾞｶﾞ・・・・
--------------------------------------------------------
*/
class UnionFind{
public:
    vector<ll> parent; //parent[i]はiの親
    vector<ll> siz; //素集合のサイズを表す配列(1で初期化)
    map<ll,vector<ll>> group; //集合ごとに管理する(key:集合の代表元、value:集合の要素の配列)
    ll n; //要素数

    //コンストラクタ
    UnionFind(ll n_):n(n_),parent(n_),siz(n_,1){ 
        //全ての要素の根が自身であるとして初期化
        for(ll i=0;i<n;i++){parent[i]=i;}
    }

    //データxの属する木の根を取得(経路圧縮も行う)
    ll root(ll x){
        if(parent[x]==x) return x;
        return parent[x]=root(parent[x]);//代入式の値は代入した変数の値なので、経路圧縮できる
    }

    //xとyの木を併合
    bool merge(ll x,ll y){
        ll rx=root(x);//xの根
        ll ry=root(y);//yの根
        if(rx==ry) return false;//同じ木にある時
        //小さい集合を大きい集合へと併合(ry→rxへ併合)
        if(siz[rx]<siz[ry]) swap(rx,ry);
        siz[rx]+=siz[ry];
        parent[ry]=rx;//xとyが同じ木にない時はyの根ryをxの根rxにつける
        return true;
    }

    //xとyが属する木が同じかを判定
    bool same(ll x,ll y){
        ll rx=root(x);
        ll ry=root(y);
        return rx==ry;
    }

    //xの素集合のサイズを取得
    ll size(ll x){
        return siz[root(x)];
    }

    //素集合をそれぞれグループ化
    void grouping(){
        //経路圧縮を先に行う
        rep(i,n)root(i);
        //mapで管理する(デフォルト構築を利用)
        rep(i,n)group[parent[i]].pb(i);
    }

    //素集合系を削除して初期化
    void clear(){
        rep(i,n){parent[i]=i;}
        siz=vector<ll>(n,1);
        group.clear();
    }
};
void Main () {
    ll N,M; cin>>N>>M;
    vvll G(N);
    rep(i,M){
       ll a,b; cin>>a>>b;
       a--;
       b--;
       G[a].pb(b);
       G[b].pb(a);
    }
    ll hoge=0;
    vb visited(N);
    ll ans=0;
    UnionFind uf(N);
    rep(i,N){
        hoge++;
        if(visited[i])ans--;
        for(auto& j:G[i]){
            if(j<i&&!uf.same(i,j)){
                uf.merge(i,j);
                hoge--;
            }
            if(j>i&&!visited[j]){
                ans++;
                visited[j]=true;
            }
        }
        print(hoge==1?ans:-1);
    }
}