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
    int n;
    cin >> n;
    vi v(n);
    forcin(v);
    int min_ev =INT32_MAX, min_odd =INT32_MAX;
    
    sort(all(v));
    bool f1 = false, f2 = false;

    for(int i =0 ;i < sz(v); i++)
    {
        if(min_ev > v[i] && v[i] % 2 == 0)
        {
            min_ev = v[i];
            f1 = true;
        }
        if(min_odd > v[i] && v[i] % 2 != 0)
        {
            min_odd = v[i];
            f2 = true;
        }
    }
    if(!(f1 && f2))
    {
        yesR;
    }
    if(v[0] % 2 == 0)
    {
        for(int i = 1 ; i < sz(v); i++)
        {
            if(v[i] % 2 != 0)
            v[i] = v[i] - min_odd;
        }
    }
    else{
        for(int i = 1 ; i < sz(v); i++)
        {
            if(v[i] % 2 == 0)
            v[i] = v[i] - min_odd;
        }
    }
    // printVec(v,"here ");
    //  cout << min_ev << " " << min_odd << nl;
     for(int i = 0; i < sz(v); i++)
        {
            if(v[i]  == 0)
            {noR;}
        }
        yesR;




}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}