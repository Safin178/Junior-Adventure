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
    string a , b ; 
    cin >> a >> b;
    a = a+b;
    int cnt  = 0;
    vi f(27);
    for(int i =  0; i < sz(a) ; i++)
    {
        f[a[i]-'a']++;
    }
    for(int i = 0 ; i < sz(f); i++)
    {
        if(f[i] > 0)cnt++;
    }
    cout << cnt-1 << nl;



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}