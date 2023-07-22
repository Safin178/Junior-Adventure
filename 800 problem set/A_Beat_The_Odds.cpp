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

void solve()//bhul
{
    int n;
    cin >> n;
    vi v(n);
    forcin(v);

    ll x ,sum = 0;

    for(int i = 0; i < sz(v)-1;i+=2)
    {
        x = v[i] + v[i+1];
        if(x % 2 != 0)
            {
                v[i+1] -= 1;
                sum++;
            }
    }
    cout << sum << nl;



}
void solve2()
{
     int n;
    cin >> n;
    vi v(n);
    forcin(v);

    int ev = 0 , odd = 0;
    for(int i = 0; i  < sz(v); i++)
    {
        if(v[i] % 2 == 0)
        {
            ev++;
        }
        else odd++;
    }
    
    cout <<  min(odd,ev) << nl;

}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve2();
    }
    return 0;
}