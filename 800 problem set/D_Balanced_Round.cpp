#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define ll long long
#define pb push_back
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define yesR cout<<"YES\n";return;
#define noR cout<<"NO\n";return;
#define vit vector<int>::iterator  
#define forcin(n) for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
void printVec(vector<int> v2, string s = "")//vector ke print kore just printVec(v) likle hobe
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<<v2[i]<<" ";
		cout<<"\n";
}

void solve()
{
    int n , k;
    cin >> n >> k;
    vi v(n), s;
    forcin(v);
    sort(all(v));
    if(n == 1){
        cout << 0 << nl;
        return;
    }
    int m  =INT32_MIN, x = 0;
    
     for(int i = 0; i < sz(v)-1; i++)
    {
        if(abs(v[i]-v[i+1] ) > k)
        {
           s.pb(0);
        }
        else s.pb(1);
    }
    bool f = true;
    for(int i = 0 ; i < sz(s) ; i++)
    {
        if(s[i] == 1 )
        {
            x++;
        }
        if(s[i] == 0)
        {
            x = 0;
        }
        if(m < x)m = x;
    }
    cout << n-1-m << nl;


}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}