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
    int n , x, maxi = INT32_MAX, pos;
    cin >> n;
    vi v(n), f;
    
    forcin(v);
    

    for(int i = 0; i < sz(v)-1; i++)
    {
        if(v[i] > v[i+1])
        {
            cout << 0 << nl;
            return;
        }
    }

    for(int i = 0; i < sz(v)-1; i++)
    {
        x = v[i+1] - v[i];
      
        if(maxi > x)
        {
            maxi = x;
            pos = i+1;
        }
    }
    int y;
    
    x = v[pos];
    y = v[pos-1];
   // cout << x << " " << y << nl;;

    int cnt ;
    int k = (x+y)/2;
    cnt = (k - min(x,y) );

    cout << cnt+1 << nl;



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}