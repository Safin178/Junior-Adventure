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
    int n;
    cin >> n;
    n--;
    int xx,yy,x,y;
    cin >> xx >> yy;
    vi v;
    

    while(n--)
    {   
        cin >> x >> y;
        if(xx <= x)
        {
            v.pb(y);
        }
    }
   // print(v);
    for(int i = 0; i < sz(v); i++)
    {
        if(yy <= v[i])
        {
            cout << -1 << nl;
            return;
        }
    }
     cout << xx << nl;

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




