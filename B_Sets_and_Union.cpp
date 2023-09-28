// Bismillahir Rahmanir Raheem
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
#define yesR {cout<<"YES\n";return;}
#define noR {cout<<"NO\n";return;}
#define vit vector<int>::iterator  
#define forcin(n) for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ever ;1;
void print(auto v2, string s = "")
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<<v2[i]<<" ";
		cout<<"\n";
}
/*        ／＞　　フ
　　　　　| 　_　 _ |
　 　　　／` ミ＿Yノ     meow
　　 　 /　　　 　 |   
　　　 /　 ヽ　　 ﾉ  
　 　 │　　|　|　|
　／￣|　　 |　|　|    
　| (￣ヽ＿_ヽ_)__)   
　＼二つ
*/
void solve()
{
    set<int>m;
    
    int n;
    cin >> n;
    set<int> a[n];
    int i =0;
    while(n--)
    {
        int x;
        cin >> x;
        while(x--)
        {
            int k;
            cin >> k;
            m.insert(k);
            a[i].insert(k);
        }
        i++;
    }  
    set<int>t;
    forcout(m);
    
    int s;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        t = a[i];
        s = sz(a[i]);

        for(int j = 0; j < n ; j++)
        {
            for(auto u : a[j])t.insert(u);
            cout << sz(t) << nl;
            if(sz(t) != sz(m))
            {
                ans = max(ans,sz(t));
            }
        }
    }
    cout << ans << nl;


}

int main(){
     bismillah
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}




