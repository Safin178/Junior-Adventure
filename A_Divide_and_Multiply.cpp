// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

//typedef data type define korae
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(a) (a).begin(),(a).end()
#define pb push_back 
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define nl '\n'
#define YES cout<< "YES\n"
#define NO cout<< "NO\n"
#define F first
#define S second
#define mem(a,b) memset(a,b,sizeof(a))      // 0 n -1 only
#define gcd(a,b) __gcd(a,b)
#define set_pre(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define mp make_pair
#define ever       ;1;

const double PI = acos(-1);
const double eps = 1e-9;

void printVec(vector<int> v , string s=""){
    cout << s <<' ';
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

bool is_vowel(char ch){
    string s="aeiouAEIOU";
    for(int i=0;s[i];i++){
        if(s[i]==ch){
            return 1;
        }
    }
    return 0;
}

//Debugger
 //pair
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}
//vector
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}
//set
template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
//multiset
template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
//map
template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
 
void faltu () {
            cerr << endl;
}
//array
template <typename T>
void faltu( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
            cerr << arg << ' ';
                faltu(rest...);
}
 

/*____________________________________________________________________________________________________________________________________*/



void solve(){
// 4 4 4
// 2 4 8
// 1 4 16
// 1 2 32
// 1 1 64
    int n;
    cin >> n;
    vi v(n);
    forcin(v);
    vi k, o;
    ll sumod=0;
    for(int i = 0; i < sz(v); i++)
    {
        if(v[i] % 2 == 0)k.pb(v[i]);
        else {o.pb(v[i]);sumod+=v[i];}

    }
    ll x;bool f = 0;
    if(sz(o))
    {
        x = *max_element(all(o));
        f=1;
    }
    else x = *max_element(all(k));
    
    ll sum = 0;
    //dbg(k);
    int j = sz(k);
    for(int i = 0; i< sz(k); i++)
    {
        if(x == k[i] && f==0)
        {
            f=1;
            j = sz(k)-1;
            continue;
        }
        else sum += k[i];
    }
    //cout << sum << " ";
    sum = sum / 2;
    sum = x * (1LL << sum);
    if(sz(o)){
        sumod= sumod - x;
    }
    cout <<  ((sum) + sumod + j)*1LL << nl;




    

}
void solve2()
{ // editorial deksi
     int n;
    cin >> n;
    vi v(n);
    forcin(v);
    ll k = 0 ,x;
    ll sum =0;
    for(int i =0 ;i < sz(v); i++)
    {
        while(v[i] % 2 == 0)
        {
            v[i] /= 2;
            k++;
        }
        sum += v[i];
    }
     x= *max_element(all(v));
    //  cout << x << " " << sum << nl;
    //  cout << k << nl;
    //  cout <<(1LL << k) << nl;

    cout <<  (sum - x) + (x * (1LL << k) *1LL) << nl;

}
int main(){
    
    bismillah
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        //solve();
        solve2();

    }
    return 0;
}
