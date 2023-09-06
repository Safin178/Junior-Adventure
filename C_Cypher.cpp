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

    string s[n];
    int x;
    for(int i = 0 ;i < n; i++)
    {
        
        cin >> x >> s[i];
        
    }

    for(int i = 0 ;i < n ; i++)
    {
        for(int j = 0; j < sz(s[i]); j++)
        {
            
            if(s[i][j] == 'U') s[i][j] = 'D';
            else s[i][j] = 'U';
        }
        
    }
    for(int i = 0; i < n ;i++)
    {
        int cnt = v[i];
        for(int j = 0; j < sz(s[i]); j++)
        {
            if(s[i][j] == 'U')cnt++;
            else if(s[i][j] == 'D' )cnt--;
            if(cnt == 10) cnt = 0;
            if(cnt == -1) cnt = 9;
        }
        cout << cnt << " ";
    }

    cout << nl;



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}